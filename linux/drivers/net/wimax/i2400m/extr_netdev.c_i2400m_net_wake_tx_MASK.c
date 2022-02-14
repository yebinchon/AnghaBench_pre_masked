
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct net_device {int dummy; } ;
struct i2400m {int tx_lock; int wake_tx_ws; int wake_tx_skb; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct device*,int ,int ) ;
 int FUNC_2 (int,struct device*,char*,struct sk_buff*,struct net_device*,int) ;
 int FUNC_3 (int,struct device*,char*,struct sk_buff*,struct net_device*) ;
 int FUNC_4 (int,struct device*,char*,struct sk_buff*,int ) ;
 struct device* FUNC_5 (struct i2400m*) ;
 int FUNC_6 (struct i2400m*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static
int FUNC_15(struct i2400m *VAR_1, struct net_device *VAR_2,
         struct sk_buff *VAR_3)
{
 int VAR_4;
 struct device *VAR_5 = FUNC_5(VAR_1);
 unsigned long VAR_6;

 FUNC_3(3, VAR_5, "(skb %p net_dev %p)\n", VAR_3, VAR_2);
 if (FUNC_8()) {
  FUNC_4(3, VAR_5, "WAKE&NETTX: "
    "skb %p sending %d bytes to radio\n",
    VAR_3, VAR_3->len);
  FUNC_1(4, VAR_5, VAR_3->data, VAR_3->len);
 }



 VAR_4 = 0;
 FUNC_13(&VAR_1->tx_lock, VAR_6);
 if (!VAR_1->wake_tx_skb) {
  FUNC_10(VAR_2);
  FUNC_6(VAR_1);
  VAR_1->wake_tx_skb = FUNC_12(VAR_3);
  FUNC_7(VAR_3);
  VAR_4 = FUNC_11(&VAR_1->wake_tx_ws);
  FUNC_0(VAR_4 == 0);
 }
 FUNC_14(&VAR_1->tx_lock, VAR_6);
 if (VAR_4 == 0) {




  if (FUNC_8())
   FUNC_4(1, VAR_5, "NETTX: device exiting idle, "
     "dropping skb %p, queue running %d\n",
     VAR_3, FUNC_9(VAR_2));
  VAR_4 = -VAR_0;
 }
 FUNC_2(3, VAR_5, "(skb %p net_dev %p) = %d\n", VAR_3, VAR_2, VAR_4);
 return VAR_4;
}
