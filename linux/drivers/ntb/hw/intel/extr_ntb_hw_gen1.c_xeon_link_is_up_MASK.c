
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ topo; } ;
struct intel_ntb_dev {int lnk_sta; TYPE_1__ ntb; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

int FUNC_1(struct intel_ntb_dev *VAR_1)
{
 if (VAR_1->ntb.topo == VAR_0)
  return 1;

 return FUNC_0(VAR_1->lnk_sta);
}
