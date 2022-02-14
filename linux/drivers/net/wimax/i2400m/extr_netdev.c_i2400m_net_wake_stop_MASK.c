
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct i2400m {int tx_lock; struct sk_buff* wake_tx_skb; int wake_tx_ws; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (struct i2400m*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct i2400m *VAR_0)
{
 struct device *VAR_1 = FUNC_3(VAR_0);
 struct sk_buff *VAR_2;
 unsigned long VAR_3;

 FUNC_2(3, VAR_1, "(i2400m %p)\n", VAR_0);




 FUNC_0(&VAR_0->wake_tx_ws);

 FUNC_6(&VAR_0->tx_lock, VAR_3);
 VAR_2 = VAR_0->wake_tx_skb;
 VAR_0->wake_tx_skb = ((void*)0);
 FUNC_7(&VAR_0->tx_lock, VAR_3);

 if (VAR_2) {
  FUNC_4(VAR_0);
  FUNC_5(VAR_2);
 }

 FUNC_1(3, VAR_1, "(i2400m %p) = void\n", VAR_0);
}
