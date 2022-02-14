
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fb_var_screeninfo {int bits_per_pixel; } ;



__attribute__((used)) static inline u_int FUNC_0(struct fb_var_screeninfo *VAR_0)
{
 int VAR_1 = 0;
 switch (VAR_0->bits_per_pixel) {
 case 4: VAR_1 = 0 << 12; break;
 case 8: VAR_1 = 1 << 12; break;
 case 16: VAR_1 = 2 << 12; break;
 }
 return VAR_1;
}
