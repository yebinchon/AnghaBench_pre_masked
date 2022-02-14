
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_12__ {scalar_t__ nic_core_reset_hdlr_active; scalar_t__ isp82xx_fw_hung; } ;
struct qla_hw_data {TYPE_1__ flags; } ;
struct TYPE_13__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,TYPE_2__*,int,char*) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (struct qla_hw_data*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

int
FUNC_11(scsi_qla_host_t *VAR_8)
{
 int VAR_9;
 uint32_t VAR_10;
 struct qla_hw_data *VAR_11 = VAR_8->hw;

 FUNC_4(VAR_11);
 VAR_10 = FUNC_6(VAR_8, VAR_1);

 if (VAR_6)
  FUNC_7(VAR_8);







 if (VAR_10 == VAR_3) {


  if (FUNC_3(VAR_11) == VAR_0) {
   FUNC_0(VAR_7, VAR_8, 0xb13e,
       "Reset recovery disabled\n");
   VAR_9 = VAR_4;
   goto exit_isp_reset;
  }

  FUNC_0(VAR_7, VAR_8, 0xb140,
      "HW State: NEED RESET\n");
  FUNC_8(VAR_8, VAR_1,
      VAR_2);
 }




 FUNC_10(VAR_8);

 FUNC_5(VAR_11);
 VAR_9 = FUNC_2(VAR_8);
 FUNC_4(VAR_11);
 FUNC_1(VAR_8);

exit_isp_reset:
 FUNC_5(VAR_11);
 if (VAR_9 == VAR_5) {
  VAR_11->flags.isp82xx_fw_hung = 0;
  VAR_11->flags.nic_core_reset_hdlr_active = 0;
  VAR_9 = FUNC_9(VAR_8);
 }

 return VAR_9;
}
