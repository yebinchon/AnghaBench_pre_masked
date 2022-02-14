
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct qla_hw_data {int optrom_mutex; TYPE_1__* isp_ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_9__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_8__ {int (* beacon_on ) (TYPE_2__*) ;int (* beacon_off ) (TYPE_2__*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_3 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_2__*,int,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int ) ;
 int FUNC_8 (char const*,char*,int*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static ssize_t
FUNC_11(struct device *VAR_5, struct device_attribute *VAR_6,
       const char *VAR_7, size_t VAR_8)
{
 scsi_qla_host_t *VAR_9 = FUNC_7(FUNC_2(VAR_5));
 struct qla_hw_data *VAR_10 = VAR_9->hw;
 int VAR_11 = 0;
 int VAR_12;

 if (FUNC_0(VAR_10) || FUNC_1(VAR_10))
  return -VAR_2;

 if (FUNC_8(VAR_7, "%d", &VAR_11) != 1)
  return -VAR_1;

 FUNC_3(&VAR_9->hw->optrom_mutex);
 if (FUNC_6(VAR_9)) {
  FUNC_4(&VAR_9->hw->optrom_mutex);
  FUNC_5(VAR_4, VAR_9, 0x707a,
      "Abort ISP active -- ignoring beacon request.\n");
  return -VAR_0;
 }

 if (VAR_11)
  VAR_12 = VAR_10->isp_ops->beacon_on(VAR_9);
 else
  VAR_12 = VAR_10->isp_ops->beacon_off(VAR_9);

 if (VAR_12 != VAR_3)
  VAR_8 = 0;

 FUNC_4(&VAR_9->hw->optrom_mutex);

 return VAR_8;
}
