
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {TYPE_1__* device; scalar_t__ media_present; scalar_t__ WCE; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ manage_start_stop; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct scsi_disk* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (int ,struct scsi_disk*,char*) ;
 int FUNC_3 (struct scsi_disk*,int ) ;
 int FUNC_4 (struct scsi_disk*,int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_5(struct device *VAR_3)
{
 struct scsi_disk *VAR_4 = FUNC_0(VAR_3);

 if (!VAR_4)
  return;

 if (FUNC_1(VAR_3))
  return;

 if (VAR_4->WCE && VAR_4->media_present) {
  FUNC_2(VAR_0, VAR_4, "Synchronizing SCSI cache\n");
  FUNC_4(VAR_4, ((void*)0));
 }

 if (VAR_2 != VAR_1 && VAR_4->device->manage_start_stop) {
  FUNC_2(VAR_0, VAR_4, "Stopping disk\n");
  FUNC_3(VAR_4, 0);
 }
}
