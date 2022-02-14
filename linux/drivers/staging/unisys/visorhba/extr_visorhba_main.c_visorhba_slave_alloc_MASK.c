
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visorhba_devdata {int dummy; } ;
struct visordisk_info {struct scsi_device* sdev; } ;
struct scsi_device {struct visordisk_info* hostdata; scalar_t__ host; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct visordisk_info* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_2)
{



 struct visordisk_info *VAR_3;
 struct visorhba_devdata *VAR_4;
 struct Scsi_Host *VAR_5 = (struct Scsi_Host *)VAR_2->host;


 if (VAR_2->hostdata)
  return 0;


 VAR_4 = (struct visorhba_devdata *)VAR_5->hostdata;
 if (!VAR_4)
  return 0;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->sdev = VAR_2;
 VAR_2->hostdata = VAR_3;
 return 0;
}
