
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct viafb_par {int fbmem_free; int fbmem; } ;
struct fb_fix_screeninfo {int ypanstep; scalar_t__ ywrapstep; scalar_t__ xpanstep; int visual; scalar_t__ type_aux; int type; int smem_len; int smem_start; int id; } ;
struct TYPE_3__ {int accel; } ;
struct TYPE_4__ {TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fb_fix_screeninfo*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void FUNC_2(struct fb_fix_screeninfo *VAR_5,
 struct viafb_par *VAR_6)
{
 FUNC_0(VAR_5, 0, sizeof(struct fb_fix_screeninfo));
 FUNC_1(VAR_5->id, VAR_3);

 VAR_5->smem_start = VAR_6->fbmem;
 VAR_5->smem_len = VAR_6->fbmem_free;

 VAR_5->type = VAR_1;
 VAR_5->type_aux = 0;
 VAR_5->visual = VAR_2;

 VAR_5->xpanstep = VAR_5->ywrapstep = 0;
 VAR_5->ypanstep = 1;


 VAR_4->fix.accel = VAR_0;
}
