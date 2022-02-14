
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {int netdev; } ;
struct hfa384x_inf_frame {int infotype; } ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct wlandevice*,struct hfa384x_inf_frame*) ;
 int FUNC_3 (struct wlandevice*,struct hfa384x_inf_frame*) ;
 int FUNC_4 (struct wlandevice*,struct hfa384x_inf_frame*) ;
 int FUNC_5 (struct wlandevice*,struct hfa384x_inf_frame*) ;
 int FUNC_6 (struct wlandevice*,struct hfa384x_inf_frame*) ;
 int FUNC_7 (struct wlandevice*,struct hfa384x_inf_frame*) ;
 int FUNC_8 (struct wlandevice*,struct hfa384x_inf_frame*) ;
 int FUNC_9 (struct wlandevice*,struct hfa384x_inf_frame*) ;
 int FUNC_10 (struct wlandevice*,struct hfa384x_inf_frame*) ;

void FUNC_11(struct wlandevice *VAR_0,
         struct hfa384x_inf_frame *VAR_1)
{
 FUNC_0(&VAR_1->infotype);

 switch (VAR_1->infotype) {
 case 134:
  FUNC_5(VAR_0, VAR_1);
  break;
 case 135:
  FUNC_10(VAR_0, VAR_1);
  break;
 case 133:
  FUNC_6(VAR_0, VAR_1);
  break;
 case 128:
  FUNC_9(VAR_0, VAR_1);
  break;
 case 136:
  FUNC_4(VAR_0, VAR_1);
  break;
 case 131:
  FUNC_7(VAR_0, VAR_1);
  break;
 case 138:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 137:
  FUNC_3(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_8(VAR_0, VAR_1);
  break;
 case 132:
  FUNC_1(VAR_0->netdev, "Unhandled IT_KEYIDCHANGED\n");
  break;
 case 139:
  FUNC_1(VAR_0->netdev, "Unhandled IT_ASSOCREQ\n");
  break;
 case 130:
  FUNC_1(VAR_0->netdev, "Unhandled IT_MICFAILURE\n");
  break;
 default:
  FUNC_1(VAR_0->netdev,
       "Unknown info type=0x%02x\n", VAR_1->infotype);
  break;
 }
}
