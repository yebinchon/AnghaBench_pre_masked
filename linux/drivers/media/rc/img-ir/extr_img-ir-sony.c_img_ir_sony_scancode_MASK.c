
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct img_ir_scancode_req {unsigned int scancode; int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_0(int VAR_8, u64 VAR_9, u64 VAR_10,
    struct img_ir_scancode_req *VAR_11)
{
 unsigned int VAR_12, VAR_13, VAR_14;

 switch (VAR_8) {
 case 12:
  if (!(VAR_10 & VAR_2))
   return -VAR_0;
  VAR_14 = VAR_9 & 0x7f;
  VAR_9 >>= 7;
  VAR_12 = VAR_9 & 0x1f;
  VAR_13 = 0;
  VAR_11->protocol = VAR_5;
  break;
 case 15:
  if (!(VAR_10 & VAR_3))
   return -VAR_0;
  VAR_14 = VAR_9 & 0x7f;
  VAR_9 >>= 7;
  VAR_12 = VAR_9 & 0xff;
  VAR_13 = 0;
  VAR_11->protocol = VAR_6;
  break;
 case 20:
  if (!(VAR_10 & VAR_4))
   return -VAR_0;
  VAR_14 = VAR_9 & 0x7f;
  VAR_9 >>= 7;
  VAR_12 = VAR_9 & 0x1f;
  VAR_9 >>= 5;
  VAR_13 = VAR_9 & 0xff;
  VAR_11->protocol = VAR_7;
  break;
 default:
  return -VAR_0;
 }
 VAR_11->scancode = VAR_12 << 16 | VAR_13 << 8 | VAR_14;
 return VAR_1;
}
