
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fb_info {int dummy; } ;
struct fb_image {unsigned char* data; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,unsigned char const*,int) ;

__attribute__((used)) static void FUNC_1(u32 *VAR_2, u16 VAR_3, u16 VAR_4, u16 VAR_5,
      u16 VAR_6, u16 VAR_7, u32 VAR_8,
      u32 VAR_9, const struct fb_image *VAR_10,
      struct fb_info *VAR_11)
{
 int VAR_12;
 unsigned const char *VAR_13;
 u16 VAR_14;

 VAR_12 = 0;
 VAR_13 = VAR_10->data;
 VAR_14 = VAR_10->width << 1;

 VAR_2[0] = (VAR_1 << 24) |
     (VAR_0 << 16) | (2 + VAR_3 * VAR_7);
 VAR_2[1] = (VAR_5 << 16) | VAR_4;
 VAR_2[2] = (VAR_7 << 16) | VAR_6;

 while (VAR_12 < VAR_7) {
  FUNC_0(&VAR_2[3 + VAR_12 * VAR_3], VAR_13, VAR_3);
  VAR_13 += VAR_14;
  VAR_12++;
 }
}
