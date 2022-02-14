
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct fcoe_port {TYPE_1__ fcoe_pending_queue; } ;
struct fc_lport {int dummy; } ;


 struct sk_buff* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct fcoe_port* FUNC_2 (struct fc_lport*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct fc_lport *VAR_0)
{
 struct fcoe_port *VAR_1 = FUNC_2(VAR_0);
 struct sk_buff *VAR_2;

 FUNC_3(&VAR_1->fcoe_pending_queue.lock);
 while ((VAR_2 = FUNC_0(&VAR_1->fcoe_pending_queue)) != ((void*)0)) {
  FUNC_4(&VAR_1->fcoe_pending_queue.lock);
  FUNC_1(VAR_2);
  FUNC_3(&VAR_1->fcoe_pending_queue.lock);
 }
 FUNC_4(&VAR_1->fcoe_pending_queue.lock);
}
