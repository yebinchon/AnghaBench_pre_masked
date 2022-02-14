
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sm501fb_info {int dev; struct fb_info** fb; } ;
struct TYPE_2__ {int id; } ;
struct fb_info {TYPE_1__ fix; int node; int mm_lock; } ;
typedef enum sm501_controller { ____Placeholder_sm501_controller } sm501_controller ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (struct sm501fb_info*,int) ;
 int FUNC_5 (struct fb_info*,int,char const*) ;

__attribute__((used)) static int FUNC_6(struct sm501fb_info *VAR_0,
        enum sm501_controller VAR_1, const char *VAR_2)
{
 struct fb_info *VAR_3 = VAR_0->fb[VAR_1];
 int VAR_4;

 if (!VAR_3)
  return 0;

 FUNC_2(&VAR_0->fb[VAR_1]->mm_lock);

 VAR_4 = FUNC_5(VAR_0->fb[VAR_1], VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_0->dev, "cannot initialise fb %s\n", VAR_2);
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_0->fb[VAR_1]);
 if (VAR_4) {
  FUNC_0(VAR_0->dev, "failed to register fb %s\n", VAR_2);
  FUNC_4(VAR_0, VAR_1);
  return VAR_4;
 }

 FUNC_1(VAR_0->dev, "fb%d: %s frame buffer\n", VAR_3->node, VAR_3->fix.id);

 return 0;
}
