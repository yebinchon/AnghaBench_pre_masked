
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct Scsi_Host* host; } ;
struct Scsi_Host {int scan_mutex; } ;


 int FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct scsi_device *VAR_0)
{
 struct Scsi_Host *VAR_1 = VAR_0->host;

 FUNC_1(&VAR_1->scan_mutex);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->scan_mutex);
}
