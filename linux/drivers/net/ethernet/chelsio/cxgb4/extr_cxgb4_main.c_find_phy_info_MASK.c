
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info_10gbt_phy_fw {int phy_fw_id; } ;


 int FUNC_0 (struct info_10gbt_phy_fw*) ;
 struct info_10gbt_phy_fw* VAR_0 ;

__attribute__((used)) static struct info_10gbt_phy_fw *FUNC_1(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].phy_fw_id == VAR_1)
   return &VAR_0[VAR_2];
 }
 return ((void*)0);
}
