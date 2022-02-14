
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct qla_hw_data {scalar_t__ zio_mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (char const*,char*,int*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_5, struct device_attribute *VAR_6,
    const char *VAR_7, size_t VAR_8)
{
 scsi_qla_host_t *VAR_9 = FUNC_3(FUNC_1(VAR_5));
 struct qla_hw_data *VAR_10 = VAR_9->hw;
 int VAR_11 = 0;
 uint16_t VAR_12;

 if (!FUNC_0(VAR_10))
  return -VAR_1;

 if (FUNC_4(VAR_7, "%d", &VAR_11) != 1)
  return -VAR_0;

 if (VAR_11)
  VAR_12 = VAR_4;
 else
  VAR_12 = VAR_3;


 if (VAR_12 != VAR_3 || VAR_10->zio_mode != VAR_3) {
  VAR_10->zio_mode = VAR_12;
  FUNC_2(VAR_2, &VAR_9->dpc_flags);
 }
 return FUNC_5(VAR_7);
}
