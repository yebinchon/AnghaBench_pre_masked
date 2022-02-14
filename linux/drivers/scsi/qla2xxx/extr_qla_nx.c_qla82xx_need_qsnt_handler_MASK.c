
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_8__ {scalar_t__ online; } ;
struct TYPE_9__ {TYPE_1__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_2__*,int,char*,...) ;
 int VAR_9 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct qla_hw_data*) ;
 int FUNC_6 (struct qla_hw_data*) ;
 int FUNC_7 (struct qla_hw_data*,int ) ;
 int FUNC_8 (struct qla_hw_data*) ;
 int FUNC_9 (struct qla_hw_data*,int ,int ) ;
 scalar_t__ FUNC_10 (int,unsigned long) ;

__attribute__((used)) static void
FUNC_11(scsi_qla_host_t *VAR_10)
{
 struct qla_hw_data *VAR_11 = VAR_10->hw;
 uint32_t VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15;

 if (VAR_10->flags.online) {

  FUNC_3(VAR_10);
 }


 FUNC_8(VAR_11);


 VAR_15 = VAR_8 + (30 * VAR_0);

 VAR_13 = FUNC_7(VAR_11, VAR_4);
 VAR_14 = FUNC_7(VAR_11, VAR_3);

 VAR_14 = VAR_14 << 0x01;

 while (VAR_13 != VAR_14) {

  if (FUNC_10(VAR_8, VAR_15)) {



   FUNC_1(VAR_9, VAR_10, 0xb023,
       "%s : QUIESCENT TIMEOUT DRV_ACTIVE:%d "
       "DRV_STATE:%d.\n", VAR_1,
       VAR_14, VAR_13);
   FUNC_9(VAR_11, VAR_2,
       VAR_7);
   FUNC_1(VAR_9, VAR_10, 0xb025,
       "HW State: DEV_READY.\n");
   FUNC_6(VAR_11);
   FUNC_2(VAR_10);
   FUNC_5(VAR_11);

   FUNC_4(VAR_10);
   return;
  }

  FUNC_6(VAR_11);
  FUNC_0(1000);
  FUNC_5(VAR_11);

  VAR_13 = FUNC_7(VAR_11, VAR_4);
  VAR_14 = FUNC_7(VAR_11, VAR_3);
  VAR_14 = VAR_14 << 0x01;
 }
 VAR_12 = FUNC_7(VAR_11, VAR_2);

 if (VAR_12 == VAR_5) {
  FUNC_1(VAR_9, VAR_10, 0xb026,
      "HW State: DEV_QUIESCENT.\n");
  FUNC_9(VAR_11, VAR_2, VAR_6);
 }
}
