
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {scalar_t__ enabled; } ;
struct omapfb_plane_struct {size_t idx; TYPE_2__ info; struct omapfb_device* fbdev; } ;
struct omapfb_mem_region {size_t size; scalar_t__ type; unsigned long paddr; } ;
struct omapfb_mem_info {scalar_t__ type; int size; } ;
struct fb_var_screeninfo {int dummy; } ;
struct TYPE_5__ {struct omapfb_mem_region* region; } ;
struct omapfb_device {TYPE_3__* ctrl; struct fb_var_screeninfo new_var; TYPE_1__ mem_desc; } ;
struct TYPE_8__ {scalar_t__ smem_len; scalar_t__ smem_start; } ;
struct fb_info {int mm_lock; TYPE_4__ fix; struct fb_var_screeninfo var; struct omapfb_plane_struct* par; } ;
struct TYPE_7__ {int (* setup_mem ) (size_t,size_t,scalar_t__,unsigned long*) ;int (* sync ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct fb_var_screeninfo*,struct fb_var_screeninfo*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct omapfb_device*) ;
 int FUNC_5 (struct omapfb_device*) ;
 int FUNC_6 (struct fb_info*,int ) ;
 int FUNC_7 (struct fb_info*,struct fb_var_screeninfo*) ;
 int FUNC_8 () ;
 int FUNC_9 (size_t,size_t,scalar_t__,unsigned long*) ;

__attribute__((used)) static int FUNC_10(struct fb_info *VAR_4, struct omapfb_mem_info *VAR_5)
{
 struct omapfb_plane_struct *VAR_6 = VAR_4->par;
 struct omapfb_device *VAR_7 = VAR_6->fbdev;
 struct omapfb_mem_region *VAR_8 = &VAR_7->mem_desc.region[VAR_6->idx];
 size_t VAR_9;
 int VAR_10 = 0;

 if (VAR_7->ctrl->setup_mem == ((void*)0))
  return -VAR_2;
 if (VAR_5->type != VAR_3)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_5->size);
 FUNC_4(VAR_7);
 if (VAR_6->info.enabled) {
  VAR_10 = -VAR_0;
  goto out;
 }
 if (VAR_8->size != VAR_9 || VAR_8->type != VAR_5->type) {
  struct fb_var_screeninfo *VAR_11 = &VAR_7->new_var;
  unsigned long VAR_12 = VAR_8->size;
  u8 VAR_13 = VAR_8->type;
  unsigned long VAR_14;

  VAR_8->size = VAR_9;
  VAR_8->type = VAR_5->type;






  if (VAR_12 != VAR_9 && VAR_9) {
   if (VAR_9) {
    FUNC_1(VAR_11, &VAR_4->var, sizeof(*VAR_11));
    VAR_10 = FUNC_7(VAR_4, VAR_11);
    if (VAR_10 < 0)
     goto out;
   }
  }

  if (VAR_7->ctrl->sync)
   VAR_7->ctrl->sync();
  VAR_10 = VAR_7->ctrl->setup_mem(VAR_6->idx, VAR_9, VAR_5->type, &VAR_14);
  if (VAR_10 < 0) {

   VAR_8->size = VAR_12;
   VAR_8->type = VAR_13;
   goto out;
  }
  VAR_8->paddr = VAR_14;

  if (VAR_12 != VAR_9) {
   if (VAR_9) {
    FUNC_1(&VAR_4->var, VAR_11, sizeof(VAR_4->var));
    FUNC_6(VAR_4, 0);
   } else {





    FUNC_2(&VAR_4->mm_lock);
    VAR_4->fix.smem_start = 0;
    VAR_4->fix.smem_len = 0;
    FUNC_3(&VAR_4->mm_lock);
   }
  }
 }
out:
 FUNC_5(VAR_7);

 return VAR_10;
}
