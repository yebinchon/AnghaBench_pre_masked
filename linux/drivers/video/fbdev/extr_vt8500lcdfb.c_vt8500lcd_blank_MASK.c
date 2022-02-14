
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int visual; } ;
struct fb_info {int cmap; TYPE_1__ fix; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct fb_info*) ;
 int FUNC_1 (int,int ,int ,int ,int ,struct fb_info*) ;

__attribute__((used)) static int FUNC_2(int VAR_2, struct fb_info *VAR_3)
{
 int VAR_4;

 switch (VAR_2) {
 case 130:
 case 128:
 case 132:
 case 131:
  if (VAR_3->fix.visual == VAR_0 ||
      VAR_3->fix.visual == VAR_1)
   for (VAR_4 = 0; VAR_4 < 256; VAR_4++)
    FUNC_1(VAR_4, 0, 0, 0, 0, VAR_3);
 case 129:
  if (VAR_3->fix.visual == VAR_0 ||
      VAR_3->fix.visual == VAR_1)
   FUNC_0(&VAR_3->cmap, VAR_3);
 }
 return 0;
}
