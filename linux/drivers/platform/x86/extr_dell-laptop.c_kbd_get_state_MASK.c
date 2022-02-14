
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbd_state {int triggers; int timeout_value; int timeout_unit; int als_setting; int als_value; int level; int timeout_value_ac; int timeout_unit_ac; int mode_bit; } ;
struct calling_interface_buffer {int* output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct calling_interface_buffer*,int,int ,int ,int ) ;
 int FUNC_1 (struct calling_interface_buffer*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct kbd_state *VAR_2)
{
 struct calling_interface_buffer VAR_3;
 int VAR_4;

 FUNC_0(&VAR_3, 0x1, 0, 0, 0);
 VAR_4 = FUNC_1(&VAR_3,
    VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_2->mode_bit = FUNC_2(VAR_3.output[1] & 0xFFFF);
 if (VAR_2->mode_bit != 0)
  VAR_2->mode_bit--;

 VAR_2->triggers = (VAR_3.output[1] >> 16) & 0xFF;
 VAR_2->timeout_value = (VAR_3.output[1] >> 24) & 0x3F;
 VAR_2->timeout_unit = (VAR_3.output[1] >> 30) & 0x3;
 VAR_2->als_setting = VAR_3.output[2] & 0xFF;
 VAR_2->als_value = (VAR_3.output[2] >> 8) & 0xFF;
 VAR_2->level = (VAR_3.output[2] >> 16) & 0xFF;
 VAR_2->timeout_value_ac = (VAR_3.output[2] >> 24) & 0x3F;
 VAR_2->timeout_unit_ac = (VAR_3.output[2] >> 30) & 0x3;

 return VAR_4;
}
