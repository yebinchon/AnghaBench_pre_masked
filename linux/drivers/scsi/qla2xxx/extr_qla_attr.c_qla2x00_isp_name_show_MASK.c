
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_7__ {TYPE_2__* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_5__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ) ;
 TYPE_3__* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_2(FUNC_0(VAR_1));

 return FUNC_1(VAR_3, VAR_0, "ISP%04X\n", VAR_4->hw->pdev->device);
}
