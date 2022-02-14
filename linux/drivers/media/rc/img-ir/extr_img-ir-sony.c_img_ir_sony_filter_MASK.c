
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rc_scancode_filter {int data; int mask; } ;
struct img_ir_filter {unsigned int data; unsigned int mask; unsigned int minlen; unsigned int maxlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const struct rc_scancode_filter *VAR_4,
         struct img_ir_filter *VAR_5, u64 VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13 = 0;

 VAR_7 = (VAR_4->data >> 16) & 0xff;
 VAR_10 = (VAR_4->mask >> 16) & 0xff;
 VAR_8 = (VAR_4->data >> 8) & 0xff;
 VAR_11 = (VAR_4->mask >> 8) & 0xff;
 VAR_9 = (VAR_4->data >> 0) & 0x7f;
 VAR_12 = (VAR_4->mask >> 0) & 0x7f;

 VAR_6 &= VAR_1 | VAR_2 |
       VAR_3;






 if (!FUNC_0(VAR_6)) {
  if (VAR_8 & VAR_11)
   VAR_6 = VAR_3;
  else if (VAR_7 & VAR_10 & 0xe0)
   VAR_6 = VAR_2;
  else
   VAR_6 = VAR_1;
 }

 if (VAR_6 == VAR_3) {

  if (VAR_7 & VAR_10 & 0xe0)
   return -VAR_0;
  VAR_13 = 20;
  VAR_10 &= 0x1f;
 } else if (VAR_6 == VAR_2) {
  VAR_13 = 15;
  VAR_11 = 0;
 } else {





  VAR_11 &= (VAR_10 >> 5) | 0xf8;
  VAR_10 &= 0x1f;
 }


 VAR_7 &= VAR_10;
 VAR_8 &= VAR_11;


 VAR_5->data = VAR_9 |
      VAR_7 << 7 |
      VAR_8 << 15;
 VAR_5->mask = VAR_12 |
      VAR_10 << 7 |
      VAR_11 << 15;

 if (VAR_13) {
  VAR_5->minlen = VAR_13;
  VAR_5->maxlen = VAR_13;
 }
 return 0;
}
