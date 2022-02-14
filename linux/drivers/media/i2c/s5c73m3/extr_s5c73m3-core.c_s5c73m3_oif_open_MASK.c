
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
 int VAR_4 ;
 int FUNC_0 (struct v4l2_mbus_framefmt*,int *,int ) ;
 int * VAR_5 ;
 int * VAR_6 ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_7, struct v4l2_subdev_fh *VAR_8)
{
 struct v4l2_mbus_framefmt *VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_8->pad, VAR_0);
 FUNC_0(VAR_9, &VAR_5[1],
      VAR_3);

 VAR_9 = FUNC_1(VAR_7, VAR_8->pad, VAR_1);
 FUNC_0(VAR_9, &VAR_6[1],
     VAR_4);

 VAR_9 = FUNC_1(VAR_7, VAR_8->pad, VAR_2);
 FUNC_0(VAR_9, &VAR_5[1],
      VAR_3);
 return 0;
}
