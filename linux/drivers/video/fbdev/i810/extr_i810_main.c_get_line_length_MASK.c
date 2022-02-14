
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i810fb_par {int dummy; } ;



__attribute__((used)) static u32 FUNC_0(struct i810fb_par *VAR_0, int VAR_1, int VAR_2)
{
    u32 VAR_3;

 VAR_3 = VAR_1*VAR_2;
 VAR_3 = (VAR_3+31)&-32;
 VAR_3 >>= 3;
 return VAR_3;
}
