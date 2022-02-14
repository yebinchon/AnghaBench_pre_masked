
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_par {int open_count; int open_lock; int vgastate; int initial; } ;
struct fb_info {struct savagefb_par* par; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct savagefb_par*,int *) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_0, int VAR_1)
{
 struct savagefb_par *VAR_2 = VAR_0->par;

 FUNC_0(&VAR_2->open_lock);

 if (VAR_2->open_count == 1) {
  FUNC_3(VAR_2, &VAR_2->initial);
  FUNC_2(&VAR_2->vgastate);
 }

 VAR_2->open_count--;
 FUNC_1(&VAR_2->open_lock);
 return 0;
}
