
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct qla_hw_data {TYPE_1__* pdev; } ;
struct TYPE_10__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_9__ {scalar_t__ subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ FUNC_5 (struct qla_hw_data*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,TYPE_2__*,int,char*) ;
 int VAR_8 ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int ,int *,int,int,int,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

int
FUNC_11(scsi_qla_host_t *VAR_9, uint16_t *VAR_10)
{
 int VAR_11 = VAR_6;
 struct qla_hw_data *VAR_12 = VAR_9->hw;
 uint8_t VAR_13;

 if (!FUNC_0(VAR_12) || FUNC_1(VAR_12) || FUNC_4(VAR_12)) {
  FUNC_6(VAR_8, VAR_9, 0x1150,
      "Thermal not supported by this card.\n");
  return VAR_11;
 }

 if (FUNC_2(VAR_12)) {
  if (VAR_12->pdev->subsystem_vendor == VAR_5 &&
      VAR_12->pdev->subsystem_device == 0x0175) {
   VAR_11 = FUNC_8(VAR_9, 0, &VAR_13,
       0x98, 0x1, 1, VAR_1|VAR_0);
   *VAR_10 = VAR_13;
   return VAR_11;
  }
  if (VAR_12->pdev->subsystem_vendor == VAR_4 &&
      VAR_12->pdev->subsystem_device == 0x338e) {
   VAR_11 = FUNC_8(VAR_9, 0, &VAR_13,
       0x98, 0x1, 1, VAR_3|VAR_2|VAR_0);
   *VAR_10 = VAR_13;
   return VAR_11;
  }
  FUNC_6(VAR_8, VAR_9, 0x10c9,
      "Thermal not supported by this card.\n");
  return VAR_11;
 }

 if (FUNC_5(VAR_12)) {
  *VAR_10 = FUNC_10(VAR_9);
  VAR_11 = VAR_7;
  return VAR_11;
 } else if (FUNC_3(VAR_12)) {
  *VAR_10 = FUNC_9(VAR_9);
  VAR_11 = VAR_7;
  return VAR_11;
 }

 VAR_11 = FUNC_7(VAR_9, VAR_10);
 return VAR_11;
}
