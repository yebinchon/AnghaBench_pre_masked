
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {char* uboot_ver; char* preboot_ver; } ;
struct hl_device {int dev; scalar_t__* pcie_bar; TYPE_1__ asic_prop; } ;
typedef enum goya_fw_component { ____Placeholder_goya_fw_component } goya_fw_component ;




 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,char const*,scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(struct hl_device *VAR_6,
     enum goya_fw_component VAR_7)
{
 const char *VAR_8;
 u32 VAR_9;
 char *VAR_10;

 switch (VAR_7) {
 case 128:
  VAR_9 = FUNC_0(VAR_5);
  VAR_10 = VAR_6->asic_prop.uboot_ver;
  VAR_8 = "U-Boot";
  break;
 case 129:
  VAR_9 = FUNC_0(VAR_4);
  VAR_10 = VAR_6->asic_prop.preboot_ver;
  VAR_8 = "Preboot";
  break;
 default:
  FUNC_2(VAR_6->dev, "Undefined FW component: %d\n", VAR_7);
  return;
 }

 VAR_9 &= ~((u32)VAR_0);

 if (VAR_9 < VAR_2 - VAR_3) {
  FUNC_3(VAR_10, VAR_6->pcie_bar[VAR_1] + VAR_9,
       VAR_3);
 } else {
  FUNC_1(VAR_6->dev, "%s version offset (0x%x) is above SRAM\n",
        VAR_8, VAR_9);
  FUNC_4(VAR_10, "unavailable");
 }
}
