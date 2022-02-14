
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fcoe_ctlr_device {int lesb; } ;
struct fcoe_ctlr {int lp; } ;
struct fc_els_lesb {int dummy; } ;


 int FUNC_0 (int ,struct fc_els_lesb*,struct net_device*) ;
 struct fcoe_ctlr* FUNC_1 (struct fcoe_ctlr_device*) ;
 struct net_device* FUNC_2 (int ) ;

void FUNC_3(struct fcoe_ctlr_device *VAR_0)
{
 struct fcoe_ctlr *VAR_1 = FUNC_1(VAR_0);
 struct net_device *VAR_2 = FUNC_2(VAR_1->lp);
 struct fc_els_lesb *VAR_3;

 VAR_3 = (struct fc_els_lesb *)(&VAR_0->lesb);
 FUNC_0(VAR_1->lp, VAR_3, VAR_2);
}
