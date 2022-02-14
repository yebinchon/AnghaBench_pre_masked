
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_fw_phy_action {size_t size; int * code; } ;
struct rtl_fw {int dev; struct rtl_fw_phy_action phy_action; } ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct rtl_fw *VAR_0)
{
 struct rtl_fw_phy_action *VAR_1 = &VAR_0->phy_action;
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2++) {
  u32 VAR_3 = FUNC_1(VAR_1->code[VAR_2]);
  u32 VAR_4 = (VAR_3 & 0x0fff0000) >> 16;

  switch (VAR_3 >> 28) {
  case 132:
  case 135:
  case 136:
  case 133:
  case 139:
  case 129:
  case 128:
  case 134:
   break;

  case 140:
   if (VAR_4 > VAR_2)
    goto out;
   break;
  case 131:
   if (VAR_2 + 2 >= VAR_1->size)
    goto out;
   break;
  case 138:
  case 137:
  case 130:
   if (VAR_2 + 1 + VAR_4 >= VAR_1->size)
    goto out;
   break;

  default:
   FUNC_0(VAR_0->dev, "Invalid action 0x%08x\n", VAR_3);
   return 0;
  }
 }

 return 1;
out:
 FUNC_0(VAR_0->dev, "Out of range of firmware\n");
 return 0;
}
