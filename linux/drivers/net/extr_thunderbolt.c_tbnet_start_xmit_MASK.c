
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct thunderbolt_ip_frame_header {void* frame_id; void* frame_index; void* frame_size; } ;
struct TYPE_9__ {unsigned int size; } ;
struct tbnet_frame {TYPE_4__ frame; int page; } ;
struct TYPE_7__ {unsigned int tx_bytes; int tx_errors; int tx_packets; } ;
struct TYPE_8__ {size_t cons; int ring; } ;
struct tbnet {TYPE_2__ stats; TYPE_3__ tx_ring; int frame_id; TYPE_1__* svc; int dev; } ;
struct sk_buff {unsigned int len; void* data; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_10__ {unsigned int nr_frags; } ;
struct TYPE_6__ {int prtcstns; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 void* FUNC_3 (size_t) ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*,void*,unsigned int) ;
 struct tbnet* FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ) ;
 struct thunderbolt_ip_frame_header* FUNC_11 (int ) ;
 unsigned int FUNC_12 (struct sk_buff*) ;
 TYPE_5__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (int ,TYPE_4__*) ;
 unsigned int FUNC_15 (TYPE_3__*) ;
 struct tbnet_frame* FUNC_16 (struct tbnet*) ;
 void* FUNC_17 (struct sk_buff*,int ,unsigned int*) ;
 int FUNC_18 (struct tbnet*,struct sk_buff*,struct tbnet_frame**,size_t) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_20(struct sk_buff *VAR_5,
        struct net_device *VAR_6)
{
 struct tbnet *VAR_7 = FUNC_9(VAR_6);
 struct tbnet_frame *VAR_8[VAR_0];
 u16 VAR_9 = FUNC_2(&VAR_7->frame_id);
 struct thunderbolt_ip_frame_header *VAR_10;
 unsigned int VAR_11 = FUNC_12(VAR_5);
 unsigned int VAR_12 = VAR_5->len;
 unsigned int VAR_13, VAR_14;
 unsigned int VAR_15 = 0;
 void *VAR_16 = VAR_5->data;
 u32 VAR_17 = 0;
 bool VAR_18 = 0;
 void *VAR_19;

 VAR_13 = FUNC_0(VAR_12, VAR_4);
 if (FUNC_15(&VAR_7->tx_ring) < VAR_13) {
  FUNC_10(VAR_7->dev);
  return VAR_1;
 }

 VAR_8[VAR_17] = FUNC_16(VAR_7);
 if (!VAR_8[VAR_17])
  goto err_drop;

 VAR_10 = FUNC_11(VAR_8[VAR_17]->page);
 VAR_19 = VAR_10 + 1;


 while (VAR_12 > VAR_4) {
  unsigned int VAR_20 = VAR_4;

  VAR_10->frame_size = FUNC_4(VAR_4);
  VAR_10->frame_index = FUNC_3(VAR_17);
  VAR_10->frame_id = FUNC_3(VAR_9);

  do {
   if (VAR_11 > VAR_20) {




    FUNC_8(VAR_19, VAR_16, VAR_20);
    VAR_11 -= VAR_20;
    VAR_19 += VAR_20;
    VAR_16 += VAR_20;
    break;
   }

   FUNC_8(VAR_19, VAR_16, VAR_11);
   VAR_20 -= VAR_11;
   VAR_19 += VAR_11;

   if (VAR_18) {
    FUNC_7(VAR_16);
    VAR_18 = 0;
   }


   if (VAR_15 < FUNC_13(VAR_5)->nr_frags) {

    VAR_16 = FUNC_17(VAR_5, VAR_15++, &VAR_11);
    VAR_18 = 1;
   } else if (FUNC_19(VAR_20 > 0)) {
    goto err_drop;
   }
  } while (VAR_20 > 0);

  VAR_12 -= VAR_4;
  VAR_17++;

  VAR_8[VAR_17] = FUNC_16(VAR_7);
  if (!VAR_8[VAR_17])
   goto err_drop;

  VAR_10 = FUNC_11(VAR_8[VAR_17]->page);
  VAR_19 = VAR_10 + 1;
 }

 VAR_10->frame_size = FUNC_4(VAR_12);
 VAR_10->frame_index = FUNC_3(VAR_17);
 VAR_10->frame_id = FUNC_3(VAR_9);

 VAR_8[VAR_17]->frame.size = VAR_12 + sizeof(*VAR_10);


 while (VAR_11 < VAR_12) {
  FUNC_8(VAR_19, VAR_16, VAR_11);
  VAR_12 -= VAR_11;
  VAR_19 += VAR_11;

  if (VAR_18) {
   FUNC_7(VAR_16);
   VAR_18 = 0;
  }

  if (VAR_15 < FUNC_13(VAR_5)->nr_frags) {
   VAR_16 = FUNC_17(VAR_5, VAR_15++, &VAR_11);
   VAR_18 = 1;
  } else if (FUNC_19(VAR_12 > 0)) {
   goto err_drop;
  }
 }

 FUNC_8(VAR_19, VAR_16, VAR_12);

 if (VAR_18)
  FUNC_7(VAR_16);

 if (!FUNC_18(VAR_7, VAR_5, VAR_8, VAR_17 + 1))
  goto err_drop;

 for (VAR_14 = 0; VAR_14 < VAR_17 + 1; VAR_14++)
  FUNC_14(VAR_7->tx_ring.ring, &VAR_8[VAR_14]->frame);

 if (VAR_7->svc->prtcstns & VAR_3)
  FUNC_1(&VAR_7->frame_id);

 VAR_7->stats.tx_packets++;
 VAR_7->stats.tx_bytes += VAR_5->len;

 FUNC_5(VAR_5);

 return VAR_2;

err_drop:

 VAR_7->tx_ring.cons -= VAR_17;

 FUNC_6(VAR_5);
 VAR_7->stats.tx_errors++;

 return VAR_2;
}
