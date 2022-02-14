
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_otg {scalar_t__ clock_gating; } ;


 int FUNC_0 (struct mv_otg*) ;

__attribute__((used)) static int FUNC_1(struct mv_otg *VAR_0)
{
 if (VAR_0->clock_gating)
  return FUNC_0(VAR_0);

 return 0;
}
