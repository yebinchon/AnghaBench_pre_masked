
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int dummy; } ;
struct adin_clause45_mmd_map {int devad; int cl45_regnum; int adin_regnum; } ;


 int FUNC_0 (struct adin_clause45_mmd_map*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct adin_clause45_mmd_map* VAR_2 ;
 int FUNC_1 (struct phy_device*,char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_3, int VAR_4,
     u16 VAR_5)
{
 struct adin_clause45_mmd_map *VAR_6;
 int VAR_7;

 if (VAR_4 == VAR_1)
  return VAR_5;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  VAR_6 = &VAR_2[VAR_7];
  if (VAR_6->devad == VAR_4 && VAR_6->cl45_regnum == VAR_5)
   return VAR_6->adin_regnum;
 }

 FUNC_1(VAR_3,
     "No translation available for devad: %d reg: %04x\n",
     VAR_4, VAR_5);

 return -VAR_0;
}
