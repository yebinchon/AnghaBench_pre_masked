
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucb1x00_dev {int drv_node; int dev_node; TYPE_1__* drv; } ;
struct TYPE_2__ {int (* remove ) (struct ucb1x00_dev*) ;} ;


 int FUNC_0 (struct ucb1x00_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ucb1x00_dev*) ;

__attribute__((used)) static void FUNC_3(struct ucb1x00_dev *VAR_0)
{
 VAR_0->drv->remove(VAR_0);
 FUNC_1(&VAR_0->dev_node);
 FUNC_1(&VAR_0->drv_node);
 FUNC_0(VAR_0);
}
