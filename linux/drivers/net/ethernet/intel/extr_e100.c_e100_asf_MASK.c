
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nic {int* eeprom; TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_0(struct nic *VAR_4)
{

 return (VAR_4->pdev->device >= 0x1050) && (VAR_4->pdev->device <= 0x1057) &&
    (VAR_4->eeprom[VAR_1] & VAR_0) &&
    !(VAR_4->eeprom[VAR_1] & VAR_2) &&
    ((VAR_4->eeprom[VAR_3] & 0xFF) != 0xFE);
}
