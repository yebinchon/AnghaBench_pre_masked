
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_map_table {int scancode; int keycode; } ;
struct rc_map {unsigned int len; int lock; struct rc_map_table* scan; } ;
struct rc_dev {struct rc_map rc_map; } ;
struct input_keymap_entry {int flags; unsigned int index; int len; int keycode; int scancode; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rc_dev* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct input_keymap_entry*,unsigned int*) ;
 unsigned int FUNC_2 (struct rc_map*,unsigned int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_3,
    struct input_keymap_entry *VAR_4)
{
 struct rc_dev *VAR_5 = FUNC_0(VAR_3);
 struct rc_map *VAR_6 = &VAR_5->rc_map;
 struct rc_map_table *VAR_7;
 unsigned long VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 FUNC_4(&VAR_6->lock, VAR_8);

 if (VAR_4->flags & VAR_1) {
  VAR_9 = VAR_4->index;
 } else {
  VAR_11 = FUNC_1(VAR_4, &VAR_10);
  if (VAR_11)
   goto out;

  VAR_9 = FUNC_2(VAR_6, VAR_10);
 }

 if (VAR_9 < VAR_6->len) {
  VAR_7 = &VAR_6->scan[VAR_9];

  VAR_4->index = VAR_9;
  VAR_4->keycode = VAR_7->keycode;
  VAR_4->len = sizeof(VAR_7->scancode);
  FUNC_3(VAR_4->scancode, &VAR_7->scancode, sizeof(VAR_7->scancode));

 } else if (!(VAR_4->flags & VAR_1)) {





  VAR_4->index = VAR_9;
  VAR_4->keycode = VAR_2;
 } else {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_11 = 0;

out:
 FUNC_5(&VAR_6->lock, VAR_8);
 return VAR_11;
}
