
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {int open_count; int initial_state; } ;
struct fb_info {struct nvidia_par* par; } ;


 int FUNC_0 (struct nvidia_par*,int *) ;
 int FUNC_1 (struct nvidia_par*) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_0, int VAR_1)
{
 struct nvidia_par *VAR_2 = VAR_0->par;

 if (!VAR_2->open_count) {
  FUNC_1(VAR_2);
  FUNC_0(VAR_2, &VAR_2->initial_state);
 }

 VAR_2->open_count++;
 return 0;
}
