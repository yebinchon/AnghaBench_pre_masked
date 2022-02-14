
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct vpfe_subdev_info {int grp_id; } ;
struct vpfe_device {int lock; int v4l2_dev; struct vpfe_subdev_info* current_subdev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int,int ,int *,char*) ;
 int FUNC_3 (int *,int ,int ,int ,int *) ;
 int VAR_2 ;
 struct vpfe_device* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4, v4l2_std_id *VAR_5)
{
 struct vpfe_device *VAR_6 = FUNC_4(VAR_3);
 struct vpfe_subdev_info *VAR_7;
 int VAR_8;

 FUNC_2(1, VAR_0, &VAR_6->v4l2_dev, "vpfe_querystd\n");

 VAR_8 = FUNC_0(&VAR_6->lock);
 VAR_7 = VAR_6->current_subdev;
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_3(&VAR_6->v4l2_dev, VAR_7->grp_id,
      VAR_2, VAR_1, VAR_5);
 FUNC_1(&VAR_6->lock);
 return VAR_8;
}
