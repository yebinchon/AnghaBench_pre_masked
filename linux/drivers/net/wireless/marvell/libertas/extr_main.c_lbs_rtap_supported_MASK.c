
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int fwcapinfo; int fwrelease; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_1(struct lbs_private *VAR_3)
{
 if (FUNC_0(VAR_3->fwrelease) == VAR_2)
  return 1;


 return ((FUNC_0(VAR_3->fwrelease) >= VAR_1) &&
  (VAR_3->fwcapinfo & VAR_0));
}
