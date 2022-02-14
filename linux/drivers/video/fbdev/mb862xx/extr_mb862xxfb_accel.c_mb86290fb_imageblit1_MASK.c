
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,unsigned char const*,int) ;

__attribute__((used)) static void FUNC_2(u32 *VAR_8, u16 VAR_9, u16 VAR_10, u16 VAR_11,
     u16 VAR_12, u16 VAR_13, u32 VAR_14,
     u32 VAR_15, const struct fb_image *VAR_16,
     struct fb_info *VAR_17)
{
 int VAR_18;
 unsigned const char *VAR_19;
 u16 VAR_20;


 VAR_8[0] = (VAR_7 << 24) | (1 << 16) | VAR_3;

 VAR_8[1] = (2 << 7) | (VAR_4 << 9);
 VAR_8[2] =
     (VAR_6 << 24) | (VAR_2 << 16);
 VAR_8[3] = VAR_14;
 VAR_8[4] =
     (VAR_6 << 24) | (VAR_1 << 16);
 VAR_8[5] = VAR_15;

 VAR_18 = 0;
 VAR_19 = VAR_16->data;
 VAR_20 = (VAR_16->width + 7) >> 3;


 VAR_8[6] = (VAR_5 << 24) |
     (VAR_0 << 16) | (2 + (VAR_9 * VAR_13));
 VAR_8[7] = (VAR_11 << 16) | VAR_10;
 VAR_8[8] = (VAR_13 << 16) | VAR_12;

 while (VAR_18 < VAR_13) {
  FUNC_1(&VAR_8[9 + VAR_18 * VAR_9], VAR_19, VAR_9 << 2);
  VAR_19 += VAR_20;
  VAR_18++;
 }
}
