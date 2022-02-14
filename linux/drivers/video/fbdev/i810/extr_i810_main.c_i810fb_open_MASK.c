
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vgastate {int dummy; } ;
struct TYPE_3__ {int vgabase; int flags; } ;
struct i810fb_par {scalar_t__ use_count; int open_lock; TYPE_1__ state; int mmio_start_virtual; } ;
struct fb_info {struct i810fb_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct i810fb_par*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_1, int VAR_2)
{
 struct i810fb_par *VAR_3 = VAR_1->par;

 FUNC_2(&VAR_3->open_lock);
 if (VAR_3->use_count == 0) {
  FUNC_1(&VAR_3->state, 0, sizeof(struct vgastate));
  VAR_3->state.flags = VAR_0;
  VAR_3->state.vgabase = VAR_3->mmio_start_virtual;
  FUNC_4(&VAR_3->state);

  FUNC_0(VAR_3);
 }

 VAR_3->use_count++;
 FUNC_3(&VAR_3->open_lock);

 return 0;
}
