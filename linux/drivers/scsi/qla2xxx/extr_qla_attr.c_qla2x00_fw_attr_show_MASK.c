
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct qla_hw_data {scalar_t__ fw_attributes; scalar_t__ fw_attributes_h; scalar_t__* fw_attributes_ext; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int VAR_0 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int ,char*,...) ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_4(FUNC_2(VAR_1));
 struct qla_hw_data *VAR_5 = VAR_4->hw;

 if (!FUNC_0(VAR_5) && !FUNC_1(VAR_5))
  return FUNC_3(VAR_3, VAR_0, "\n");

 return FUNC_3(VAR_3, VAR_0, "%llx\n",
     (uint64_t)VAR_5->fw_attributes_ext[1] << 48 |
     (uint64_t)VAR_5->fw_attributes_ext[0] << 32 |
     (uint64_t)VAR_5->fw_attributes_h << 16 |
     (uint64_t)VAR_5->fw_attributes);
}
