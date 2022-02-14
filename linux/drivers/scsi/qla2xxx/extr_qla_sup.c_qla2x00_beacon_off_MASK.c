
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int * fw_options; TYPE_1__* isp_ops; int beacon_color_state; scalar_t__ beacon_blink_led; } ;
struct TYPE_2__ {int (* beacon_blink ) (struct scsi_qla_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*) ;
 int VAR_5 ;
 int FUNC_2 (struct scsi_qla_host*,int *) ;
 int FUNC_3 (struct scsi_qla_host*) ;

int
FUNC_4(struct scsi_qla_host *VAR_6)
{
 int VAR_7 = VAR_4;
 struct qla_hw_data *VAR_8 = VAR_6->hw;

 VAR_8->beacon_blink_led = 0;


 if (FUNC_0(VAR_8))
  VAR_8->beacon_color_state = VAR_2;
 else
  VAR_8->beacon_color_state = VAR_3;

 VAR_8->isp_ops->beacon_blink(VAR_6);

 VAR_8->fw_options[1] &= ~VAR_1;
 VAR_8->fw_options[1] &= ~VAR_0;

 VAR_7 = FUNC_2(VAR_6, VAR_8->fw_options);
 if (VAR_7 != VAR_4)
  FUNC_1(VAR_5, VAR_6, 0x709c,
      "Unable to update fw options (beacon off).\n");
 return VAR_7;
}
