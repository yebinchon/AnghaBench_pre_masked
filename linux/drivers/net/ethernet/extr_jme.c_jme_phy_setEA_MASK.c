
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct jme_adapter {int chip_main_rev; int chip_sub_rev; TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (struct jme_adapter*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static int
FUNC_2(struct jme_adapter *VAR_5)
{
 u32 VAR_6 = 0, VAR_7 = 0;
 u8 VAR_8;

 FUNC_1(VAR_5->pdev, VAR_4, &VAR_8);
 if ((VAR_8 & 0x3) == VAR_1)
  return 0;

 switch (VAR_5->pdev->device) {
 case 129:
  if (((VAR_5->chip_main_rev == 5) &&
   ((VAR_5->chip_sub_rev == 0) || (VAR_5->chip_sub_rev == 1) ||
   (VAR_5->chip_sub_rev == 3))) ||
   (VAR_5->chip_main_rev >= 6)) {
   VAR_6 = 0x008A;
   VAR_7 = 0x4109;
  }
  if ((VAR_5->chip_main_rev == 3) &&
   ((VAR_5->chip_sub_rev == 1) || (VAR_5->chip_sub_rev == 2)))
   VAR_6 = 0xE088;
  break;
 case 128:
  if (((VAR_5->chip_main_rev == 5) &&
   ((VAR_5->chip_sub_rev == 0) || (VAR_5->chip_sub_rev == 1) ||
   (VAR_5->chip_sub_rev == 3))) ||
   (VAR_5->chip_main_rev >= 6)) {
   VAR_6 = 0x008A;
   VAR_7 = 0x4109;
  }
  if ((VAR_5->chip_main_rev == 3) &&
   ((VAR_5->chip_sub_rev == 1) || (VAR_5->chip_sub_rev == 2)))
   VAR_6 = 0xE088;
  if ((VAR_5->chip_main_rev == 2) && (VAR_5->chip_sub_rev == 0))
   VAR_6 = 0x608A;
  if ((VAR_5->chip_main_rev == 2) && (VAR_5->chip_sub_rev == 2))
   VAR_6 = 0x408A;
  break;
 default:
  return -VAR_0;
 }
 if (VAR_6)
  FUNC_0(VAR_5, VAR_2, VAR_6);
 if (VAR_7)
  FUNC_0(VAR_5, VAR_3, VAR_7);

 return 0;
}
