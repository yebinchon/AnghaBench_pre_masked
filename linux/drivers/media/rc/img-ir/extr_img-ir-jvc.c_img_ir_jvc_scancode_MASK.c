
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct img_ir_scancode_req {unsigned int scancode; int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(int VAR_3, u64 VAR_4, u64 VAR_5,
          struct img_ir_scancode_req *VAR_6)
{
 unsigned int VAR_7, VAR_8;

 if (VAR_3 != 16)
  return -VAR_0;

 VAR_7 = (VAR_4 >> 0) & 0xff;
 VAR_8 = (VAR_4 >> 8) & 0xff;

 VAR_6->protocol = VAR_2;
 VAR_6->scancode = VAR_7 << 8 | VAR_8;
 return VAR_1;
}
