
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i810fb_par {int use_count; int open_lock; int state; } ;
struct fb_info {struct i810fb_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct i810fb_par*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_1, int VAR_2)
{
 struct i810fb_par *VAR_3 = VAR_1->par;

 FUNC_1(&VAR_3->open_lock);
 if (VAR_3->use_count == 0) {
  FUNC_2(&VAR_3->open_lock);
  return -VAR_0;
 }

 if (VAR_3->use_count == 1) {
  FUNC_0(VAR_3);
  FUNC_3(&VAR_3->state);
 }

 VAR_3->use_count--;
 FUNC_2(&VAR_3->open_lock);

 return 0;
}
