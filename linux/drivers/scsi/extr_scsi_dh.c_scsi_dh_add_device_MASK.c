
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device_handler {int dummy; } ;
struct scsi_device {int dummy; } ;


 struct scsi_device_handler* FUNC_0 (char const*) ;
 char* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*,struct scsi_device_handler*) ;

void FUNC_3(struct scsi_device *VAR_0)
{
 struct scsi_device_handler *VAR_1 = ((void*)0);
 const char *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  VAR_1 = FUNC_0(VAR_2);




 if (VAR_1)
  (void)FUNC_2(VAR_0, VAR_1);
}
