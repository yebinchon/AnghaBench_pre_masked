
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_cd {int device; } ;
struct media_event_desc {scalar_t__ door_open; scalar_t__ media_present; } ;
struct cdrom_device_info {struct scsi_cd* handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cdrom_device_info*,struct media_event_desc*) ;
 scalar_t__ FUNC_1 (struct scsi_sense_hdr*) ;
 int FUNC_2 (int ,int ,int ,struct scsi_sense_hdr*) ;

int FUNC_3(struct cdrom_device_info *VAR_9, int VAR_10)
{
 struct scsi_cd *VAR_11 = VAR_9->handle;
 struct scsi_sense_hdr VAR_12;
 struct media_event_desc VAR_13;

 if (VAR_0 != VAR_10) {

  return -VAR_5;
 }
 if (!FUNC_2(VAR_11->device, VAR_8, VAR_6, &VAR_12))
  return VAR_1;


 if (FUNC_1(&VAR_12) && VAR_12.sense_key == VAR_7
   && VAR_12.asc == 0x04 && VAR_12.ascq == 0x01)
  return VAR_2;

 if (!FUNC_0(VAR_9, &VAR_13)) {
  if (VAR_13.media_present)
   return VAR_1;
  else if (VAR_13.door_open)
   return VAR_4;
  else
   return VAR_3;
 }






 if (FUNC_1(&VAR_12) && VAR_12.sense_key == VAR_7
   && VAR_12.asc == 0x04 && VAR_12.ascq == 0x02)
  return VAR_4;




 if (VAR_12.sense_key == VAR_7 && VAR_12.asc == 0x04)
  return VAR_1;






 if (FUNC_1(&VAR_12) &&

     VAR_12.asc == 0x3a)
  return VAR_3;
 else
  return VAR_4;

 return VAR_2;
}
