
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef int u32 ;
struct pxafb_mach_info {int dummy; } ;
struct TYPE_5__ {int height; int width; int vmode; int accel_flags; int activate; scalar_t__ nonstd; } ;
struct TYPE_4__ {int ypanstep; int accel; scalar_t__ ywrapstep; scalar_t__ xpanstep; scalar_t__ type_aux; int type; int id; } ;
struct TYPE_6__ {int node; void* pseudo_palette; int flags; int * fbops; TYPE_2__ var; TYPE_1__ fix; } ;
struct pxafb_info {int disable_done; int ctrlr_lock; int task; int ctrlr_wait; int lccr0; scalar_t__ task_state; int state; TYPE_3__ fb; int clk; struct pxafb_mach_info* inf; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pxafb_info* FUNC_0 (int ) ;
 struct pxafb_info* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct device*,int *) ;
 struct pxafb_info* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct pxafb_info*,struct pxafb_mach_info*) ;
 int VAR_11 ;
 scalar_t__ FUNC_10 () ;
 int VAR_12 ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static struct pxafb_info *FUNC_12(struct device *VAR_13,
         struct pxafb_mach_info *VAR_14)
{
 struct pxafb_info *VAR_15;
 void *VAR_16;


 VAR_15 = FUNC_5(VAR_13, sizeof(struct pxafb_info) + sizeof(u32) * 16,
      VAR_8);
 if (!VAR_15)
  return FUNC_1(-VAR_1);

 VAR_15->dev = VAR_13;
 VAR_15->inf = VAR_14;

 VAR_15->clk = FUNC_4(VAR_13, ((void*)0));
 if (FUNC_3(VAR_15->clk))
  return FUNC_0(VAR_15->clk);

 FUNC_11(VAR_15->fb.fix.id, VAR_10);

 VAR_15->fb.fix.type = VAR_6;
 VAR_15->fb.fix.type_aux = 0;
 VAR_15->fb.fix.xpanstep = 0;
 VAR_15->fb.fix.ypanstep = 1;
 VAR_15->fb.fix.ywrapstep = 0;
 VAR_15->fb.fix.accel = VAR_4;

 VAR_15->fb.var.nonstd = 0;
 VAR_15->fb.var.activate = VAR_5;
 VAR_15->fb.var.height = -1;
 VAR_15->fb.var.width = -1;
 VAR_15->fb.var.accel_flags = VAR_3;
 VAR_15->fb.var.vmode = VAR_7;

 VAR_15->fb.fbops = &VAR_11;
 VAR_15->fb.flags = VAR_2;
 VAR_15->fb.node = -1;

 VAR_16 = VAR_15;
 VAR_16 = VAR_16 + sizeof(struct pxafb_info);
 VAR_15->fb.pseudo_palette = VAR_16;

 VAR_15->state = VAR_0;
 VAR_15->task_state = (u_char)-1;

 FUNC_9(VAR_15, VAR_14);







 FUNC_7(&VAR_15->ctrlr_wait);
 FUNC_2(&VAR_15->task, VAR_12);
 FUNC_8(&VAR_15->ctrlr_lock);
 FUNC_6(&VAR_15->disable_done);

 return VAR_15;
}
