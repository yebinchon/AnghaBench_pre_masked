
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device_handler {int (* attach ) (struct scsi_device*) ;int module; int name; } ;
struct scsi_device {struct scsi_device_handler* handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct scsi_device*,char*,int ,int) ;
 int FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_6,
      struct scsi_device_handler *VAR_7)
{
 int VAR_8, VAR_9 = 0;

 if (!FUNC_3(VAR_7->module))
  return -VAR_1;

 VAR_8 = VAR_7->attach(VAR_6);
 if (VAR_8 != VAR_5) {
  switch (VAR_8) {
  case 130:
   VAR_9 = -VAR_3;
   break;
  case 128:
   VAR_9 = -VAR_0;
   break;
  case 131:
  case 129:
   VAR_9 = -VAR_2;
   break;
  default:
   VAR_9 = -VAR_1;
   break;
  }
  if (VAR_9 != -VAR_2)
   FUNC_1(VAR_4, VAR_6, "%s: Attach failed (%d)\n",
        VAR_7->name, VAR_8);
  FUNC_0(VAR_7->module);
 } else
  VAR_6->handler = VAR_7;

 return VAR_9;
}
