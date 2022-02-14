
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rc_scancode_filter {int data; int mask; } ;
struct img_ir_filter {unsigned int data; unsigned int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const struct rc_scancode_filter *VAR_3,
        struct img_ir_filter *VAR_4, u64 VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_8 = VAR_3->data & 0xff;
 VAR_12 = VAR_3->mask & 0xff;

 VAR_5 &= VAR_0 | VAR_2 | VAR_1;






 if (!FUNC_1(VAR_5)) {
  if ((VAR_3->data | VAR_3->mask) & 0xff000000)
   VAR_5 = VAR_1;
  else if ((VAR_3->data | VAR_3->mask) & 0x00ff0000)
   VAR_5 = VAR_2;
  else
   VAR_5 = VAR_0;
 }

 if (VAR_5 == VAR_1) {


  VAR_6 = FUNC_0(VAR_3->data >> 24);
  VAR_10 = FUNC_0(VAR_3->mask >> 24);
  VAR_7 = FUNC_0(VAR_3->data >> 16);
  VAR_11 = FUNC_0(VAR_3->mask >> 16);
  VAR_8 = FUNC_0(VAR_3->data >> 8);
  VAR_12 = FUNC_0(VAR_3->mask >> 8);
  VAR_9 = FUNC_0(VAR_3->data >> 0);
  VAR_13 = FUNC_0(VAR_3->mask >> 0);
 } else if (VAR_5 == VAR_2) {


  VAR_6 = (VAR_3->data >> 16) & 0xff;
  VAR_10 = (VAR_3->mask >> 16) & 0xff;
  VAR_7 = (VAR_3->data >> 8) & 0xff;
  VAR_11 = (VAR_3->mask >> 8) & 0xff;
  VAR_9 = VAR_8 ^ 0xff;
  VAR_13 = VAR_12;
 } else {


  VAR_6 = (VAR_3->data >> 8) & 0xff;
  VAR_10 = (VAR_3->mask >> 8) & 0xff;
  VAR_7 = VAR_6 ^ 0xff;
  VAR_11 = VAR_10;
  VAR_9 = VAR_8 ^ 0xff;
  VAR_13 = VAR_12;
 }


 VAR_4->data = VAR_9 << 24 |
      VAR_8 << 16 |
      VAR_7 << 8 |
      VAR_6;
 VAR_4->mask = VAR_13 << 24 |
      VAR_12 << 16 |
      VAR_11 << 8 |
      VAR_10;
 return 0;
}
