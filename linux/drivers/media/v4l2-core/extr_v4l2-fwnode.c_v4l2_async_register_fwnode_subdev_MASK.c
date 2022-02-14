
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {struct v4l2_async_notifier* subdev_notifier; struct device* dev; } ;
struct v4l2_async_notifier {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;
typedef int parse_endpoint_func ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct fwnode_handle* FUNC_1 (struct device*) ;
 int FUNC_2 (struct fwnode_handle*) ;
 int FUNC_3 (struct v4l2_async_notifier*) ;
 struct v4l2_async_notifier* FUNC_4 (int,int ) ;
 int FUNC_5 (struct v4l2_async_notifier*) ;
 int FUNC_6 (struct v4l2_async_notifier*) ;
 int FUNC_7 (struct device*,struct v4l2_async_notifier*,size_t,int ) ;
 int FUNC_8 (struct device*,struct v4l2_async_notifier*,size_t,unsigned int,int ) ;
 int FUNC_9 (struct v4l2_async_notifier*) ;
 int FUNC_10 (struct v4l2_subdev*) ;
 int FUNC_11 (struct v4l2_subdev*,struct v4l2_async_notifier*) ;

int FUNC_12(struct v4l2_subdev *VAR_3,
          size_t VAR_4,
          unsigned int *VAR_5,
          unsigned int VAR_6,
          parse_endpoint_func VAR_7)
{
 struct v4l2_async_notifier *VAR_8;
 struct device *VAR_9 = VAR_3->dev;
 struct fwnode_handle *VAR_10;
 int VAR_11;

 if (FUNC_0(!VAR_9))
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_9);
 if (!FUNC_2(VAR_10))
  return -VAR_0;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_6(VAR_8);

 if (!VAR_5) {
  VAR_11 = FUNC_7(VAR_9, VAR_8,
         VAR_4,
         VAR_7);
  if (VAR_11 < 0)
   goto out_cleanup;
 } else {
  unsigned int VAR_12;

  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
   VAR_11 = FUNC_8(VAR_9, VAR_8, VAR_4, VAR_5[VAR_12], VAR_7);
   if (VAR_11 < 0)
    goto out_cleanup;
  }
 }

 VAR_11 = FUNC_11(VAR_3, VAR_8);
 if (VAR_11 < 0)
  goto out_cleanup;

 VAR_11 = FUNC_10(VAR_3);
 if (VAR_11 < 0)
  goto out_unregister;

 VAR_3->subdev_notifier = VAR_8;

 return 0;

out_unregister:
 FUNC_9(VAR_8);
out_cleanup:
 FUNC_5(VAR_8);
 FUNC_3(VAR_8);

 return VAR_11;
}
