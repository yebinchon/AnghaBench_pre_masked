
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int yres; int xres; int bits_per_pixel; } ;
struct TYPE_4__ {int line_length; } ;
struct TYPE_6__ {TYPE_2__ var; TYPE_1__ fix; scalar_t__ screen_base; } ;
struct stifb_info {int id; TYPE_3__ info; } ;


 int VAR_0 ;
 int FUNC_0 (struct stifb_info*) ;
 int FUNC_1 (struct stifb_info*) ;
 int FUNC_2 (struct stifb_info*) ;
 int FUNC_3 (scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_4(struct stifb_info *VAR_1)
{
 int VAR_2, VAR_3;





 FUNC_0(VAR_1);


 VAR_2 = VAR_1->id;
 VAR_1->id = VAR_0;
 FUNC_2(VAR_1);
 VAR_1->id = VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_1->info.var.yres; ++VAR_3)
  FUNC_3(VAR_1->info.screen_base + VAR_3 * VAR_1->info.fix.line_length,
   0xff, VAR_1->info.var.xres * VAR_1->info.var.bits_per_pixel/8);

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
}
