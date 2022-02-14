
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcoe_ctlr_device {int dummy; } ;
struct fcoe_ctlr {TYPE_1__* lp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int r_a_tov; } ;


 struct fcoe_ctlr_device* FUNC_0 (struct device*) ;
 struct fcoe_ctlr* FUNC_1 (struct fcoe_ctlr_device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct fcoe_ctlr_device *VAR_3 = FUNC_0(VAR_0);
 struct fcoe_ctlr *VAR_4 = FUNC_1(VAR_3);

 return FUNC_2(VAR_2, "%d\n", VAR_4->lp->r_a_tov);
}
