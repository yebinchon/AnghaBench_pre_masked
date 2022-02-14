
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qusb2_phy_cfg {int * regs; scalar_t__ update_tune1_with_efuse; } ;
struct qusb2_phy {int base; int cell; struct qusb2_phy_cfg* cfg; TYPE_1__* phy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct device*,char*) ;
 int* FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct qusb2_phy *VAR_4)
{
 struct device *VAR_5 = &VAR_4->phy->dev;
 const struct qusb2_phy_cfg *VAR_6 = VAR_4->cfg;
 u8 *VAR_7;


 if (!VAR_4->cell)
  return;
 VAR_7 = FUNC_2(VAR_4->cell, ((void*)0));
 if (FUNC_0(VAR_7) || !VAR_7[0]) {
  FUNC_1(VAR_5, "failed to read a valid hs-tx trim value\n");
  return;
 }


 if (VAR_6->update_tune1_with_efuse)
  FUNC_3(VAR_4->base, VAR_6->regs[VAR_2],
     VAR_7[0] << VAR_1,
     VAR_0);
 else
  FUNC_3(VAR_4->base, VAR_6->regs[VAR_3],
     VAR_7[0] << VAR_1,
     VAR_0);
}
