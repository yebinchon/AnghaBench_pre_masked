
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i740fb_par {scalar_t__ ref_count; int open_lock; } ;
struct fb_info {struct i740fb_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_1, int VAR_2)
{
 struct i740fb_par *VAR_3 = VAR_1->par;

 FUNC_1(&(VAR_3->open_lock));
 if (VAR_3->ref_count == 0) {
  FUNC_0(VAR_1, "release called with zero refcount\n");
  FUNC_2(&(VAR_3->open_lock));
  return -VAR_0;
 }

 VAR_3->ref_count--;
 FUNC_2(&(VAR_3->open_lock));

 return 0;
}
