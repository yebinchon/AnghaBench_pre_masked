
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xircom_private {int transmit_used; scalar_t__* tx_buffer; int lock; struct sk_buff** tx_skb; } ;
struct sk_buff {int len; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,struct xircom_private*,int,int) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 struct xircom_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*,scalar_t__*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct xircom_private*) ;
 int FUNC_9 () ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_4,
        struct net_device *VAR_5)
{
 struct xircom_private *VAR_6;
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(VAR_5);
 FUNC_6(&VAR_6->lock,VAR_7);


 for (VAR_9=0;VAR_9<VAR_2;VAR_9++)
  FUNC_1(VAR_5,VAR_6,VAR_9,VAR_3[VAR_9]);


 VAR_8 = (VAR_6->transmit_used +1) % (VAR_2);
 VAR_9 = VAR_6->transmit_used;


 if (VAR_6->tx_buffer[4*VAR_9]==0) {



   FUNC_2(&VAR_6->tx_buffer[VAR_3[VAR_9]/4],0,1536);
   FUNC_5(VAR_4,
      &(VAR_6->tx_buffer[VAR_3[VAR_9] / 4]),
        VAR_4->len);



   VAR_6->tx_buffer[4*VAR_9+1] = FUNC_0(VAR_4->len);
   if (VAR_9 == VAR_2 - 1)
    VAR_6->tx_buffer[4*VAR_9+1] |= FUNC_0(1<<25);

   VAR_6->tx_buffer[4*VAR_9+1] |= FUNC_0(0xF0000000);

   VAR_6->tx_skb[VAR_9] = VAR_4;

   FUNC_9();

   VAR_6->tx_buffer[4*VAR_9] = FUNC_0(0x80000000);
   FUNC_8(VAR_6);
   if (VAR_6->tx_buffer[VAR_8*4] & FUNC_0(0x8000000)) {

    FUNC_4(VAR_5);
   }
   VAR_6->transmit_used = VAR_8;
   FUNC_7(&VAR_6->lock,VAR_7);
   return VAR_1;
 }


 FUNC_4(VAR_5);
 FUNC_7(&VAR_6->lock,VAR_7);
 FUNC_8(VAR_6);

 return VAR_0;
}
