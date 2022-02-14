
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bytype; int bylength; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
struct esas2r_vda_ae {TYPE_2__ vda_ae; } ;
struct esas2r_fw_event_work {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(struct esas2r_fw_event_work *VAR_1)
{
 struct esas2r_vda_ae *VAR_2 = (struct esas2r_vda_ae *)VAR_1->data;
 char *VAR_3;

 switch (VAR_2->vda_ae.hdr.bytype) {
 case 132:
  VAR_3 = "RAID group state change";
  break;

 case 136:
  VAR_3 = "Mapped destination LU change";
  break;

 case 141:
  VAR_3 = "Physical disk inventory change";
  break;

 case 131:
  VAR_3 = "Firmware reset";
  break;

 case 138:
  VAR_3 = "Event Log message (INFO level)";
  break;

 case 137:
  VAR_3 = "Event Log message (WARN level)";
  break;

 case 140:
  VAR_3 = "Event Log message (CRIT level)";
  break;

 case 139:
  VAR_3 = "Event Log message (FAIL level)";
  break;

 case 134:
  VAR_3 = "NVCache change";
  break;

 case 129:
  VAR_3 = "Time stamped log message (INFO level)";
  break;

 case 128:
  VAR_3 = "Time stamped log message (WARN level)";
  break;

 case 130:
  VAR_3 = "Time stamped log message (CRIT level)";
  break;

 case 133:
  VAR_3 = "Power management";
  break;

 case 135:
  VAR_3 = "Mute button pressed";
  break;

 case 142:
  VAR_3 = "Device attribute change";
  break;

 default:
  VAR_3 = "Unknown";
  break;
 }

 FUNC_0(VAR_0,
     "An async event of type \"%s\" was received from the firmware.  The event contents are:",
     VAR_3);
 FUNC_1(VAR_0, &VAR_2->vda_ae,
      VAR_2->vda_ae.hdr.bylength);

}
