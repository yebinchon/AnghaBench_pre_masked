
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {int qlini_mode; TYPE_1__* host; } ;
struct TYPE_2__ {void* active_mode; } ;


 void* VAR_0 ;
 void* VAR_1 ;





__attribute__((used)) static void FUNC_0(struct scsi_qla_host *VAR_2)
{
 switch (VAR_2->qlini_mode) {
 case 131:
  VAR_2->host->active_mode = VAR_1;
  break;
 case 128:
  VAR_2->host->active_mode = VAR_0;
  break;
 case 129:
 case 130:
  VAR_2->host->active_mode = VAR_0;
  break;
 default:
  break;
 }
}
