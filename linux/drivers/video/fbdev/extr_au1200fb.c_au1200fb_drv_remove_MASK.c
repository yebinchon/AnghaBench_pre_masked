
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct fb_info {int pseudo_palette; TYPE_1__ cmap; } ;
struct au1200fb_platdata {int dummy; } ;


 struct fb_info** VAR_0 ;
 int FUNC_0 (int *,struct au1200fb_platdata*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int ) ;
 struct au1200fb_platdata* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (struct fb_info*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 struct au1200fb_platdata *VAR_3 = FUNC_5(VAR_2);
 struct fb_info *VAR_4;
 int VAR_5;


 FUNC_0(((void*)0), VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  VAR_4 = VAR_0[VAR_5];


  FUNC_7(VAR_4);
  if (VAR_4->cmap.len != 0)
   FUNC_1(&VAR_4->cmap);
  FUNC_4(VAR_4->pseudo_palette);

  FUNC_2(VAR_4);
  VAR_0[VAR_5] = ((void*)0);
 }

 FUNC_3(FUNC_6(VAR_2, 0), (void *)VAR_2);

 return 0;
}
