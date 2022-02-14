
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_probe_info {int* cur; int** phy_port; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct phy_probe_info *VAR_1, int *VAR_2)
{
 *VAR_2 = 32;
 if (VAR_1->cur[VAR_0])
  *VAR_2 = VAR_1->phy_port[VAR_0][0];

 return VAR_1->cur[VAR_0];
}
