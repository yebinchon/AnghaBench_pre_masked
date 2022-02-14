
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct rc_map_table {scalar_t__ keycode; } ;
struct TYPE_4__ {int rc_map_size; struct rc_map_table* rc_map_table; } ;
struct TYPE_5__ {TYPE_1__ legacy; } ;
struct TYPE_6__ {TYPE_2__ rc; } ;
struct dvb_usb_device {TYPE_3__ props; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct rc_map_table*) ;
 int FUNC_2 (struct rc_map_table*) ;

int FUNC_3(struct dvb_usb_device *VAR_3,
  u8 VAR_4[5], u32 *VAR_5, int *VAR_6)
{
 int VAR_7;
 struct rc_map_table *VAR_8 = VAR_3->props.rc.legacy.rc_map_table;
 *VAR_5 = 0;
 *VAR_6 = VAR_2;
 switch (VAR_4[0]) {
  case 130:
   break;
  case 129:
   if ((u8) ~VAR_4[1] != VAR_4[2] ||
    (u8) ~VAR_4[3] != VAR_4[4]) {
    FUNC_0("remote control checksum failed.\n");
    break;
   }

   for (VAR_7 = 0; VAR_7 < VAR_3->props.rc.legacy.rc_map_size; VAR_7++)
    if (FUNC_1(&VAR_8[VAR_7]) == VAR_4[1] &&
     FUNC_2(&VAR_8[VAR_7]) == VAR_4[3]) {
     *VAR_5 = VAR_8[VAR_7].keycode;
     *VAR_6 = VAR_0;
     return 0;
    }
   FUNC_0("key mapping failed - no appropriate key found in keymapping\n");
   break;
  case 128:
   *VAR_6 = VAR_1;
   break;
  default:
   FUNC_0("unknown type of remote status: %d\n",VAR_4[0]);
   break;
 }
 return 0;
}
