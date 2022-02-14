
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i740fb_par {int open_lock; int ref_count; } ;
struct fb_info {struct i740fb_par* par; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_0, int VAR_1)
{
 struct i740fb_par *VAR_2 = VAR_0->par;

 FUNC_0(&(VAR_2->open_lock));
 VAR_2->ref_count++;
 FUNC_1(&(VAR_2->open_lock));

 return 0;
}
