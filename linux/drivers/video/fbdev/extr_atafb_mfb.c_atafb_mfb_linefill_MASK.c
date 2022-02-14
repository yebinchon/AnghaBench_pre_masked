
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
typedef int u8 ;
typedef int u32 ;
struct fb_info {scalar_t__ screen_base; } ;



void FUNC_0(struct fb_info *VAR_0, u_long VAR_1,
   int VAR_2, int VAR_3, u32 VAR_4,
   const u8 *VAR_5, u32 VAR_6, u32 VAR_7)
{
 u8 *VAR_8;
 u_int VAR_9;

 VAR_8 = (u8 *)VAR_0->screen_base + VAR_2 * VAR_1 + (VAR_3 >> 3);

 for (VAR_9 = VAR_4 / 8; VAR_9--; ) {

  *VAR_8++ = *VAR_5++;
 }
}
