
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qlen; int lock; } ;
struct usbnet {TYPE_1__ done; int bh; } ;
struct skb_data {int state; } ;
struct sk_buff_head {int lock; } ;
struct sk_buff {scalar_t__ cb; } ;
typedef enum skb_state { ____Placeholder_skb_state } skb_state ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static enum skb_state FUNC_7(struct usbnet *VAR_1, struct sk_buff *VAR_2,
  struct sk_buff_head *VAR_3, enum skb_state VAR_4)
{
 unsigned long VAR_5;
 enum skb_state VAR_6;
 struct skb_data *VAR_7 = (struct skb_data *) VAR_2->cb;

 FUNC_2(&VAR_3->lock, VAR_5);
 VAR_6 = VAR_7->state;
 VAR_7->state = VAR_4;
 FUNC_1(VAR_2, VAR_3);





 FUNC_3(&VAR_1->done.lock, VAR_0);

 FUNC_0(&VAR_1->done, VAR_2);
 if (VAR_1->done.qlen == 1)
  FUNC_6(&VAR_1->bh);
 FUNC_4(&VAR_1->done.lock);
 FUNC_5(&VAR_3->lock, VAR_5);
 return VAR_6;
}
