
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {int qlini_mode; TYPE_1__* host; } ;
struct TYPE_2__ {int active_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





void FUNC_0(struct scsi_qla_host *VAR_3)
{
 switch (VAR_3->qlini_mode) {
 case 131:
 case 128:
  VAR_3->host->active_mode = VAR_2;
  break;
 case 129:
  VAR_3->host->active_mode = VAR_1;
  break;
 case 130:
  VAR_3->host->active_mode = VAR_0;
  break;
 default:
  break;
 }
}
