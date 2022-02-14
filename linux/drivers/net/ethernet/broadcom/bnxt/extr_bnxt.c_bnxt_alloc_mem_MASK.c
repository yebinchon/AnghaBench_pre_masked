
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u16 ;
struct TYPE_18__ {void* flags; } ;
struct TYPE_19__ {TYPE_7__ ring_mem; } ;
struct bnxt_tx_ring_info {int txq_index; TYPE_9__* bnapi; TYPE_8__ tx_ring_struct; } ;
struct TYPE_16__ {void* flags; } ;
struct TYPE_17__ {TYPE_5__ ring_mem; } ;
struct TYPE_14__ {void* flags; } ;
struct TYPE_15__ {TYPE_3__ ring_mem; } ;
struct bnxt_rx_ring_info {TYPE_9__* bnapi; TYPE_6__ rx_agg_ring_struct; TYPE_4__ rx_ring_struct; } ;
struct bnxt_napi {int dummy; } ;
struct TYPE_12__ {void* flags; } ;
struct TYPE_13__ {TYPE_1__ ring_mem; } ;
struct bnxt_cp_ring_info {TYPE_2__ cp_ring_struct; } ;
struct bnxt {int cp_nr_rings; int flags; int rx_nr_rings; int tx_nr_rings; int* tx_ring_map; int tx_nr_rings_xdp; TYPE_10__* vnic_info; TYPE_9__** bnapi; struct bnxt_tx_ring_info* tx_ring; struct bnxt_rx_ring_info* rx_ring; } ;
struct TYPE_20__ {int index; int tx_int; int flags; struct bnxt_tx_ring_info* tx_ring; struct bnxt_rx_ring_info* rx_ring; struct bnxt_cp_ring_info cp_ring; struct bnxt* bp; } ;
struct TYPE_11__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*) ;
 int FUNC_5 (struct bnxt*) ;
 int FUNC_6 (struct bnxt*) ;
 int FUNC_7 (struct bnxt*) ;
 int FUNC_8 (struct bnxt*,int) ;
 int FUNC_9 (struct bnxt*) ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_10 (int,int,int ) ;
 void* FUNC_11 (int,int ) ;

__attribute__((used)) static int FUNC_12(struct bnxt *VAR_11, bool VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 void *VAR_18;

 if (VAR_12) {



  VAR_17 = FUNC_0(sizeof(struct bnxt_napi *) *
    VAR_11->cp_nr_rings);
  VAR_16 = FUNC_0(sizeof(struct bnxt_napi));
  VAR_18 = FUNC_11(VAR_17 + VAR_16 * VAR_11->cp_nr_rings, VAR_8);
  if (!VAR_18)
   return -VAR_7;

  VAR_11->bnapi = VAR_18;
  VAR_18 += VAR_17;
  for (VAR_13 = 0; VAR_13 < VAR_11->cp_nr_rings; VAR_13++, VAR_18 += VAR_16) {
   VAR_11->bnapi[VAR_13] = VAR_18;
   VAR_11->bnapi[VAR_13]->index = VAR_13;
   VAR_11->bnapi[VAR_13]->bp = VAR_11;
   if (VAR_11->flags & VAR_0) {
    struct bnxt_cp_ring_info *VAR_19 =
     &VAR_11->bnapi[VAR_13]->cp_ring;

    VAR_19->cp_ring_struct.ring_mem.flags =
     VAR_3;
   }
  }

  VAR_11->rx_ring = FUNC_10(VAR_11->rx_nr_rings,
          sizeof(struct bnxt_rx_ring_info),
          VAR_8);
  if (!VAR_11->rx_ring)
   return -VAR_7;

  for (VAR_13 = 0; VAR_13 < VAR_11->rx_nr_rings; VAR_13++) {
   struct bnxt_rx_ring_info *VAR_20 = &VAR_11->rx_ring[VAR_13];

   if (VAR_11->flags & VAR_0) {
    VAR_20->rx_ring_struct.ring_mem.flags =
     VAR_3;
    VAR_20->rx_agg_ring_struct.ring_mem.flags =
     VAR_3;
   }
   VAR_20->bnapi = VAR_11->bnapi[VAR_13];
   VAR_11->bnapi[VAR_13]->rx_ring = &VAR_11->rx_ring[VAR_13];
  }

  VAR_11->tx_ring = FUNC_10(VAR_11->tx_nr_rings,
          sizeof(struct bnxt_tx_ring_info),
          VAR_8);
  if (!VAR_11->tx_ring)
   return -VAR_7;

  VAR_11->tx_ring_map = FUNC_10(VAR_11->tx_nr_rings, sizeof(u16),
       VAR_8);

  if (!VAR_11->tx_ring_map)
   return -VAR_7;

  if (VAR_11->flags & VAR_1)
   VAR_14 = 0;
  else
   VAR_14 = VAR_11->rx_nr_rings;

  for (VAR_13 = 0; VAR_13 < VAR_11->tx_nr_rings; VAR_13++, VAR_14++) {
   struct bnxt_tx_ring_info *VAR_21 = &VAR_11->tx_ring[VAR_13];

   if (VAR_11->flags & VAR_0)
    VAR_21->tx_ring_struct.ring_mem.flags =
     VAR_3;
   VAR_21->bnapi = VAR_11->bnapi[VAR_14];
   VAR_11->bnapi[VAR_14]->tx_ring = VAR_21;
   VAR_11->tx_ring_map[VAR_13] = VAR_11->tx_nr_rings_xdp + VAR_13;
   if (VAR_13 >= VAR_11->tx_nr_rings_xdp) {
    VAR_21->txq_index = VAR_13 - VAR_11->tx_nr_rings_xdp;
    VAR_11->bnapi[VAR_14]->tx_int = VAR_9;
   } else {
    VAR_11->bnapi[VAR_14]->flags |= VAR_2;
    VAR_11->bnapi[VAR_14]->tx_int = VAR_10;
   }
  }

  VAR_15 = FUNC_4(VAR_11);
  if (VAR_15)
   goto alloc_mem_err;

  VAR_15 = FUNC_2(VAR_11);
  if (VAR_15)
   goto alloc_mem_err;

  VAR_15 = FUNC_7(VAR_11);
  if (VAR_15)
   goto alloc_mem_err;
 }

 FUNC_9(VAR_11);

 VAR_15 = FUNC_3(VAR_11);
 if (VAR_15)
  goto alloc_mem_err;

 VAR_15 = FUNC_5(VAR_11);
 if (VAR_15)
  goto alloc_mem_err;

 VAR_15 = FUNC_1(VAR_11);
 if (VAR_15)
  goto alloc_mem_err;

 VAR_11->vnic_info[0].flags |= VAR_5 | VAR_4 |
      VAR_6;
 VAR_15 = FUNC_6(VAR_11);
 if (VAR_15)
  goto alloc_mem_err;
 return 0;

alloc_mem_err:
 FUNC_8(VAR_11, 1);
 return VAR_15;
}
