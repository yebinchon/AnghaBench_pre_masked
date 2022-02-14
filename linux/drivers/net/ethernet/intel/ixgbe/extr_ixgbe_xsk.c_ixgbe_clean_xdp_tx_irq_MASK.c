
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
union ixgbe_adv_tx_desc {TYPE_1__ wb; } ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct xdp_umem {int dummy; } ;
struct ixgbe_tx_buffer {int * xdpf; scalar_t__ gso_segs; scalar_t__ bytecount; } ;
struct TYPE_5__ {unsigned int bytes; unsigned int packets; } ;
struct ixgbe_ring {size_t next_to_clean; size_t next_to_use; size_t count; struct xdp_umem* xsk_umem; int syncp; TYPE_2__ stats; struct ixgbe_tx_buffer* tx_buffer_info; } ;
struct TYPE_6__ {unsigned int total_bytes; unsigned int total_packets; int work_limit; } ;
struct ixgbe_q_vector {TYPE_3__ tx; } ;


 int VAR_0 ;
 union ixgbe_adv_tx_desc* FUNC_0 (struct ixgbe_ring*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ixgbe_ring*,struct ixgbe_tx_buffer*) ;
 int FUNC_3 (struct ixgbe_ring*,int ) ;
 int FUNC_4 (union ixgbe_adv_tx_desc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct xdp_umem*) ;
 int FUNC_9 (struct xdp_umem*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct xdp_umem*) ;

bool FUNC_11(struct ixgbe_q_vector *VAR_1,
       struct ixgbe_ring *VAR_2, int VAR_3)
{
 u16 VAR_4 = VAR_2->next_to_clean, VAR_5 = VAR_2->next_to_use;
 unsigned int VAR_6 = 0, VAR_7 = 0;
 struct xdp_umem *VAR_8 = VAR_2->xsk_umem;
 union ixgbe_adv_tx_desc *VAR_9;
 struct ixgbe_tx_buffer *VAR_10;
 u32 VAR_11 = 0;

 VAR_10 = &VAR_2->tx_buffer_info[VAR_4];
 VAR_9 = FUNC_0(VAR_2, VAR_4);

 while (VAR_4 != VAR_5) {
  if (!(VAR_9->wb.status & FUNC_1(VAR_0)))
   break;

  VAR_7 += VAR_10->bytecount;
  VAR_6 += VAR_10->gso_segs;

  if (VAR_10->xdpf)
   FUNC_2(VAR_2, VAR_10);
  else
   VAR_11++;

  VAR_10->xdpf = ((void*)0);

  VAR_10++;
  VAR_9++;
  VAR_4++;
  if (FUNC_7(VAR_4 == VAR_2->count)) {
   VAR_4 = 0;
   VAR_10 = VAR_2->tx_buffer_info;
   VAR_9 = FUNC_0(VAR_2, 0);
  }


  FUNC_4(VAR_9);
 }

 VAR_2->next_to_clean = VAR_4;

 FUNC_5(&VAR_2->syncp);
 VAR_2->stats.bytes += VAR_7;
 VAR_2->stats.packets += VAR_6;
 FUNC_6(&VAR_2->syncp);
 VAR_1->tx.total_bytes += VAR_7;
 VAR_1->tx.total_packets += VAR_6;

 if (VAR_11)
  FUNC_9(VAR_8, VAR_11);

 if (FUNC_10(VAR_2->xsk_umem))
  FUNC_8(VAR_2->xsk_umem);

 return FUNC_3(VAR_2, VAR_1->tx.work_limit);
}
