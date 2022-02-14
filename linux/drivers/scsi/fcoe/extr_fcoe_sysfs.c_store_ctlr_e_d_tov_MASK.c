
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcoe_ctlr_device {scalar_t__ enabled; } ;
struct fcoe_ctlr {TYPE_1__* lp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int e_d_tov; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct fcoe_ctlr_device* FUNC_0 (struct device*) ;
 struct fcoe_ctlr* FUNC_1 (struct fcoe_ctlr_device*) ;
 int FUNC_2 (int *,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
      struct device_attribute *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 struct fcoe_ctlr_device *VAR_8 = FUNC_0(VAR_4);
 struct fcoe_ctlr *VAR_9 = FUNC_1(VAR_8);

 if (VAR_8->enabled == VAR_3)
  return -VAR_0;
 if (VAR_8->enabled == VAR_2)
  return FUNC_2(&VAR_9->lp->e_d_tov, VAR_6, VAR_7);
 return -VAR_1;
}
