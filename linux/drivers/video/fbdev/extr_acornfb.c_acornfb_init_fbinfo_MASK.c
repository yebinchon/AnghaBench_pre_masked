
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int montype; scalar_t__ dpms; scalar_t__ dram_size; int pseudo_palette; } ;
struct TYPE_9__ {int length; } ;
struct TYPE_8__ {int length; } ;
struct TYPE_10__ {int height; int width; int accel_flags; int vmode; int activate; scalar_t__ nonstd; TYPE_3__ red; TYPE_3__ blue; TYPE_3__ green; TYPE_2__ transp; } ;
struct TYPE_7__ {int ypanstep; int ywrapstep; int accel; scalar_t__ line_length; scalar_t__ xpanstep; scalar_t__ type_aux; int type; int id; } ;
struct TYPE_11__ {int flags; TYPE_4__ var; TYPE_1__ fix; int pseudo_palette; int * fbops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__ VAR_8 ;
 TYPE_5__ VAR_9 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 static int VAR_10 = 1;

 if (!VAR_10)
  return;
 VAR_10 = 0;

 VAR_9.fbops = &VAR_7;
 VAR_9.flags = VAR_0 | VAR_1;
 VAR_9.pseudo_palette = VAR_8.pseudo_palette;

 FUNC_1(VAR_9.fix.id, "Acorn");
 VAR_9.fix.type = VAR_5;
 VAR_9.fix.type_aux = 0;
 VAR_9.fix.xpanstep = 0;
 VAR_9.fix.ypanstep = 1;
 VAR_9.fix.ywrapstep = 1;
 VAR_9.fix.line_length = 0;
 VAR_9.fix.accel = VAR_3;




 FUNC_0(&VAR_9.var, 0, sizeof(VAR_9.var));





 VAR_9.var.green = VAR_9.var.red;
 VAR_9.var.blue = VAR_9.var.red;
 VAR_9.var.nonstd = 0;
 VAR_9.var.activate = VAR_4;
 VAR_9.var.height = -1;
 VAR_9.var.width = -1;
 VAR_9.var.vmode = VAR_6;
 VAR_9.var.accel_flags = VAR_2;

 VAR_8.dram_size = 0;
 VAR_8.montype = -1;
 VAR_8.dpms = 0;
}
