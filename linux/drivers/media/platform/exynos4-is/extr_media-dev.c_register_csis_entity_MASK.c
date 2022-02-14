
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int grp_id; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
struct fimc_md {int v4l2_dev; TYPE_1__* csis; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,struct v4l2_subdev*) ;
 int FUNC_4 (int *,char*,int,int) ;

__attribute__((used)) static int FUNC_5(struct fimc_md *VAR_4,
    struct platform_device *VAR_5,
    struct v4l2_subdev *VAR_6)
{
 struct device_node *VAR_7 = VAR_5->dev.of_node;
 int VAR_8, VAR_9;

 VAR_8 = VAR_7 ? FUNC_1(VAR_7) : FUNC_2(0, VAR_5->id);

 if (FUNC_0(VAR_8 < 0 || VAR_8 >= VAR_0))
  return -VAR_2;

 if (FUNC_0(VAR_4->csis[VAR_8].sd))
  return -VAR_1;

 VAR_6->grp_id = VAR_3;
 VAR_9 = FUNC_3(&VAR_4->v4l2_dev, VAR_6);
 if (!VAR_9)
  VAR_4->csis[VAR_8].sd = VAR_6;
 else
  FUNC_4(&VAR_4->v4l2_dev,
    "Failed to register MIPI-CSIS.%d (%d)\n", VAR_8, VAR_9);
 return VAR_9;
}
