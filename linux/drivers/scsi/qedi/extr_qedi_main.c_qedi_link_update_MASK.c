
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_ctx {int link_state; int dbg_ctx; } ;
struct qed_link_output {scalar_t__ link_up; } ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_3, struct qed_link_output *VAR_4)
{
 struct qedi_ctx *VAR_5 = (struct qedi_ctx *)VAR_3;

 if (VAR_4->link_up) {
  FUNC_0(&VAR_5->dbg_ctx, VAR_2, "Link Up event.\n");
  FUNC_1(&VAR_5->link_state, VAR_1);
 } else {
  FUNC_0(&VAR_5->dbg_ctx, VAR_2,
     "Link Down event.\n");
  FUNC_1(&VAR_5->link_state, VAR_0);
 }
}
