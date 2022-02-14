
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_map_table {unsigned int scancode; scalar_t__ keycode; } ;
struct input_keymap_entry {int flags; unsigned int index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct input_keymap_entry const*,unsigned int*) ;

__attribute__((used)) static unsigned int
FUNC_1(const struct input_keymap_entry *VAR_3,
    struct rc_map_table *VAR_4,
    unsigned int VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;

 if (VAR_3->flags & VAR_0) {
  VAR_6 = VAR_3->index;
 } else {
  if (FUNC_0(VAR_3, &VAR_7))
   return VAR_5;


  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   if (VAR_4[VAR_6].scancode == VAR_7)
    break;


  if (VAR_6 >= VAR_5) {
   for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    if (VAR_4[VAR_6].keycode == VAR_1 ||
        VAR_4[VAR_6].keycode == VAR_2) {
     break;
    }
   }
  }
 }

 return VAR_6;
}
