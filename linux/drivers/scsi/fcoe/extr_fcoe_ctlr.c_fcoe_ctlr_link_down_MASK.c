
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_ctlr {scalar_t__ state; int lp; int ctlr_mutex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fcoe_ctlr*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fcoe_ctlr*) ;
 int FUNC_3 (struct fcoe_ctlr*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct fcoe_ctlr *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1, "link down.\n");
 FUNC_4(&VAR_1->ctlr_mutex);
 FUNC_2(VAR_1);
 VAR_2 = VAR_1->state != VAR_0;
 FUNC_3(VAR_1, VAR_0);
 FUNC_5(&VAR_1->ctlr_mutex);

 if (VAR_2)
  FUNC_1(VAR_1->lp);
 return VAR_2;
}
