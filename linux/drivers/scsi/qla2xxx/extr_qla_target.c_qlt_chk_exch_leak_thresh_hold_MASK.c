
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct scsi_qla_host {int dpc_flags; TYPE_2__* hw; } ;
struct TYPE_3__ {scalar_t__ num_qfull_cmds_dropped; scalar_t__ leak_exchg_thresh_hold; } ;
struct TYPE_4__ {int cur_fw_xcb_count; TYPE_1__ tgt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*,scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct scsi_qla_host *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = VAR_3->hw->tgt.num_qfull_cmds_dropped;

 if (VAR_3->hw->tgt.leak_exchg_thresh_hold &&
     (VAR_4 > VAR_3->hw->tgt.leak_exchg_thresh_hold)) {

  FUNC_1(VAR_2, VAR_3, 0xe079,
      "Chip reset due to exchange starvation: %d/%d.\n",
      VAR_4, VAR_3->hw->cur_fw_xcb_count);

  if (FUNC_0(VAR_3->hw))
   FUNC_3(VAR_0, &VAR_3->dpc_flags);
  else
   FUNC_3(VAR_1, &VAR_3->dpc_flags);
  FUNC_2(VAR_3);
 }

}
