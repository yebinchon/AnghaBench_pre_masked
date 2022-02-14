
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_info {int id; struct omapfb2_mem_region* region; struct omapfb2_device* fbdev; } ;
struct omapfb2_mem_region {unsigned long size; unsigned long paddr; int type; } ;
struct omapfb2_device {int dummy; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {struct fb_var_screeninfo var; } ;
typedef int new_var ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 struct omapfb_info* FUNC_1 (struct fb_info*) ;
 int VAR_1 ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (struct fb_info*,struct fb_var_screeninfo*) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (struct fb_var_screeninfo*,struct fb_var_screeninfo*,int) ;
 int FUNC_6 (struct fb_info*,unsigned long,unsigned long) ;
 int FUNC_7 (struct fb_info*,int) ;
 int FUNC_8 (struct fb_info*) ;
 int FUNC_9 (struct omapfb2_device*,struct fb_info*) ;
 int FUNC_10 (struct fb_info*) ;
 int FUNC_11 (struct fb_info*) ;
 int FUNC_12 (struct fb_info*) ;

int FUNC_13(struct fb_info *VAR_2, unsigned long VAR_3, int VAR_4)
{
 struct omapfb_info *VAR_5 = FUNC_1(VAR_2);
 struct omapfb2_device *VAR_6 = VAR_5->fbdev;
 struct omapfb2_mem_region *VAR_7 = VAR_5->region;
 unsigned long VAR_8 = VAR_7->size;
 unsigned long VAR_9 = VAR_7->paddr;
 int VAR_10 = VAR_7->type;
 int VAR_11;

 if (VAR_4 != VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_3);

 if (VAR_8 == VAR_3 && VAR_10 == VAR_4)
  return 0;

 FUNC_10(VAR_2);

 if (VAR_3 == 0) {
  FUNC_4(VAR_2);
  return 0;
 }

 VAR_11 = FUNC_6(VAR_2, VAR_3, 0);

 if (VAR_11) {
  if (VAR_8)
   FUNC_6(VAR_2, VAR_8, VAR_9);

  if (VAR_7->size == 0)
   FUNC_4(VAR_2);

  return VAR_11;
 }

 if (VAR_8 == VAR_3)
  return 0;

 if (VAR_8 == 0) {
  FUNC_0("initializing fb %d\n", VAR_5->id);
  VAR_11 = FUNC_9(VAR_6, VAR_2);
  if (VAR_11) {
   FUNC_0("omapfb_fb_init failed\n");
   goto err;
  }
  VAR_11 = FUNC_7(VAR_2, 1);
  if (VAR_11) {
   FUNC_0("omapfb_apply_changes failed\n");
   goto err;
  }
 } else {
  struct fb_var_screeninfo VAR_12;
  FUNC_5(&VAR_12, &VAR_2->var, sizeof(VAR_12));
  VAR_11 = FUNC_3(VAR_2, &VAR_12);
  if (VAR_11)
   goto err;
  FUNC_5(&VAR_2->var, &VAR_12, sizeof(VAR_2->var));
  FUNC_11(VAR_2);
  VAR_11 = FUNC_12(VAR_2);
  if (VAR_11)
   goto err;
 }

 FUNC_8(VAR_2);

 return 0;
err:
 FUNC_10(VAR_2);
 FUNC_4(VAR_2);
 return VAR_11;
}
