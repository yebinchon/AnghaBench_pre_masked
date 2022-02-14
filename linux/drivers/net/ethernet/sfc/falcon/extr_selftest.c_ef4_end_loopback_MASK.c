
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ef4_tx_queue {size_t queue; struct ef4_nic* efx; } ;
struct ef4_nic {int net_dev; struct ef4_loopback_state* loopback_selftest; } ;
struct ef4_loopback_state {int packet_count; int rx_bad; int rx_good; struct sk_buff** skbs; } ;
struct ef4_loopback_self_tests {int* tx_sent; int* tx_done; int rx_good; int rx_bad; } ;


 int VAR_0 ;
 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_3 (struct ef4_nic*,int ,int ,char*,size_t,int,int,int ) ;
 int FUNC_4 (struct ef4_nic*,int ,int ,char*,size_t,int,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct ef4_tx_queue *VAR_2,
       struct ef4_loopback_self_tests *VAR_3)
{
 struct ef4_nic *VAR_4 = VAR_2->efx;
 struct ef4_loopback_state *VAR_5 = VAR_4->loopback_selftest;
 struct sk_buff *VAR_6;
 int VAR_7 = 0, VAR_8, VAR_9;
 int VAR_10, VAR_11 = 0;

 FUNC_5(VAR_4->net_dev);



 for (VAR_10 = 0; VAR_10 < VAR_5->packet_count; VAR_10++) {
  VAR_6 = VAR_5->skbs[VAR_10];
  if (VAR_6 && !FUNC_7(VAR_6))
   ++VAR_7;
  FUNC_2(VAR_6);
 }

 FUNC_6(VAR_4->net_dev);


 VAR_8 = FUNC_1(&VAR_5->rx_good);
 VAR_9 = FUNC_1(&VAR_5->rx_bad);
 if (VAR_7 != VAR_5->packet_count) {



  FUNC_4(VAR_4, VAR_1, VAR_4->net_dev,
     "TX queue %d saw only %d out of an expected %d "
     "TX completion events in %s loopback test\n",
     VAR_2->queue, VAR_7, VAR_5->packet_count,
     FUNC_0(VAR_4));
  VAR_11 = -VAR_0;

 }


 if (VAR_8 != VAR_5->packet_count) {
  FUNC_3(VAR_4, VAR_1, VAR_4->net_dev,
     "TX queue %d saw only %d out of an expected %d "
     "received packets in %s loopback test\n",
     VAR_2->queue, VAR_8, VAR_5->packet_count,
     FUNC_0(VAR_4));
  VAR_11 = -VAR_0;

 }


 VAR_3->tx_sent[VAR_2->queue] += VAR_5->packet_count;
 VAR_3->tx_done[VAR_2->queue] += VAR_7;
 VAR_3->rx_good += VAR_8;
 VAR_3->rx_bad += VAR_9;

 return VAR_11;
}
