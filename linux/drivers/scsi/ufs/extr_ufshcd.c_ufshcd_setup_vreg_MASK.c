
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_vreg_info {int vcc; int vccq; int vccq2; } ;
struct ufs_hba {struct ufs_vreg_info vreg_info; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ufs_hba *VAR_0, bool VAR_1)
{
 int VAR_2 = 0;
 struct device *VAR_3 = VAR_0->dev;
 struct ufs_vreg_info *VAR_4 = &VAR_0->vreg_info;

 VAR_2 = FUNC_0(VAR_3, VAR_4->vcc, VAR_1);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_0(VAR_3, VAR_4->vccq, VAR_1);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_0(VAR_3, VAR_4->vccq2, VAR_1);
 if (VAR_2)
  goto out;

out:
 if (VAR_2) {
  FUNC_0(VAR_3, VAR_4->vccq2, 0);
  FUNC_0(VAR_3, VAR_4->vccq, 0);
  FUNC_0(VAR_3, VAR_4->vcc, 0);
 }
 return VAR_2;
}
