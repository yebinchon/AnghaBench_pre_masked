
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_sense_hdr {int asc; } ;
struct scsi_cd {unsigned int get_event_changed; int ignore_get_event; int tur_changed; int media_present; scalar_t__ tur_mismatch; TYPE_1__* device; } ;
struct cdrom_device_info {struct scsi_cd* handle; } ;
struct TYPE_3__ {int changed; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct scsi_sense_hdr*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,struct scsi_sense_hdr*) ;
 unsigned int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,struct scsi_cd*,char*) ;

__attribute__((used)) static unsigned int FUNC_5(struct cdrom_device_info *VAR_5,
        unsigned int VAR_6, int VAR_7)
{
 struct scsi_cd *VAR_8 = VAR_5->handle;
 bool VAR_9;
 struct scsi_sense_hdr VAR_10;
 unsigned int VAR_11;
 int VAR_12;


 if (VAR_0 != VAR_7)
  return 0;

 VAR_11 = FUNC_3(VAR_8->device);
 VAR_8->get_event_changed |= VAR_11 & VAR_1;







 if (VAR_8->ignore_get_event) {
  VAR_11 &= ~VAR_1;
  goto do_tur;
 }






 if (VAR_8->device->changed) {
  VAR_11 |= VAR_1;
  VAR_8->device->changed = 0;
  VAR_8->tur_changed = 1;
 }

 if (!(VAR_6 & VAR_1))
  return VAR_11;
do_tur:

 VAR_9 = VAR_8->media_present;
 VAR_12 = FUNC_2(VAR_8->device, VAR_4, VAR_3, &VAR_10);






 VAR_8->media_present = FUNC_1(VAR_12) ||
  (FUNC_0(&VAR_10) && VAR_10.asc != 0x3a);

 if (VAR_9 != VAR_8->media_present)
  VAR_8->device->changed = 1;

 if (VAR_8->device->changed) {
  VAR_11 |= VAR_1;
  VAR_8->device->changed = 0;
  VAR_8->tur_changed = 1;
 }

 if (VAR_8->ignore_get_event)
  return VAR_11;


 if (!VAR_8->tur_changed) {
  if (VAR_8->get_event_changed) {
   if (VAR_8->tur_mismatch++ > 8) {
    FUNC_4(VAR_2, VAR_8,
       "GET_EVENT and TUR disagree continuously, suppress GET_EVENT events\n");
    VAR_8->ignore_get_event = 1;
   }
  } else {
   VAR_8->tur_mismatch = 0;
  }
 }
 VAR_8->tur_changed = 0;
 VAR_8->get_event_changed = 0;

 return VAR_11;
}
