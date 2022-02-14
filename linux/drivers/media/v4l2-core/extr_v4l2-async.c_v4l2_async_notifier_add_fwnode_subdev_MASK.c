
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fwnode; } ;
struct v4l2_async_subdev {TYPE_1__ match; int match_type; } ;
struct v4l2_async_notifier {int dummy; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 struct v4l2_async_subdev* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fwnode_handle*) ;
 int FUNC_2 (struct fwnode_handle*) ;
 int FUNC_3 (struct v4l2_async_subdev*) ;
 struct v4l2_async_subdev* FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct v4l2_async_notifier*,struct v4l2_async_subdev*) ;

struct v4l2_async_subdev *
FUNC_6(struct v4l2_async_notifier *VAR_3,
          struct fwnode_handle *VAR_4,
          unsigned int VAR_5)
{
 struct v4l2_async_subdev *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_5, VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->match_type = VAR_2;
 VAR_6->match.fwnode = FUNC_1(VAR_4);

 VAR_7 = FUNC_5(VAR_3, VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_4);
  FUNC_3(VAR_6);
  return FUNC_0(VAR_7);
 }

 return VAR_6;
}
