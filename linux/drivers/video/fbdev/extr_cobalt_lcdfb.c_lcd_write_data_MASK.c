
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct fb_info {scalar_t__ screen_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct fb_info *VAR_1, u8 VAR_2)
{
 FUNC_0((u32)VAR_2 << 24, VAR_1->screen_base + VAR_0);
}
