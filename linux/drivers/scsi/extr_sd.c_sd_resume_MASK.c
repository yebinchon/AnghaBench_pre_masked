
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {int opal_dev; TYPE_1__* device; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int manage_start_stop; } ;


 int VAR_0 ;
 struct scsi_disk* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scsi_disk*,char*) ;
 int FUNC_3 (struct scsi_disk*,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct scsi_disk *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 if (!VAR_2)
  return 0;

 if (!VAR_2->device->manage_start_stop)
  return 0;

 FUNC_2(VAR_0, VAR_2, "Starting disk\n");
 VAR_3 = FUNC_3(VAR_2, 1);
 if (!VAR_3)
  FUNC_1(VAR_2->opal_dev);
 return VAR_3;
}
