
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kbd_state {int triggers; int timeout_value; int timeout_unit; int als_setting; int level; int timeout_value_ac; int timeout_unit_ac; int mode_bit; } ;
struct calling_interface_buffer {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct calling_interface_buffer*,int,int,int,int ) ;
 int FUNC_2 (struct calling_interface_buffer*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct kbd_state *VAR_2)
{
 struct calling_interface_buffer VAR_3;
 int VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_0(VAR_2->mode_bit) & 0xFFFF;
 VAR_5 |= (VAR_2->triggers & 0xFF) << 16;
 VAR_5 |= (VAR_2->timeout_value & 0x3F) << 24;
 VAR_5 |= (VAR_2->timeout_unit & 0x3) << 30;
 VAR_6 = VAR_2->als_setting & 0xFF;
 VAR_6 |= (VAR_2->level & 0xFF) << 16;
 VAR_6 |= (VAR_2->timeout_value_ac & 0x3F) << 24;
 VAR_6 |= (VAR_2->timeout_unit_ac & 0x3) << 30;
 FUNC_1(&VAR_3, 0x2, VAR_5, VAR_6, 0);
 VAR_4 = FUNC_2(&VAR_3,
    VAR_0, VAR_1);

 return VAR_4;
}
