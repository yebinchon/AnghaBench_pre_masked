
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
union e1000_adv_tx_desc {TYPE_1__ wb; } ;
struct sk_buff {unsigned int len; } ;
struct TYPE_5__ {unsigned int tx_bytes; unsigned int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct igbvf_ring {unsigned int next_to_clean; unsigned int count; struct igbvf_buffer* buffer_info; struct igbvf_adapter* adapter; } ;
struct igbvf_buffer {union e1000_adv_tx_desc* next_to_watch; struct sk_buff* skb; } ;
struct igbvf_adapter {int restart_queue; int state; struct net_device* netdev; } ;
struct TYPE_6__ {scalar_t__ gso_segs; } ;


 int VAR_0 ;
 union e1000_adv_tx_desc* FUNC_0 (struct igbvf_ring,unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct igbvf_ring*) ;
 int FUNC_3 (struct igbvf_adapter*,struct igbvf_buffer*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 unsigned int FUNC_7 (struct sk_buff*) ;
 TYPE_3__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static bool FUNC_13(struct igbvf_ring *VAR_3)
{
 struct igbvf_adapter *VAR_4 = VAR_3->adapter;
 struct net_device *VAR_5 = VAR_4->netdev;
 struct igbvf_buffer *VAR_6;
 struct sk_buff *VAR_7;
 union e1000_adv_tx_desc *VAR_8, *VAR_9;
 unsigned int VAR_10 = 0, VAR_11 = 0;
 unsigned int VAR_12, VAR_13 = 0;
 bool VAR_14 = 0;

 VAR_12 = VAR_3->next_to_clean;
 VAR_6 = &VAR_3->buffer_info[VAR_12];
 VAR_9 = VAR_6->next_to_watch;

 do {

  if (!VAR_9)
   break;


  FUNC_10();


  if (!(VAR_9->wb.status & FUNC_1(VAR_0)))
   break;


  VAR_6->next_to_watch = ((void*)0);

  for (VAR_14 = 0; !VAR_14; VAR_13++) {
   VAR_8 = FUNC_0(*VAR_3, VAR_12);
   VAR_14 = (VAR_8 == VAR_9);
   VAR_7 = VAR_6->skb;

   if (VAR_7) {
    unsigned int VAR_15, VAR_16;


    VAR_15 = FUNC_8(VAR_7)->gso_segs ?: 1;

    VAR_16 = ((VAR_15 - 1) * FUNC_7(VAR_7)) +
         VAR_7->len;
    VAR_11 += VAR_15;
    VAR_10 += VAR_16;
   }

   FUNC_3(VAR_4, VAR_6);
   VAR_8->wb.status = 0;

   VAR_12++;
   if (VAR_12 == VAR_3->count)
    VAR_12 = 0;

   VAR_6 = &VAR_3->buffer_info[VAR_12];
  }

  VAR_9 = VAR_6->next_to_watch;
 } while (VAR_13 < VAR_3->count);

 VAR_3->next_to_clean = VAR_12;

 if (FUNC_12(VAR_13 && FUNC_4(VAR_5) &&
     FUNC_2(VAR_3) >= VAR_1)) {



  FUNC_9();
  if (FUNC_5(VAR_5) &&
      !(FUNC_11(VAR_2, &VAR_4->state))) {
   FUNC_6(VAR_5);
   ++VAR_4->restart_queue;
  }
 }

 VAR_5->stats.tx_bytes += VAR_10;
 VAR_5->stats.tx_packets += VAR_11;
 return VAR_13 < VAR_3->count;
}
