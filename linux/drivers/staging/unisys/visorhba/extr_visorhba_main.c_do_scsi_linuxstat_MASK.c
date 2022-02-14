
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct visordisk_info {int ios_threshold; int error_count; } ;
struct TYPE_2__ {scalar_t__* cmnd; scalar_t__ addlstat; int linuxstat; int sensebuf; } ;
struct uiscmdrsp {TYPE_1__ scsi; } ;
struct scsi_device {struct visordisk_info* hostdata; } ;
struct scsi_cmnd {int sense_buffer; struct scsi_device* device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct uiscmdrsp *VAR_6,
         struct scsi_cmnd *VAR_7)
{
 struct visordisk_info *VAR_8;
 struct scsi_device *VAR_9;

 VAR_9 = VAR_7->device;
 FUNC_4(VAR_7->sense_buffer, VAR_6->scsi.sensebuf, VAR_4);


 if (VAR_6->scsi.cmnd[0] == VAR_2 &&
     (FUNC_3(VAR_6->scsi.linuxstat) == VAR_1) &&
     VAR_6->scsi.addlstat == VAR_0)
  return;

 VAR_8 = VAR_9->hostdata;
 if (FUNC_1(&VAR_8->error_count) < VAR_5) {
  FUNC_0(&VAR_8->error_count);
  FUNC_2(&VAR_8->ios_threshold, VAR_3);
 }
}
