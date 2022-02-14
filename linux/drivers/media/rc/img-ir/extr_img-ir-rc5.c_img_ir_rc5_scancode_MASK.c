
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct img_ir_scancode_req {unsigned int scancode; unsigned int toggle; int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(int VAR_3, u64 VAR_4, u64 VAR_5,
    struct img_ir_scancode_req *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;


 VAR_4 >>= 2;

 VAR_10 = (VAR_4 >> 13) & 0x01;
 VAR_9 = (VAR_4 >> 11) & 0x01;
 VAR_7 = (VAR_4 >> 6) & 0x1f;
 VAR_8 = VAR_4 & 0x3f;




 VAR_8 += ((VAR_4 >> 12) & 0x01) ? 0 : 0x40;

 if (!VAR_10)
  return -VAR_0;

 VAR_6->protocol = VAR_2;
 VAR_6->scancode = VAR_7 << 8 | VAR_8;
 VAR_6->toggle = VAR_9;
 return VAR_1;
}
