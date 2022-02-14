
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fb_info {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(u_int VAR_1, u_int VAR_2, u_int VAR_3,
       u_int VAR_4, u_int VAR_5, struct fb_info *VAR_6)
{
 volatile unsigned int *VAR_7 = (volatile unsigned int *) VAR_0;

 if (VAR_1 > 255)
  return 1;

 VAR_2 >>= 8;
 VAR_3 >>= 8;
 VAR_4 >>= 8;

 VAR_7[VAR_1 << 1] = (VAR_2 << 16) | (VAR_3 << 8) | VAR_4;

 return 0;
}
