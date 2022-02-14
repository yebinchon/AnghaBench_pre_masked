
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vcc; int vccq; int vccq2; } ;
struct TYPE_4__ {int is_lu_power_on_wp; } ;
struct ufs_hba {TYPE_1__ vreg_info; int dev; TYPE_2__ dev_info; } ;


 int FUNC_0 (struct ufs_hba*,int ) ;
 int FUNC_1 (struct ufs_hba*,int ) ;
 int FUNC_2 (struct ufs_hba*) ;
 scalar_t__ FUNC_3 (struct ufs_hba*) ;
 int FUNC_4 (struct ufs_hba*) ;
 scalar_t__ FUNC_5 (struct ufs_hba*) ;
 int FUNC_6 (struct ufs_hba*,int) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct ufs_hba *VAR_0)
{
 int VAR_1 = 0;

 if (FUNC_5(VAR_0) && FUNC_3(VAR_0) &&
     !VAR_0->dev_info.is_lu_power_on_wp) {
  VAR_1 = FUNC_6(VAR_0, 1);
 } else if (!FUNC_4(VAR_0)) {
  if (!VAR_1 && !FUNC_2(VAR_0)) {
   VAR_1 = FUNC_0(VAR_0, VAR_0->vreg_info.vccq);
   if (VAR_1)
    goto vcc_disable;
   VAR_1 = FUNC_0(VAR_0, VAR_0->vreg_info.vccq2);
   if (VAR_1)
    goto vccq_lpm;
  }
  VAR_1 = FUNC_7(VAR_0->dev, VAR_0->vreg_info.vcc, 1);
 }
 goto out;

vccq_lpm:
 FUNC_1(VAR_0, VAR_0->vreg_info.vccq);
vcc_disable:
 FUNC_7(VAR_0->dev, VAR_0->vreg_info.vcc, 0);
out:
 return VAR_1;
}
