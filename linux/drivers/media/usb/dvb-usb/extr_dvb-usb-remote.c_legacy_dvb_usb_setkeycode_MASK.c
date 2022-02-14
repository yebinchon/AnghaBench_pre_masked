
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rc_map_table {unsigned int keycode; } ;
struct input_keymap_entry {unsigned int keycode; } ;
struct input_dev {int keybit; } ;
struct TYPE_4__ {unsigned int rc_map_size; struct rc_map_table* rc_map_table; } ;
struct TYPE_5__ {TYPE_1__ legacy; } ;
struct TYPE_6__ {TYPE_2__ rc; } ;
struct dvb_usb_device {TYPE_3__ props; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 struct dvb_usb_device* FUNC_2 (struct input_dev*) ;
 unsigned int FUNC_3 (struct input_keymap_entry const*,struct rc_map_table*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_2,
         const struct input_keymap_entry *VAR_3,
         unsigned int *VAR_4)
{
 struct dvb_usb_device *VAR_5 = FUNC_2(VAR_2);
 struct rc_map_table *VAR_6 = VAR_5->props.rc.legacy.rc_map_table;
 unsigned int VAR_7 = VAR_5->props.rc.legacy.rc_map_size;
 unsigned int VAR_8;

 VAR_8 = FUNC_3(VAR_3, VAR_6, VAR_7);







 if (VAR_8 >= VAR_7)
  return -VAR_0;

 *VAR_4 = VAR_6[VAR_8].keycode;
 VAR_6->keycode = VAR_3->keycode;
 FUNC_1(VAR_3->keycode, VAR_2->keybit);

 if (*VAR_4 != VAR_1) {
  FUNC_0(*VAR_4, VAR_2->keybit);
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   if (VAR_6[VAR_8].keycode == *VAR_4) {
    FUNC_1(*VAR_4, VAR_2->keybit);
    break;
   }
  }
 }

 return 0;
}
