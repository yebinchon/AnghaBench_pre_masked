
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_state; } ;
typedef enum scsi_device_state { ____Placeholder_scsi_device_state } scsi_device_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct scsi_device*,char*,int ,int ) ;

int
FUNC_3(struct scsi_device *VAR_2, enum scsi_device_state VAR_3)
{
 enum scsi_device_state VAR_4 = VAR_2->sdev_state;

 if (VAR_3 == VAR_4)
  return 0;

 switch (VAR_3) {
 case 134:
  switch (VAR_4) {
  case 133:
   break;
  default:
   goto illegal;
  }
  break;

 case 129:
  switch (VAR_4) {
  case 134:
  case 131:
  case 128:
  case 130:
  case 136:
   break;
  default:
   goto illegal;
  }
  break;

 case 130:
  switch (VAR_4) {
  case 129:
  case 131:
  case 128:
   break;
  default:
   goto illegal;
  }
  break;

 case 131:
 case 128:
  switch (VAR_4) {
  case 134:
  case 129:
  case 130:
  case 136:
   break;
  default:
   goto illegal;
  }
  break;

 case 136:
  switch (VAR_4) {
  case 129:
  case 133:
  case 131:
   break;
  default:
   goto illegal;
  }
  break;

 case 133:
  switch (VAR_4) {
  case 134:
   break;
  default:
   goto illegal;
  }
  break;

 case 135:
  switch (VAR_4) {
  case 134:
  case 129:
  case 130:
  case 131:
  case 128:
   break;
  default:
   goto illegal;
  }
  break;

 case 132:
  switch (VAR_4) {
  case 134:
  case 129:
  case 131:
  case 128:
  case 135:
  case 136:
  case 133:
   break;
  default:
   goto illegal;
  }
  break;

 }
 VAR_2->sdev_state = VAR_3;
 return 0;

 illegal:
 FUNC_0(1,
    FUNC_2(VAR_1, VAR_2,
         "Illegal state transition %s->%s",
         FUNC_1(VAR_4),
         FUNC_1(VAR_3))
    );
 return -VAR_0;
}
