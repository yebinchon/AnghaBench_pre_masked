
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ena_comp_ctx {int wait_event; int status; } ;
struct ena_com_admin_queue {scalar_t__ q_depth; int comp_ctx; } ;
struct ena_com_dev {struct ena_com_admin_queue admin_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ena_comp_ctx* FUNC_1 (struct ena_com_admin_queue*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct ena_com_dev *VAR_1)
{
 struct ena_com_admin_queue *VAR_2 = &VAR_1->admin_queue;
 struct ena_comp_ctx *VAR_3;
 u16 VAR_4;

 if (!VAR_2->comp_ctx)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_2->q_depth; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2, VAR_4, 0);
  if (FUNC_2(!VAR_3))
   break;

  VAR_3->status = VAR_0;

  FUNC_0(&VAR_3->wait_event);
 }
}
