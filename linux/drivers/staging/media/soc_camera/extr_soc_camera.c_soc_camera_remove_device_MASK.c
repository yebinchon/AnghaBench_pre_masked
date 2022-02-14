
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_host {struct soc_camera_device* icd; TYPE_1__* ops; } ;
struct soc_camera_device {int clk; int parent; } ;
struct TYPE_2__ {int (* remove ) (struct soc_camera_device*) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct soc_camera_host*) ;
 int FUNC_2 (struct soc_camera_device*) ;
 struct soc_camera_host* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct soc_camera_device *VAR_0)
{
 struct soc_camera_host *VAR_1 = FUNC_3(VAR_0->parent);

 if (FUNC_0(VAR_0 != VAR_1->icd))
  return;

 if (VAR_1->ops->remove)
  VAR_1->ops->remove(VAR_0);
 if (!VAR_0->clk)
  FUNC_1(VAR_1);
 VAR_1->icd = ((void*)0);
}
