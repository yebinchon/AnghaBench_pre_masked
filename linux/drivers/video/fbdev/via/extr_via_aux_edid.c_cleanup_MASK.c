
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_aux_drv {struct fb_monspecs* data; } ;
struct fb_monspecs {int modedb; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct via_aux_drv *VAR_0)
{
 struct fb_monspecs *VAR_1 = VAR_0->data;

 if (VAR_1)
  FUNC_0(VAR_1->modedb);
}
