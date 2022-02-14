
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_vreg_info {int vdd_hba; } ;
struct ufs_hba {int dev; struct ufs_vreg_info vreg_info; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ufs_hba *VAR_0, bool VAR_1)
{
 struct ufs_vreg_info *VAR_2 = &VAR_0->vreg_info;

 return FUNC_0(VAR_0->dev, VAR_2->vdd_hba, VAR_1);
}
