
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
 unsigned int VAR_3, VAR_4;
 unsigned int VAR_5, VAR_6;

 VAR_3 = (VAR_0->data >> 8) & 0xff;
 VAR_5 = (VAR_0->mask >> 8) & 0xff;
 VAR_4 = (VAR_0->data >> 0) & 0xff;
 VAR_6 = (VAR_0->mask >> 0) & 0xff;

 VAR_1->data = VAR_3 | VAR_4 << 8;
 VAR_1->mask = VAR_5 | VAR_6 << 8;

 return 0;
}
