
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ channel; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;struct scsi_device* device; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct Scsi_Host*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct Scsi_Host*,struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_1,
  struct scsi_cmnd *VAR_2)
{
 struct scsi_device *VAR_3 = VAR_2->device;

 if (VAR_3->channel > FUNC_1(VAR_1)) {
  VAR_2->result = (VAR_0 << 16);
  VAR_2->scsi_done(VAR_2);
  return 0;
 }
 if (VAR_3->channel == FUNC_1(VAR_1))
  return FUNC_0(VAR_1, VAR_2);

 return FUNC_2(VAR_1, VAR_2);
}
