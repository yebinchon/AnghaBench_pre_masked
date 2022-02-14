
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_device {int event_work; int pending_events; } ;
typedef enum scsi_device_event { ____Placeholder_scsi_device_event } scsi_device_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (int ,struct scsi_device*,char*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct scsi_device *VAR_10,
         struct scsi_sense_hdr *VAR_11)
{
 enum scsi_device_event VAR_12 = VAR_5;

 if (VAR_11->sense_key == VAR_9) {
  if (VAR_11->asc == 0x3f && VAR_11->ascq == 0x03) {
   VAR_12 = VAR_3;
   FUNC_2(VAR_0, VAR_10,
        "Inquiry data has changed");
  } else if (VAR_11->asc == 0x3f && VAR_11->ascq == 0x0e) {
   VAR_12 = VAR_4;
   FUNC_1(VAR_10);
   FUNC_2(VAR_0, VAR_10,
        "Warning! Received an indication that the "
        "LUN assignments on this target have "
        "changed. The Linux SCSI layer does not "
        "automatically remap LUN assignments.\n");
  } else if (VAR_11->asc == 0x3f)
   FUNC_2(VAR_0, VAR_10,
        "Warning! Received an indication that the "
        "operating parameters on this target have "
        "changed. The Linux SCSI layer does not "
        "automatically adjust these parameters.\n");

  if (VAR_11->asc == 0x38 && VAR_11->ascq == 0x07) {
   VAR_12 = VAR_8;
   FUNC_2(VAR_0, VAR_10,
        "Warning! Received an indication that the "
        "LUN reached a thin provisioning soft "
        "threshold.\n");
  }

  if (VAR_11->asc == 0x29) {
   VAR_12 = VAR_7;
   FUNC_2(VAR_0, VAR_10,
        "Power-on or device reset occurred\n");
  }

  if (VAR_11->asc == 0x2a && VAR_11->ascq == 0x01) {
   VAR_12 = VAR_6;
   FUNC_2(VAR_0, VAR_10,
        "Mode parameters changed");
  } else if (VAR_11->asc == 0x2a && VAR_11->ascq == 0x06) {
   VAR_12 = VAR_1;
   FUNC_2(VAR_0, VAR_10,
        "Asymmetric access state changed");
  } else if (VAR_11->asc == 0x2a && VAR_11->ascq == 0x09) {
   VAR_12 = VAR_2;
   FUNC_2(VAR_0, VAR_10,
        "Capacity data has changed");
  } else if (VAR_11->asc == 0x2a)
   FUNC_2(VAR_0, VAR_10,
        "Parameters changed");
 }

 if (VAR_12 != VAR_5) {
  FUNC_3(VAR_12, VAR_10->pending_events);
  FUNC_0(&VAR_10->event_work);
 }
}
