
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmmdev_request_header {int request_type; } ;
struct vmmdev_guest_status {int facility; } ;
struct vbg_session {int requestor; } ;
struct vbg_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct vbg_dev *VAR_2, struct vbg_session *VAR_3,
      const struct vmmdev_request_header *VAR_4)
{
 const struct vmmdev_guest_status *VAR_5;
 bool VAR_6;

 switch (VAR_4->request_type) {

 case 145:
 case 143:
 case 144:
 case 134:
 case 128:
 case 160:
 case 138:
 case 163:
 case 152:
 case 161:
 case 141:
 case 139:
 case 149:
  VAR_6 = 1;
  break;


 case 153:
 case 137:
 case 136:
 case 154:
 case 147:
 case 155:
 case 135:
 case 164:
 case 162:
 case 140:
 case 159:
 case 133:
 case 156:
 case 158:
 case 132:
 case 131:
 case 130:
 case 129:
 case 157:
 case 151:
 case 148:
 case 146:
 case 150:
  VAR_6 = 0;
  break;


 case 142:
  VAR_5 = (const struct vmmdev_guest_status *)VAR_4;
  switch (VAR_5->facility) {
  case 170:
  case 167:
   FUNC_0("Denying userspace vmm report guest cap. call facility %#08x\n",
    VAR_5->facility);
   return -VAR_0;
  case 166:
   VAR_6 = 1;
   break;
  case 165:
  case 168:
  case 169:
  default:
   VAR_6 = 0;
   break;
  }
  break;


 default:
  FUNC_0("Denying userspace vmm call type %#08x\n",
   VAR_4->request_type);
  return -VAR_0;
 }

 if (VAR_6 &&
     (VAR_3->requestor & VAR_1)) {
  FUNC_0("Denying userspace vmm call type %#08x through vboxuser device node\n",
   VAR_4->request_type);
  return -VAR_0;
 }

 return 0;
}
