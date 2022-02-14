
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_sense_hdr {scalar_t__ sense_key; } ;
struct scsi_disk {TYPE_1__* device; scalar_t__ media_present; scalar_t__ WCE; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ manage_start_stop; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct scsi_disk* FUNC_0 (struct device*) ;
 int FUNC_1 (struct scsi_sense_hdr*) ;
 int FUNC_2 (int ,struct scsi_disk*,char*) ;
 int FUNC_3 (struct scsi_disk*,int ) ;
 int FUNC_4 (struct scsi_disk*,struct scsi_sense_hdr*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, bool VAR_4)
{
 struct scsi_disk *VAR_5 = FUNC_0(VAR_3);
 struct scsi_sense_hdr VAR_6;
 int VAR_7 = 0;

 if (!VAR_5)
  return 0;

 if (VAR_5->WCE && VAR_5->media_present) {
  FUNC_2(VAR_2, VAR_5, "Synchronizing SCSI cache\n");
  VAR_7 = FUNC_4(VAR_5, &VAR_6);

  if (VAR_7) {

   if (VAR_7 == -VAR_0)
    return 0;

   if (!FUNC_1(&VAR_6) ||
       VAR_6.sense_key != VAR_1)
    return VAR_7;






   VAR_7 = 0;
  }
 }

 if (VAR_5->device->manage_start_stop) {
  FUNC_2(VAR_2, VAR_5, "Stopping disk\n");

  VAR_7 = FUNC_3(VAR_5, 0);
  if (VAR_4)
   VAR_7 = 0;
 }

 return VAR_7;
}
