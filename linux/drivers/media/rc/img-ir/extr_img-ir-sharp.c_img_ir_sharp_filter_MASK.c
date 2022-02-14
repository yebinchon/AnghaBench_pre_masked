
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rc_scancode_filter {int data; int mask; } ;
struct img_ir_filter {unsigned int data; unsigned int mask; } ;



__attribute__((used)) static int FUNC_0(const struct rc_scancode_filter *VAR_0,
          struct img_ir_filter *VAR_1, u64 VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5 = 0, VAR_6 = 0;
 unsigned int VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0;

 VAR_3 = (VAR_0->data >> 8) & 0x1f;
 VAR_7 = (VAR_0->mask >> 8) & 0x1f;
 VAR_4 = (VAR_0->data >> 0) & 0xff;
 VAR_8 = (VAR_0->mask >> 0) & 0xff;
 if (VAR_8) {

  VAR_5 = 1;
  VAR_9 = 1;
  VAR_6 = 0;
  VAR_10 = 1;
 }

 VAR_1->data = VAR_3 |
      VAR_4 << 5 |
      VAR_5 << 13 |
      VAR_6 << 14;
 VAR_1->mask = VAR_7 |
      VAR_8 << 5 |
      VAR_9 << 13 |
      VAR_10 << 14;

 return 0;
}
