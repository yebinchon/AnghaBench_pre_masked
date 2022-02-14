
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct kbd_info {int modes; int type; int triggers; int levels; int seconds; int minutes; int hours; int days; } ;
struct calling_interface_buffer {int* output; } ;
struct TYPE_2__ {scalar_t__ kbd_led_levels_off_1; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct calling_interface_buffer*,int ,int ,int ,int ) ;
 int FUNC_2 (struct calling_interface_buffer*,int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct kbd_info *VAR_3)
{
 struct calling_interface_buffer VAR_4;
 u8 VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4, 0, 0, 0, 0);
 VAR_6 = FUNC_2(&VAR_4,
    VAR_0, VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_3->modes = VAR_4.output[1] & 0xFFFF;
 VAR_3->type = (VAR_4.output[1] >> 24) & 0xFF;
 VAR_3->triggers = VAR_4.output[2] & 0xFF;
 VAR_5 = (VAR_4.output[2] >> 8) & 0xFF;
 VAR_3->levels = (VAR_4.output[2] >> 16) & 0xFF;

 if (VAR_2 && VAR_2->kbd_led_levels_off_1 && VAR_3->levels)
  VAR_3->levels--;

 if (VAR_5 & FUNC_0(0))
  VAR_3->seconds = (VAR_4.output[3] >> 0) & 0xFF;
 if (VAR_5 & FUNC_0(1))
  VAR_3->minutes = (VAR_4.output[3] >> 8) & 0xFF;
 if (VAR_5 & FUNC_0(2))
  VAR_3->hours = (VAR_4.output[3] >> 16) & 0xFF;
 if (VAR_5 & FUNC_0(3))
  VAR_3->days = (VAR_4.output[3] >> 24) & 0xFF;

 return VAR_6;
}
