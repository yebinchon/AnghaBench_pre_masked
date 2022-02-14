
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qla_hw_data {TYPE_1__* pdev; } ;
struct fw_blob {int * fw; int name; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_5__ {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ FUNC_5 (struct qla_hw_data*) ;
 scalar_t__ FUNC_6 (struct qla_hw_data*) ;
 scalar_t__ FUNC_7 (struct qla_hw_data*) ;
 scalar_t__ FUNC_8 (struct qla_hw_data*) ;
 scalar_t__ FUNC_9 (struct qla_hw_data*) ;
 scalar_t__ FUNC_10 (struct qla_hw_data*) ;
 scalar_t__ FUNC_11 (struct qla_hw_data*) ;
 scalar_t__ FUNC_12 (struct qla_hw_data*) ;
 scalar_t__ FUNC_13 (struct qla_hw_data*) ;
 scalar_t__ FUNC_14 (struct qla_hw_data*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,TYPE_2__*,int,char*,int ) ;
 int VAR_12 ;
 struct fw_blob* VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_18 (int **,int ,int *) ;

struct fw_blob *
FUNC_19(scsi_qla_host_t *VAR_15)
{
 struct qla_hw_data *VAR_16 = VAR_15->hw;
 struct fw_blob *VAR_17;

 if (FUNC_1(VAR_16)) {
  VAR_17 = &VAR_13[VAR_1];
 } else if (FUNC_2(VAR_16)) {
  VAR_17 = &VAR_13[VAR_2];
 } else if (FUNC_3(VAR_16) || FUNC_4(VAR_16) || FUNC_10(VAR_16)) {
  VAR_17 = &VAR_13[VAR_3];
 } else if (FUNC_5(VAR_16) || FUNC_11(VAR_16)) {
  VAR_17 = &VAR_13[VAR_4];
 } else if (FUNC_6(VAR_16)) {
  VAR_17 = &VAR_13[VAR_5];
 } else if (FUNC_7(VAR_16)) {
  VAR_17 = &VAR_13[VAR_6];
 } else if (FUNC_13(VAR_16)) {
  VAR_17 = &VAR_13[VAR_10];
 } else if (FUNC_14(VAR_16)) {
  VAR_17 = &VAR_13[VAR_11];
 } else if (FUNC_0(VAR_16)) {
  VAR_17 = &VAR_13[VAR_0];
 } else if (FUNC_12(VAR_16)) {
  VAR_17 = &VAR_13[VAR_9];
 } else if (FUNC_8(VAR_16)) {
  VAR_17 = &VAR_13[VAR_7];
 } else if (FUNC_9(VAR_16)) {
  VAR_17 = &VAR_13[VAR_8];
 } else {
  return ((void*)0);
 }

 if (!VAR_17->name)
  return ((void*)0);

 FUNC_15(&VAR_14);
 if (VAR_17->fw)
  goto out;

 if (FUNC_18(&VAR_17->fw, VAR_17->name, &VAR_16->pdev->dev)) {
  FUNC_17(VAR_12, VAR_15, 0x0063,
      "Failed to load firmware image (%s).\n", VAR_17->name);
  VAR_17->fw = ((void*)0);
  VAR_17 = ((void*)0);
 }

out:
 FUNC_16(&VAR_14);
 return VAR_17;
}
