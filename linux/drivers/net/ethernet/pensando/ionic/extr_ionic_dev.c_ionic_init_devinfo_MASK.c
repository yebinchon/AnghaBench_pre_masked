
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* fw_version; scalar_t__* serial_num; void* asic_rev; void* asic_type; } ;
struct ionic_dev {TYPE_2__ dev_info; TYPE_1__* dev_info_regs; } ;
struct ionic {int dev; struct ionic_dev idev; } ;
struct TYPE_3__ {int serial_num; int fw_version; int asic_rev; int asic_type; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*,int ,size_t) ;

void FUNC_3(struct ionic *VAR_2)
{
 struct ionic_dev *VAR_3 = &VAR_2->idev;

 VAR_3->dev_info.asic_type = FUNC_1(&VAR_3->dev_info_regs->asic_type);
 VAR_3->dev_info.asic_rev = FUNC_1(&VAR_3->dev_info_regs->asic_rev);

 FUNC_2(VAR_3->dev_info.fw_version,
        VAR_3->dev_info_regs->fw_version,
        VAR_0);

 FUNC_2(VAR_3->dev_info.serial_num,
        VAR_3->dev_info_regs->serial_num,
        VAR_1);

 VAR_3->dev_info.fw_version[VAR_0] = 0;
 VAR_3->dev_info.serial_num[VAR_1] = 0;

 FUNC_0(VAR_2->dev, "fw_version %s\n", VAR_3->dev_info.fw_version);
}
