
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {int nic_core_reset_owner; } ;
struct qla_hw_data {int portnum; TYPE_1__ flags; } ;
struct TYPE_9__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,TYPE_2__*,int,char*,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,TYPE_2__*,int,char*,...) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_7 (struct qla_hw_data*,int ) ;
 int FUNC_8 (struct qla_hw_data*,int ,int ) ;

void
FUNC_9(scsi_qla_host_t *VAR_7)
{
 struct qla_hw_data *VAR_8 = VAR_7->hw;
 uint32_t VAR_9 = 0;

 if (FUNC_1(VAR_8))
  VAR_9 = FUNC_7(VAR_8, VAR_2);
 else if (FUNC_0(VAR_8))
  VAR_9 = FUNC_5(VAR_7, VAR_1);

 if (VAR_9 == VAR_4) {
  FUNC_4(VAR_6, VAR_7, 0xb02f,
      "HW State: NEED RESET\n");
  if (FUNC_1(VAR_8)) {
   FUNC_8(VAR_8, VAR_2,
       VAR_3);
   VAR_8->flags.nic_core_reset_owner = 1;
   FUNC_3(VAR_5, VAR_7, 0xb030,
       "reset_owner is 0x%x\n", VAR_8->portnum);
  } else if (FUNC_0(VAR_8))
   FUNC_6(VAR_7, VAR_1,
       VAR_3);
 } else
  FUNC_4(VAR_6, VAR_7, 0xb031,
      "Device state is 0x%x = %s.\n",
      VAR_9,
      VAR_9 < VAR_0 ? FUNC_2(VAR_9) : "Unknown");
}
