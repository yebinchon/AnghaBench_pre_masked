
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_8__ {TYPE_2__* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
typedef int pci_info ;
struct TYPE_7__ {TYPE_1__* isp_ops; } ;
struct TYPE_6__ {int (* pci_info_str ) (TYPE_3__*,char*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_2(FUNC_0(VAR_1));
 char VAR_5[30];

 return FUNC_1(VAR_3, VAR_0, "%s\n",
    VAR_4->hw->isp_ops->pci_info_str(VAR_4, VAR_5,
       sizeof(VAR_5)));
}
