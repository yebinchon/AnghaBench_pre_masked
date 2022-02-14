
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {int tkip_countermeasures; int drop_unencrypted; int open_wep; int auth_mode; int wpa_enabled; int ieee802_1x; int privacy_invoked; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;







int FUNC_0(struct rtllib_device *VAR_6,
          struct iw_request_info *VAR_7,
          struct iw_param *VAR_8, char *VAR_9)
{
 switch (VAR_8->flags & VAR_5) {
 case 128:
  break;
 case 135:
 case 136:
 case 133:



  break;
 case 130:
  VAR_6->tkip_countermeasures = VAR_8->value;
  break;
 case 134:
  VAR_6->drop_unencrypted = VAR_8->value;
  break;

 case 137:
  if (VAR_8->value & VAR_4) {
   VAR_6->open_wep = 0;
   VAR_6->auth_mode = 1;
  } else if (VAR_8->value & VAR_3) {
   VAR_6->open_wep = 1;
   VAR_6->auth_mode = 0;
  } else if (VAR_8->value & VAR_2) {
   VAR_6->open_wep = 1;
   VAR_6->auth_mode = 2;
  } else
   return -VAR_0;
  break;

 case 129:
  VAR_6->wpa_enabled = (VAR_8->value) ? 1 : 0;
  break;

 case 131:
  VAR_6->ieee802_1x = VAR_8->value;
  break;
 case 132:
  VAR_6->privacy_invoked = VAR_8->value;
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
