
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport {int dummy; } ;
struct csio_rnode {int role; int nport_id; struct fc_rport* rport; } ;
struct csio_lnode {int num_reg_rnodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct csio_lnode*,char*,int ) ;
 struct csio_lnode* FUNC_1 (struct csio_rnode*) ;
 int FUNC_2 (struct fc_rport*) ;

void
FUNC_3(struct csio_rnode *VAR_2)
{
 struct csio_lnode *VAR_3 = FUNC_1(VAR_2);
 struct fc_rport *VAR_4 = VAR_2->rport;

 VAR_2->role &= ~(VAR_0 | VAR_1);
 FUNC_2(VAR_4);
 VAR_3->num_reg_rnodes--;

 FUNC_0(VAR_3, "Remote port x%x un-registered\n", VAR_2->nport_id);
}
