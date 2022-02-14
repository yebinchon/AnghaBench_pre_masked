
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vp_config_entry_24xx {int options_idx1; } ;
struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;

void
FUNC_2(struct scsi_qla_host *VAR_2,
 struct vp_config_entry_24xx *VAR_3)
{

 if (FUNC_1(VAR_2) || FUNC_0(VAR_2))
  VAR_3->options_idx1 &= ~VAR_1;


 if (FUNC_1(VAR_2))
  VAR_3->options_idx1 &= ~VAR_0;
}
