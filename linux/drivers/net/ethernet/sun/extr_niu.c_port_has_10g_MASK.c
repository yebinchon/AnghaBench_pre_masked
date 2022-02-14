
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_probe_info {int* cur; int** phy_port; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(struct phy_probe_info *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->cur[VAR_1]; VAR_4++) {
  if (VAR_2->phy_port[VAR_1][VAR_4] == VAR_3)
   return 1;
 }
 for (VAR_4 = 0; VAR_4 < VAR_2->cur[VAR_0]; VAR_4++) {
  if (VAR_2->phy_port[VAR_0][VAR_4] == VAR_3)
   return 1;
 }

 return 0;
}
