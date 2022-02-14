
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_mem_desc {int region_cnt; int * region; } ;
struct TYPE_4__ {TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct omapfb_mem_desc *VAR_2)
{
 if (!VAR_2->region_cnt) {
  FUNC_1(VAR_1.fbdev->dev, "no memory regions defined\n");
  return -VAR_0;
 }

 if (VAR_2->region_cnt > 1) {
  FUNC_1(VAR_1.fbdev->dev, "only one plane is supported\n");
  VAR_2->region_cnt = 1;
 }

 return FUNC_0(&VAR_2->region[0]);
}
