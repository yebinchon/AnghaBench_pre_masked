
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef unsigned int u32 ;
struct imxfb_info {scalar_t__ cmap_inverse; } ;
struct TYPE_4__ {int blue; int green; int red; scalar_t__ grayscale; } ;
struct TYPE_3__ {int visual; } ;
struct fb_info {unsigned int* pseudo_palette; TYPE_2__ var; TYPE_1__ fix; struct imxfb_info* par; } ;





 unsigned int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int,int,int,int,struct fb_info*) ;

__attribute__((used)) static int FUNC_2(u_int VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
     u_int VAR_4, struct fb_info *VAR_5)
{
 struct imxfb_info *VAR_6 = VAR_5->par;
 unsigned int VAR_7;
 int VAR_8 = 1;







 if (VAR_6->cmap_inverse) {
  VAR_1 = 0xffff - VAR_1;
  VAR_2 = 0xffff - VAR_2;
  VAR_3 = 0xffff - VAR_3;
 }





 if (VAR_5->var.grayscale)
  VAR_1 = VAR_2 = VAR_3 = (19595 * VAR_1 + 38470 * VAR_2 +
     7471 * VAR_3) >> 16;

 switch (VAR_5->fix.visual) {
 case 128:




  if (VAR_0 < 16) {
   u32 *VAR_9 = VAR_5->pseudo_palette;

   VAR_7 = FUNC_0(VAR_1, &VAR_5->var.red);
   VAR_7 |= FUNC_0(VAR_2, &VAR_5->var.green);
   VAR_7 |= FUNC_0(VAR_3, &VAR_5->var.blue);

   VAR_9[VAR_0] = VAR_7;
   VAR_8 = 0;
  }
  break;

 case 129:
 case 130:
  VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 }

 return VAR_8;
}
