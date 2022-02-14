
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rc_map_table {int scancode; int keycode; } ;
struct input_keymap_entry {int len; unsigned int index; int scancode; int keycode; } ;
struct input_dev {int dummy; } ;
struct TYPE_4__ {unsigned int rc_map_size; struct rc_map_table* rc_map_table; } ;
struct TYPE_5__ {TYPE_1__ legacy; } ;
struct TYPE_6__ {TYPE_2__ rc; } ;
struct dvb_usb_device {TYPE_3__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dvb_usb_device* FUNC_0 (struct input_dev*) ;
 unsigned int FUNC_1 (struct input_keymap_entry*,struct rc_map_table*,unsigned int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_3,
         struct input_keymap_entry *VAR_4)
{
 struct dvb_usb_device *VAR_5 = FUNC_0(VAR_3);
 struct rc_map_table *VAR_6 = VAR_5->props.rc.legacy.rc_map_table;
 unsigned int VAR_7 = VAR_5->props.rc.legacy.rc_map_size;
 unsigned int VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_7);
 if (VAR_8 >= VAR_7)
  return -VAR_0;

 VAR_4->keycode = VAR_6[VAR_8].keycode;
 if (VAR_4->keycode == VAR_2)
  VAR_4->keycode = VAR_1;
 VAR_4->len = sizeof(VAR_6[VAR_8].scancode);
 FUNC_2(&VAR_4->scancode, &VAR_6[VAR_8].scancode, VAR_4->len);
 VAR_4->index = VAR_8;

 return 0;
}
