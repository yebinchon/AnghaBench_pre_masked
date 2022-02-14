
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct skb_data {int state; } ;
struct sk_buff_head {int lock; } ;
struct sk_buff {scalar_t__ cb; } ;
struct TYPE_3__ {int lock; } ;
struct lan78xx_net {TYPE_1__ done; int bh; } ;
typedef enum skb_state { ____Placeholder_skb_state } skb_state ;


 int FUNC_0 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static enum skb_state FUNC_8(struct lan78xx_net *VAR_0, struct sk_buff *VAR_1,
          struct sk_buff_head *VAR_2, enum skb_state VAR_3)
{
 unsigned long VAR_4;
 enum skb_state VAR_5;
 struct skb_data *VAR_6 = (struct skb_data *)VAR_1->cb;

 FUNC_4(&VAR_2->lock, VAR_4);
 VAR_5 = VAR_6->state;
 VAR_6->state = VAR_3;

 FUNC_1(VAR_1, VAR_2);
 FUNC_5(&VAR_2->lock);
 FUNC_3(&VAR_0->done.lock);

 FUNC_0(&VAR_0->done, VAR_1);
 if (FUNC_2(&VAR_0->done) == 1)
  FUNC_7(&VAR_0->bh);
 FUNC_6(&VAR_0->done.lock, VAR_4);

 return VAR_5;
}
