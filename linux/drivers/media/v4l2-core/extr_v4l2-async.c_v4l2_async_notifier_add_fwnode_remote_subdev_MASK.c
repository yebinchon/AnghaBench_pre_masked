
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct fwnode_handle* fwnode; } ;
struct v4l2_async_subdev {TYPE_1__ match; int match_type; } ;
struct v4l2_async_notifier {int dummy; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fwnode_handle* FUNC_0 (struct fwnode_handle*) ;
 int FUNC_1 (struct fwnode_handle*) ;
 int FUNC_2 (struct v4l2_async_notifier*,struct v4l2_async_subdev*) ;

int
FUNC_3(struct v4l2_async_notifier *VAR_2,
          struct fwnode_handle *VAR_3,
          struct v4l2_async_subdev *VAR_4)
{
 struct fwnode_handle *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->match_type = VAR_1;
 VAR_4->match.fwnode = VAR_5;

 VAR_6 = FUNC_2(VAR_2, VAR_4);
 if (VAR_6)
  FUNC_1(VAR_5);

 return VAR_6;
}
