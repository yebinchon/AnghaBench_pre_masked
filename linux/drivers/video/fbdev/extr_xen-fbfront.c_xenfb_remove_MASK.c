
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct xenfb_info {int fb; int gfns; scalar_t__ page; TYPE_1__* fb_info; } ;
struct xenbus_device {int dev; } ;
struct TYPE_4__ {int cmap; } ;


 struct xenfb_info* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct xenfb_info*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct xenfb_info*) ;

__attribute__((used)) static int FUNC_9(struct xenbus_device *VAR_0)
{
 struct xenfb_info *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_8(VAR_1);
 if (VAR_1->fb_info) {
  FUNC_2(VAR_1->fb_info);
  FUNC_6(VAR_1->fb_info);
  FUNC_1(&VAR_1->fb_info->cmap);
  FUNC_3(VAR_1->fb_info);
 }
 FUNC_4((unsigned long)VAR_1->page);
 FUNC_7(VAR_1->gfns);
 FUNC_7(VAR_1->fb);
 FUNC_5(VAR_1);

 return 0;
}
