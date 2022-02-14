
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct i2400m {int rx_lock; int msg_completion; struct sk_buff* ack_skb; struct wimax_dev wimax_dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 struct device* FUNC_5 (struct i2400m*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct sk_buff* FUNC_9 (struct wimax_dev*,int *,void const*,size_t,int ) ;

__attribute__((used)) static
void FUNC_10(struct i2400m *VAR_2,
         const void *VAR_3, size_t VAR_4)
{
 struct device *VAR_5 = FUNC_5(VAR_2);
 struct wimax_dev *VAR_6 = &VAR_2->wimax_dev;
 unsigned long VAR_7;
 struct sk_buff *VAR_8;


 FUNC_7(&VAR_2->rx_lock, VAR_7);
 if (VAR_2->ack_skb != FUNC_0(-VAR_0)) {
  FUNC_4(VAR_5, "Huh? reply to command with no waiters\n");
  goto error_no_waiter;
 }
 FUNC_8(&VAR_2->rx_lock, VAR_7);

 VAR_8 = FUNC_9(VAR_6, ((void*)0), VAR_3, VAR_4, VAR_1);


 FUNC_7(&VAR_2->rx_lock, VAR_7);
 if (VAR_2->ack_skb != FUNC_0(-VAR_0)) {
  FUNC_3(1, VAR_5, "Huh? waiter for command reply cancelled\n");
  goto error_waiter_cancelled;
 }
 if (FUNC_1(VAR_8))
  FUNC_4(VAR_5, "CMD/GET/SET ack: cannot allocate SKB\n");
 VAR_2->ack_skb = VAR_8;
 FUNC_8(&VAR_2->rx_lock, VAR_7);
 FUNC_2(&VAR_2->msg_completion);
 return;

error_waiter_cancelled:
 if (!FUNC_1(VAR_8))
  FUNC_6(VAR_8);
error_no_waiter:
 FUNC_8(&VAR_2->rx_lock, VAR_7);
}
