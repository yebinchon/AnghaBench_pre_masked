
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rc_scancode_filter {int data; int mask; } ;
struct img_ir_filter {int data; int mask; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct rc_scancode_filter *VAR_1,
          struct img_ir_filter *VAR_2, u64 VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9;

 VAR_6 = VAR_1->data & 0xff;
 VAR_9 = VAR_1->mask & 0xff;
 VAR_7 = VAR_6 ^ 0xff;

 if (VAR_1->data & 0xff700000)
  return -VAR_0;

 VAR_4 = (VAR_1->data >> 8) & 0x1fff;
 VAR_8 = (VAR_1->mask >> 8) & 0x1fff;
 VAR_5 = VAR_4 ^ 0x1fff;

 VAR_2->data = (u64)VAR_7 << 34 |
      (u64)VAR_6 << 26 |
    VAR_5 << 13 |
    VAR_4;
 VAR_2->mask = (u64)VAR_9 << 34 |
      (u64)VAR_9 << 26 |
    VAR_8 << 13 |
    VAR_8;
 return 0;
}
