
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int colorspace; int code; } ;
struct v4l2_subdev_format {int which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct m5mols_info {int res_type; int lock; int resolution; } ;
typedef enum m5mols_restype { ____Placeholder_m5mols_restype } m5mols_restype ;
struct TYPE_2__ {int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct m5mols_info*,struct v4l2_subdev_pad_config*,int ,int) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_mbus_framefmt*,int*,int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct m5mols_info* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_4, struct v4l2_subdev_pad_config *VAR_5,
     struct v4l2_subdev_format *VAR_6)
{
 struct m5mols_info *VAR_7 = FUNC_4(VAR_4);
 struct v4l2_mbus_framefmt *VAR_8 = &VAR_6->format;
 struct v4l2_mbus_framefmt *VAR_9;
 enum m5mols_restype VAR_10;
 u32 VAR_11 = 0;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_4, VAR_8, &VAR_10, &VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_9 = FUNC_0(VAR_7, VAR_5, VAR_6->which, VAR_10);
 if (!VAR_9)
  return 0;

 FUNC_2(&VAR_7->lock);

 VAR_8->code = VAR_3[VAR_10].code;
 VAR_8->colorspace = VAR_0;
 VAR_8->field = VAR_1;

 if (VAR_6->which == VAR_2) {
  *VAR_9 = *VAR_8;
  VAR_7->resolution = VAR_11;
  VAR_7->res_type = VAR_10;
 }

 FUNC_3(&VAR_7->lock);
 return VAR_12;
}
