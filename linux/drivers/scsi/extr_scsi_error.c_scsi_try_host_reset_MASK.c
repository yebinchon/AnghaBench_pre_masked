
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_host_template {int (* eh_host_reset_handler ) (struct scsi_cmnd*) ;int skip_settle_delay; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct Scsi_Host {int host_lock; struct scsi_host_template* hostt; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct Scsi_Host*,int ) ;
 int FUNC_3 (int ,struct Scsi_Host*,char*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;
 struct Scsi_Host *VAR_7 = VAR_4->device->host;
 struct scsi_host_template *VAR_8 = VAR_7->hostt;

 FUNC_0(3,
  FUNC_3(VAR_2, VAR_7, "Snd Host RST\n"));

 if (!VAR_8->eh_host_reset_handler)
  return VAR_0;

 VAR_6 = VAR_8->eh_host_reset_handler(VAR_4);

 if (VAR_6 == VAR_3) {
  if (!VAR_8->skip_settle_delay)
   FUNC_6(VAR_1);
  FUNC_4(VAR_7->host_lock, VAR_5);
  FUNC_2(VAR_7, FUNC_1(VAR_4));
  FUNC_5(VAR_7->host_lock, VAR_5);
 }

 return VAR_6;
}
