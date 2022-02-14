
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_fh {int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_mbus_framefmt*,int *,int ) ;
 int * VAR_4 ;
 int * VAR_5 ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_6, struct v4l2_subdev_fh *VAR_7)
{
 struct v4l2_mbus_framefmt *VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_7->pad, VAR_1);
 FUNC_0(VAR_8, &VAR_4[1],
      VAR_0);

 VAR_8 = FUNC_1(VAR_6, VAR_7->pad, VAR_3);
 FUNC_0(VAR_8, &VAR_5[1],
     VAR_2);

 return 0;
}
