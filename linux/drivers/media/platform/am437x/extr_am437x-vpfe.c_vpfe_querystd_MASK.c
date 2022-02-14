
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpfe_subdev_info {int grp_id; TYPE_1__* inputs; } ;
struct vpfe_device {int v4l2_dev; struct vpfe_subdev_info* current_subdev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,int *) ;
 int VAR_3 ;
 struct vpfe_device* FUNC_1 (struct file*) ;
 int FUNC_2 (int,struct vpfe_device*,char*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5, v4l2_std_id *VAR_6)
{
 struct vpfe_device *VAR_7 = FUNC_1(VAR_4);
 struct vpfe_subdev_info *VAR_8;

 FUNC_2(2, VAR_7, "vpfe_querystd\n");

 VAR_8 = VAR_7->current_subdev;
 if (!(VAR_8->inputs[0].capabilities & VAR_1))
  return -VAR_0;


 return FUNC_0(&VAR_7->v4l2_dev, VAR_8->grp_id,
      VAR_3, VAR_2, VAR_6);
}
