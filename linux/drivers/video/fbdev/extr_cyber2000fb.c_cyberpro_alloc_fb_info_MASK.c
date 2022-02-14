
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int height; int width; int accel_flags; int activate; scalar_t__ nonstd; } ;
struct TYPE_4__ {int ypanstep; int accel; scalar_t__ ywrapstep; scalar_t__ xpanstep; scalar_t__ type_aux; int type; int id; } ;
struct TYPE_6__ {int flags; int cmap; int pseudo_palette; int * fbops; TYPE_2__ var; TYPE_1__ fix; } ;
struct cfb_info {unsigned int id; int ref_ps; int* divisors; TYPE_3__ fb; int reg_b0_lock; int pseudo_palette; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int ,int ) ;
 struct cfb_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static struct cfb_info *FUNC_4(unsigned int VAR_11, char *VAR_12)
{
 struct cfb_info *VAR_13;

 VAR_13 = FUNC_1(sizeof(struct cfb_info), VAR_8);
 if (!VAR_13)
  return ((void*)0);


 VAR_13->id = VAR_11;

 if (VAR_11 == 129)
  VAR_13->ref_ps = 40690;
 else
  VAR_13->ref_ps = 69842;

 VAR_13->divisors[0] = 1;
 VAR_13->divisors[1] = 2;
 VAR_13->divisors[2] = 4;

 if (VAR_11 == 131)
  VAR_13->divisors[3] = 8;
 else
  VAR_13->divisors[3] = 6;

 FUNC_3(VAR_13->fb.fix.id, VAR_12);

 VAR_13->fb.fix.type = VAR_7;
 VAR_13->fb.fix.type_aux = 0;
 VAR_13->fb.fix.xpanstep = 0;
 VAR_13->fb.fix.ypanstep = 1;
 VAR_13->fb.fix.ywrapstep = 0;

 switch (VAR_11) {
 case 128:
  VAR_13->fb.fix.accel = 0;
  break;

 case 131:
  VAR_13->fb.fix.accel = VAR_3;
  break;

 case 130:
  VAR_13->fb.fix.accel = VAR_4;
  break;

 case 129:
  VAR_13->fb.fix.accel = VAR_5;
  break;
 }

 VAR_13->fb.var.nonstd = 0;
 VAR_13->fb.var.activate = VAR_6;
 VAR_13->fb.var.height = -1;
 VAR_13->fb.var.width = -1;
 VAR_13->fb.var.accel_flags = VAR_2;

 VAR_13->fb.fbops = &VAR_10;
 VAR_13->fb.flags = VAR_0 | VAR_1;
 VAR_13->fb.pseudo_palette = VAR_13->pseudo_palette;

 FUNC_2(&VAR_13->reg_b0_lock);

 FUNC_0(&VAR_13->fb.cmap, VAR_9, 0);

 return VAR_13;
}
