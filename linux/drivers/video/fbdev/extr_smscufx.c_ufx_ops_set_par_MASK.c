
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct ufx_data {scalar_t__ fb_count; } ;
struct TYPE_6__ {int yres; int xres; } ;
struct TYPE_4__ {int smem_len; } ;
struct fb_info {TYPE_2__* fbdefio; TYPE_3__ var; TYPE_1__ fix; scalar_t__ screen_base; struct ufx_data* par; } ;
struct TYPE_5__ {int delay; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct ufx_data*,int ,int ,int ,int ) ;
 int FUNC_2 (struct ufx_data*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_1)
{
 struct ufx_data *VAR_2 = VAR_1->par;
 int VAR_3;
 u16 *VAR_4;
 int VAR_5;

 FUNC_0("set_par mode %dx%d", VAR_1->var.xres, VAR_1->var.yres);
 VAR_3 = FUNC_2(VAR_2, &VAR_1->var);

 if ((VAR_3 == 0) && (VAR_2->fb_count == 0)) {

  VAR_4 = (u16 *) VAR_1->screen_base;
  for (VAR_5 = 0; VAR_5 < VAR_1->fix.smem_len / 2; VAR_5++)
   VAR_4[VAR_5] = 0x37e6;

  FUNC_1(VAR_2, 0, 0, VAR_1->var.xres, VAR_1->var.yres);
 }


 if (VAR_1->fbdefio)
  VAR_1->fbdefio->delay = VAR_0;

 return VAR_3;
}
