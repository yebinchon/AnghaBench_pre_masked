
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501fb_info {struct fb_info** fb; } ;
struct fb_info {int cmap; } ;
typedef enum sm501_controller { ____Placeholder_sm501_controller } sm501_controller ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct sm501fb_info *VAR_0,
    enum sm501_controller VAR_1)
{
 struct fb_info *VAR_2 = VAR_0->fb[VAR_1];

 if (!VAR_2)
  return;

 FUNC_0(&VAR_2->cmap);
}
