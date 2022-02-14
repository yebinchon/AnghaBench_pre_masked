
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_clk {struct soc_camera_device* priv; } ;
struct soc_camera_host {TYPE_1__* ops; } ;
struct soc_camera_device {int parent; } ;
struct TYPE_2__ {int owner; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct soc_camera_host*) ;
 struct soc_camera_host* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct v4l2_clk *VAR_0)
{
 struct soc_camera_device *VAR_1 = VAR_0->priv;
 struct soc_camera_host *VAR_2;

 if (!VAR_1 || !VAR_1->parent)
  return;

 VAR_2 = FUNC_2(VAR_1->parent);

 FUNC_1(VAR_2);

 FUNC_0(VAR_2->ops->owner);
}
