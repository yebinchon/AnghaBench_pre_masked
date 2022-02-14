
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_vreg_info {int vccq2; int vccq; int vcc; } ;
struct ufs_hba {struct ufs_vreg_info vreg_info; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ) ;

__attribute__((used)) static int FUNC_1(struct ufs_hba *VAR_0)
{
 int VAR_1 = 0;
 struct device *VAR_2 = VAR_0->dev;
 struct ufs_vreg_info *VAR_3 = &VAR_0->vreg_info;

 VAR_1 = FUNC_0(VAR_2, VAR_3->vcc);
 if (VAR_1)
  goto out;

 VAR_1 = FUNC_0(VAR_2, VAR_3->vccq);
 if (VAR_1)
  goto out;

 VAR_1 = FUNC_0(VAR_2, VAR_3->vccq2);
out:
 return VAR_1;
}
