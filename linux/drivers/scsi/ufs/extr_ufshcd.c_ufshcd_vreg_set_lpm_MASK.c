
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vccq2; int vccq; int vcc; } ;
struct TYPE_4__ {int is_lu_power_on_wp; } ;
struct ufs_hba {int dev_quirks; TYPE_1__ vreg_info; int dev; TYPE_2__ dev_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct ufs_hba*,int ) ;
 int FUNC_1 (struct ufs_hba*) ;
 scalar_t__ FUNC_2 (struct ufs_hba*) ;
 int FUNC_3 (struct ufs_hba*) ;
 scalar_t__ FUNC_4 (struct ufs_hba*) ;
 int FUNC_5 (struct ufs_hba*,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct ufs_hba *VAR_1)
{






 if (!FUNC_1(VAR_1) &&
     VAR_1->dev_quirks & VAR_0)
  FUNC_7(2000, 2100);
 if (FUNC_4(VAR_1) && FUNC_2(VAR_1) &&
     !VAR_1->dev_info.is_lu_power_on_wp) {
  FUNC_5(VAR_1, 0);
 } else if (!FUNC_3(VAR_1)) {
  FUNC_6(VAR_1->dev, VAR_1->vreg_info.vcc, 0);
  if (!FUNC_1(VAR_1)) {
   FUNC_0(VAR_1, VAR_1->vreg_info.vccq);
   FUNC_0(VAR_1, VAR_1->vreg_info.vccq2);
  }
 }
}
