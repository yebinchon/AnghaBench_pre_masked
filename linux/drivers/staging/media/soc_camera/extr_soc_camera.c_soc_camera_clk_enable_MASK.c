
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_clk {struct soc_camera_device* priv; } ;
struct soc_camera_host {TYPE_1__* ops; } ;
struct soc_camera_device {int parent; } ;
struct TYPE_2__ {int owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct soc_camera_host*) ;
 struct soc_camera_host* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_clk *VAR_1)
{
 struct soc_camera_device *VAR_2 = VAR_1->priv;
 struct soc_camera_host *VAR_3;

 if (!VAR_2 || !VAR_2->parent)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_2->parent);

 if (!FUNC_2(VAR_3->ops->owner))
  return -VAR_0;





 return FUNC_0(VAR_3);
}
