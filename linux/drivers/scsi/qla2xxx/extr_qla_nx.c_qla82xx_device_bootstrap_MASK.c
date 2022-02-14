
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ isp82xx_fw_hung; } ;
struct qla_hw_data {TYPE_1__ flags; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_2__*,int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (struct qla_hw_data*) ;
 scalar_t__ FUNC_6 (struct qla_hw_data*,int ) ;
 int FUNC_7 (struct qla_hw_data*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct qla_hw_data*,int ,int ) ;

__attribute__((used)) static int
FUNC_10(scsi_qla_host_t *VAR_8)
{
 int VAR_9 = VAR_5;
 int VAR_10;
 uint32_t VAR_11, VAR_12;
 struct qla_hw_data *VAR_13 = VAR_8->hw;
 int VAR_14 = 0;

 VAR_14 = FUNC_5(VAR_13);

 if (VAR_14) {

  if (VAR_13->flags.isp82xx_fw_hung)
   FUNC_7(VAR_13);
 } else {
  VAR_11 = FUNC_6(VAR_13, VAR_1);
  for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {
   FUNC_0(200);
   VAR_12 = FUNC_6(VAR_13, VAR_1);
   if (VAR_12 != VAR_11) {
    VAR_9 = VAR_5;
    goto dev_ready;
   }
  }
  FUNC_7(VAR_13);
 }


 FUNC_1(VAR_7, VAR_8, 0x009e,
     "HW State: INITIALIZING.\n");
 FUNC_9(VAR_13, VAR_0, VAR_3);

 FUNC_4(VAR_13);
 VAR_9 = FUNC_8(VAR_8);
 FUNC_3(VAR_13);

 if (VAR_9 != VAR_5) {
  FUNC_1(VAR_6, VAR_8, 0x00ad,
      "HW State: FAILED.\n");
  FUNC_2(VAR_13);
  FUNC_9(VAR_13, VAR_0, VAR_2);
  return VAR_9;
 }

dev_ready:
 FUNC_1(VAR_7, VAR_8, 0x00ae,
     "HW State: READY.\n");
 FUNC_9(VAR_13, VAR_0, VAR_4);

 return VAR_5;
}
