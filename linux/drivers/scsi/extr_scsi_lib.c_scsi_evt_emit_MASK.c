
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_event {int evt_type; } ;
struct TYPE_2__ {int kobj; } ;
struct scsi_device {TYPE_1__ sdev_gendev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct scsi_device *VAR_1, struct scsi_event *VAR_2)
{
 int VAR_3 = 0;
 char *VAR_4[3];

 switch (VAR_2->evt_type) {
 case 131:
  VAR_4[VAR_3++] = "SDEV_MEDIA_CHANGE=1";
  break;
 case 133:
  FUNC_1(&VAR_1->sdev_gendev);
  VAR_4[VAR_3++] = "SDEV_UA=INQUIRY_DATA_HAS_CHANGED";
  break;
 case 134:
  VAR_4[VAR_3++] = "SDEV_UA=CAPACITY_DATA_HAS_CHANGED";
  break;
 case 128:
        VAR_4[VAR_3++] = "SDEV_UA=THIN_PROVISIONING_SOFT_THRESHOLD_REACHED";
  break;
 case 130:
  VAR_4[VAR_3++] = "SDEV_UA=MODE_PARAMETERS_CHANGED";
  break;
 case 132:
  VAR_4[VAR_3++] = "SDEV_UA=REPORTED_LUNS_DATA_HAS_CHANGED";
  break;
 case 135:
  VAR_4[VAR_3++] = "SDEV_UA=ASYMMETRIC_ACCESS_STATE_CHANGED";
  break;
 case 129:
  VAR_4[VAR_3++] = "SDEV_UA=POWER_ON_RESET_OCCURRED";
  break;
 default:

  break;
 }

 VAR_4[VAR_3++] = ((void*)0);

 FUNC_0(&VAR_1->sdev_gendev.kobj, VAR_0, VAR_4);
}
