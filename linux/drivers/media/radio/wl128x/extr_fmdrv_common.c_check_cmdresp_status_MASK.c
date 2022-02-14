
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int timer; } ;
struct fmdev {TYPE_1__ irq_info; int resp_skb_lock; struct sk_buff* resp_skb; } ;
struct fm_event_msg_hdr {scalar_t__ status; int op; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_5(struct fmdev *VAR_2,
  struct sk_buff **VAR_3)
{
 struct fm_event_msg_hdr *VAR_4;
 unsigned long VAR_5;

 FUNC_0(&VAR_2->irq_info.timer);

 FUNC_3(&VAR_2->resp_skb_lock, VAR_5);
 *VAR_3 = VAR_2->resp_skb;
 VAR_2->resp_skb = ((void*)0);
 FUNC_4(&VAR_2->resp_skb_lock, VAR_5);

 VAR_4 = (void *)(*VAR_3)->data;
 if (VAR_4->status != 0) {
  FUNC_1("irq: opcode %x response status is not zero Initiating irq recovery process\n",
    VAR_4->op);

  FUNC_2(&VAR_2->irq_info.timer, VAR_1 + VAR_0);
  return -1;
 }

 return 0;
}
