
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct qla_hw_data {TYPE_1__* cs84xx; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_5__ {scalar_t__ op_fw_version; } ;


 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (char*,int ,char*,...) ;
 TYPE_2__* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_2,
 struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5 = VAR_1;
 uint16_t VAR_6[2] = { 0 };
 scsi_qla_host_t *VAR_7 = FUNC_4(FUNC_1(VAR_2));
 struct qla_hw_data *VAR_8 = VAR_7->hw;

 if (!FUNC_0(VAR_8))
  return FUNC_3(VAR_4, VAR_0, "\n");

 if (!VAR_8->cs84xx->op_fw_version) {
  VAR_5 = FUNC_2(VAR_7, VAR_6);

  if (!VAR_5 && !VAR_6[0])
   return FUNC_3(VAR_4, VAR_0, "%u\n",
       (uint32_t)VAR_8->cs84xx->op_fw_version);
 }

 return FUNC_3(VAR_4, VAR_0, "\n");
}
