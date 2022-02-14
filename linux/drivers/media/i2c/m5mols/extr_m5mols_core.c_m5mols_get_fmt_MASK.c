
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct m5mols_info {int lock; int res_type; } ;


 int VAR_0 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct m5mols_info*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct m5mols_info* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1, struct v4l2_subdev_pad_config *VAR_2,
     struct v4l2_subdev_format *VAR_3)
{
 struct m5mols_info *VAR_4 = FUNC_3(VAR_1);
 struct v4l2_mbus_framefmt *VAR_5;
 int VAR_6 = 0;

 FUNC_1(&VAR_4->lock);

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3->which, VAR_4->res_type);
 if (VAR_5)
  VAR_3->format = *VAR_5;
 else
  VAR_6 = -VAR_0;

 FUNC_2(&VAR_4->lock);
 return VAR_6;
}
