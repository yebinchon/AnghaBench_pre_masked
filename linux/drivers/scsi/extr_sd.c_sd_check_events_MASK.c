
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int member_0; } ;
struct scsi_disk {int media_present; struct scsi_device* device; } ;
struct scsi_device {int changed; } ;
struct gendisk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct scsi_disk*,struct scsi_sense_hdr*) ;
 scalar_t__ FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (struct scsi_device*) ;
 struct scsi_disk* FUNC_5 (struct gendisk*) ;
 int FUNC_6 (struct scsi_disk*) ;
 int FUNC_7 (struct scsi_device*,int ,int ,struct scsi_sense_hdr*) ;
 int FUNC_8 (int ,struct scsi_disk*,char*) ;
 int FUNC_9 (struct scsi_disk*) ;

__attribute__((used)) static unsigned int FUNC_10(struct gendisk *VAR_4, unsigned int VAR_5)
{
 struct scsi_disk *VAR_6 = FUNC_5(VAR_4);
 struct scsi_device *VAR_7;
 int VAR_8;

 if (!VAR_6)
  return 0;

 VAR_7 = VAR_6->device;
 FUNC_0(3, FUNC_8(VAR_1, VAR_6, "sd_check_events\n"));







 if (!FUNC_4(VAR_7)) {
  FUNC_9(VAR_6);
  goto out;
 }
 if (FUNC_3(VAR_7)) {
  struct scsi_sense_hdr VAR_9 = { 0, };

  VAR_8 = FUNC_7(VAR_7, VAR_3, VAR_2,
           &VAR_9);


  if (FUNC_1(VAR_8)) {
   FUNC_9(VAR_6);
   goto out;
  }

  if (FUNC_2(VAR_6, &VAR_9))
   goto out;
 }





 if (!VAR_6->media_present)
  VAR_7->changed = 1;
 VAR_6->media_present = 1;
out:






 VAR_8 = VAR_7->changed ? VAR_0 : 0;
 VAR_7->changed = 0;
 FUNC_6(VAR_6);
 return VAR_8;
}
