
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
struct TYPE_5__ {int allow_cna_fw_dump; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct device*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*,int*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1,
 struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 scsi_qla_host_t *VAR_5 = FUNC_2(FUNC_1(VAR_1));
 int VAR_6 = 0;

 if (!FUNC_0(VAR_5->hw))
  return -VAR_0;

 if (FUNC_3(VAR_3, "%d", &VAR_6) != 1)
  return -VAR_0;

 VAR_5->hw->allow_cna_fw_dump = VAR_6 != 0;

 return FUNC_4(VAR_3);
}
