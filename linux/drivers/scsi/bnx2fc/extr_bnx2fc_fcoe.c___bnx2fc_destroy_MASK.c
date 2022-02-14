
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_port {int destroy_work; } ;
struct fcoe_ctlr {struct fc_lport* lp; } ;
struct fc_lport {int dummy; } ;
struct bnx2fc_interface {int list; } ;


 int FUNC_0 (struct bnx2fc_interface*) ;
 int FUNC_1 (struct bnx2fc_interface*) ;
 int FUNC_2 (struct bnx2fc_interface*) ;
 struct fcoe_ctlr* FUNC_3 (struct bnx2fc_interface*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 struct fcoe_port* FUNC_5 (struct fc_lport*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct bnx2fc_interface *VAR_1)
{
 struct fcoe_ctlr *VAR_2 = FUNC_3(VAR_1);
 struct fc_lport *VAR_3 = VAR_2->lp;
 struct fcoe_port *VAR_4 = FUNC_5(VAR_3);

 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 FUNC_4(&VAR_1->list);
 FUNC_1(VAR_1);
 FUNC_6(VAR_0, &VAR_4->destroy_work);
}
