
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hisi_host {int ufs_sys_ctrl; TYPE_1__* hba; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct platform_device*,int) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct ufs_hisi_host *VAR_0)
{
 struct device *VAR_1 = VAR_0->hba->dev;
 struct platform_device *VAR_2 = FUNC_3(VAR_1);


 VAR_0->ufs_sys_ctrl = FUNC_2(VAR_2, 1);
 if (FUNC_0(VAR_0->ufs_sys_ctrl))
  return FUNC_1(VAR_0->ufs_sys_ctrl);

 return 0;
}
