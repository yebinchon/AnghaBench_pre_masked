
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ no_read_disc_info; } ;
struct scsi_cd {struct scsi_device* device; } ;
struct packet_command {scalar_t__* cmd; scalar_t__ timeout; int stat; } ;
struct cdrom_device_info {struct scsi_cd* handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct scsi_cd*,struct packet_command*) ;

__attribute__((used)) static int FUNC_1(struct cdrom_device_info *VAR_3,
  struct packet_command *VAR_4)
{
 struct scsi_cd *VAR_5 = VAR_3->handle;
 struct scsi_device *VAR_6 = VAR_5->device;

 if (VAR_4->cmd[0] == VAR_1 && VAR_6->no_read_disc_info)
  return -VAR_0;

 if (VAR_4->timeout <= 0)
  VAR_4->timeout = VAR_2;

 FUNC_0(VAR_5, VAR_4);

 return VAR_4->stat;
}
