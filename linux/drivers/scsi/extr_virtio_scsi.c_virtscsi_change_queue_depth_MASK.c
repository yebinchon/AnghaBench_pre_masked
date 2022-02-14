
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct Scsi_Host* host; } ;
struct Scsi_Host {int cmd_per_lun; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct scsi_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_0, int VAR_1)
{
 struct Scsi_Host *VAR_2 = VAR_0->host;
 int VAR_3 = VAR_2->cmd_per_lun;

 return FUNC_1(VAR_0, FUNC_0(VAR_3, VAR_1));
}
