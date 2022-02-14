
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fb_info {int screen_base; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u8 FUNC_1(struct fb_info *VAR_0)
{
 return FUNC_0(VAR_0->screen_base) >> 24;
}
