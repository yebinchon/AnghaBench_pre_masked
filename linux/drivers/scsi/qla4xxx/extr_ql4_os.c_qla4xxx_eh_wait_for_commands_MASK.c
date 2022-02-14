
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_target {int dummy; } ;
struct scsi_qla_host {TYPE_1__* host; } ;
struct scsi_device {int dummy; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct TYPE_2__ {int can_queue; } ;


 int FUNC_0 (struct scsi_qla_host*,struct scsi_cmnd*) ;
 struct scsi_cmnd* FUNC_1 (TYPE_1__*,int) ;
 struct scsi_target* FUNC_2 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_3(struct scsi_qla_host *VAR_0,
     struct scsi_target *VAR_1,
     struct scsi_device *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 struct scsi_cmnd *VAR_5;





 for (VAR_3 = 0; VAR_3 < VAR_0->host->can_queue; VAR_3++) {
  VAR_5 = FUNC_1(VAR_0->host, VAR_3);
  if (VAR_5 && VAR_1 == FUNC_2(VAR_5->device) &&
      (!VAR_2 || VAR_2 == VAR_5->device)) {
   if (!FUNC_0(VAR_0, VAR_5)) {
    VAR_4++;
    break;
   }
  }
 }
 return VAR_4;
}
