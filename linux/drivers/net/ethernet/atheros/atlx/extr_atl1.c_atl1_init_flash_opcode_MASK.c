
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct atl1_hw {size_t flash_vendor; scalar_t__ hw_addr; } ;
struct TYPE_3__ {int cmd_read; int cmd_wrsr; int cmd_rdsr; int cmd_wren; int cmd_rdid; int cmd_chip_erase; int cmd_sector_erase; int cmd_program; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct atl1_hw *VAR_9)
{
 if (VAR_9->flash_vendor >= FUNC_0(VAR_8))

  VAR_9->flash_vendor = 0;


 FUNC_1(VAR_8[VAR_9->flash_vendor].cmd_program,
  VAR_9->hw_addr + VAR_1);
 FUNC_1(VAR_8[VAR_9->flash_vendor].cmd_sector_erase,
  VAR_9->hw_addr + VAR_5);
 FUNC_1(VAR_8[VAR_9->flash_vendor].cmd_chip_erase,
  VAR_9->hw_addr + VAR_0);
 FUNC_1(VAR_8[VAR_9->flash_vendor].cmd_rdid,
  VAR_9->hw_addr + VAR_2);
 FUNC_1(VAR_8[VAR_9->flash_vendor].cmd_wren,
  VAR_9->hw_addr + VAR_6);
 FUNC_1(VAR_8[VAR_9->flash_vendor].cmd_rdsr,
  VAR_9->hw_addr + VAR_3);
 FUNC_1(VAR_8[VAR_9->flash_vendor].cmd_wrsr,
  VAR_9->hw_addr + VAR_7);
 FUNC_1(VAR_8[VAR_9->flash_vendor].cmd_read,
  VAR_9->hw_addr + VAR_4);
}
