
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_3__* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;
struct TYPE_5__ {scalar_t__ allow_cna_fw_dump; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,...) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_3(FUNC_1(VAR_1));

 if (!FUNC_0(VAR_4->hw))
  return FUNC_2(VAR_3, VAR_0, "\n");
 else
  return FUNC_2(VAR_3, VAR_0, "%s\n",
      VAR_4->hw->allow_cna_fw_dump ? "true" : "false");
}
