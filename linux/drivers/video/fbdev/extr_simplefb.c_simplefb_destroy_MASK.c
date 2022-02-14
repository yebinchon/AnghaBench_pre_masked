
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {scalar_t__ screen_base; int par; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_0)
{
 FUNC_2(VAR_0->par);
 FUNC_1(VAR_0->par);
 if (VAR_0->screen_base)
  FUNC_0(VAR_0->screen_base);
}
