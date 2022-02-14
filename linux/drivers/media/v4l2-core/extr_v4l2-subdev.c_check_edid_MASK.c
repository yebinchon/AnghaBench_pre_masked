
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_edid {int pad; int * edid; scalar_t__ blocks; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct v4l2_subdev *VAR_1,
        struct v4l2_subdev_edid *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 if (VAR_2->blocks && VAR_2->edid == ((void*)0))
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2->pad);
}
