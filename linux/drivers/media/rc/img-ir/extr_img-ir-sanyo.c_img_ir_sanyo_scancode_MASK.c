
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

__attribute__((used)) static int FUNC_0(int VAR_4, u64 VAR_5, u64 VAR_6,
     struct img_ir_scancode_req *VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;

 if (!VAR_4)
  return VAR_1;
 if (VAR_4 != 42)
  return -VAR_0;
 VAR_8 = (VAR_5 >> 0) & 0x1fff;
 VAR_9 = (VAR_5 >> 13) & 0x1fff;
 VAR_10 = (VAR_5 >> 26) & 0xff;
 VAR_11 = (VAR_5 >> 34) & 0xff;

 if ((VAR_11 ^ VAR_10) != 0xff)
  return -VAR_0;

 if ((VAR_9 ^ VAR_8) != 0x1fff)
  return -VAR_0;


 VAR_7->protocol = VAR_3;
 VAR_7->scancode = VAR_8 << 8 | VAR_10;
 return VAR_2;
}
