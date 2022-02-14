
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_map {unsigned int len; int lock; } ;
struct rc_dev {struct rc_map rc_map; } ;
struct input_keymap_entry {int flags; unsigned int index; int keycode; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rc_dev* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct input_keymap_entry const*,unsigned int*) ;
 unsigned int FUNC_2 (struct rc_dev*,struct rc_map*,unsigned int,int) ;
 unsigned int FUNC_3 (struct rc_dev*,struct rc_map*,unsigned int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_3,
    const struct input_keymap_entry *VAR_4,
    unsigned int *VAR_5)
{
 struct rc_dev *VAR_6 = FUNC_0(VAR_3);
 struct rc_map *VAR_7 = &VAR_6->rc_map;
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10 = 0;
 unsigned long VAR_11;

 FUNC_4(&VAR_7->lock, VAR_11);

 if (VAR_4->flags & VAR_2) {
  VAR_8 = VAR_4->index;
  if (VAR_8 >= VAR_7->len) {
   VAR_10 = -VAR_0;
   goto out;
  }
 } else {
  VAR_10 = FUNC_1(VAR_4, &VAR_9);
  if (VAR_10)
   goto out;

  VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_9, 1);
  if (VAR_8 >= VAR_7->len) {
   VAR_10 = -VAR_1;
   goto out;
  }
 }

 *VAR_5 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_4->keycode);

out:
 FUNC_5(&VAR_7->lock, VAR_11);
 return VAR_10;
}
