
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wdat_wdt {TYPE_1__* pdev; } ;
struct acpi_generic_address {int access_width; int address; } ;
struct TYPE_4__ {struct acpi_generic_address register_region; } ;
struct wdat_instruction {int reg; TYPE_2__ entry; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct wdat_wdt *VAR_1,
 const struct wdat_instruction *VAR_2, u32 VAR_3)
{
 const struct acpi_generic_address *VAR_4 = &VAR_2->entry.register_region;

 switch (VAR_4->access_width) {
 case 1:
  FUNC_3((u8)VAR_3, VAR_2->reg);
  break;
 case 2:
  FUNC_1((u16)VAR_3, VAR_2->reg);
  break;
 case 3:
  FUNC_2(VAR_3, VAR_2->reg);
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(&VAR_1->pdev->dev, "Wrote %#x to 0x%08llx\n", VAR_3,
  VAR_4->address);

 return 0;
}
