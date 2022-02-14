
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {struct sk_buff_head event_queue; } ;
struct qtnf_bus {TYPE_1__ trans; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;

__attribute__((used)) static void FUNC_2(struct qtnf_bus *VAR_0)
{
 struct sk_buff_head *VAR_1 = &VAR_0->trans.event_queue;
 struct sk_buff *VAR_2 = FUNC_1(VAR_1);

 while (VAR_2) {
  FUNC_0(VAR_2);
  VAR_2 = FUNC_1(VAR_1);
 }
}
