
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_event {int dummy; } ;
struct scsi_device {int dummy; } ;
typedef int gfp_t ;
typedef enum scsi_device_event { ____Placeholder_scsi_device_event } scsi_device_event ;


 int VAR_0 ;
 struct scsi_event* FUNC_0 (int,int ) ;
 int FUNC_1 (struct scsi_device*,struct scsi_event*) ;
 int FUNC_2 (int ,struct scsi_device*,char*,int) ;

void FUNC_3(struct scsi_device *VAR_1,
     enum scsi_device_event VAR_2, gfp_t VAR_3)
{
 struct scsi_event *VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_4) {
  FUNC_2(VAR_0, VAR_1, "event %d eaten due to OOM\n",
       VAR_2);
  return;
 }

 FUNC_1(VAR_1, VAR_4);
}
