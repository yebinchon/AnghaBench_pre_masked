
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_4__ {struct v4l2_async_notifier* subdev_notifier; } ;
struct csi_priv {TYPE_1__ sd; TYPE_3__* dev; } ;
struct TYPE_5__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fwnode_handle* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct fwnode_handle*,char*,unsigned int*) ;
 int VAR_2 ;
 int FUNC_2 (struct v4l2_async_notifier*) ;
 struct v4l2_async_notifier* FUNC_3 (int,int ) ;
 int FUNC_4 (struct v4l2_async_notifier*) ;
 int FUNC_5 (struct v4l2_async_notifier*) ;
 int FUNC_6 (int ,struct v4l2_async_notifier*,int,unsigned int,int ) ;
 int FUNC_7 (struct v4l2_async_notifier*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,struct v4l2_async_notifier*) ;

__attribute__((used)) static int FUNC_10(struct csi_priv *VAR_3)
{
 struct v4l2_async_notifier *VAR_4;
 struct fwnode_handle *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_5(VAR_4);

 VAR_5 = FUNC_0(VAR_3->dev);


 VAR_7 = FUNC_1(VAR_5, "reg", &VAR_6);
 if (VAR_7 < 0)
  goto out_free;

 VAR_7 = FUNC_6(
  VAR_3->dev->parent, VAR_4, sizeof(struct v4l2_async_subdev),
  VAR_6, VAR_2);
 if (VAR_7 < 0)
  goto out_cleanup;

 VAR_7 = FUNC_9(&VAR_3->sd, VAR_4);
 if (VAR_7 < 0)
  goto out_cleanup;

 VAR_7 = FUNC_8(&VAR_3->sd);
 if (VAR_7 < 0)
  goto out_unregister;

 VAR_3->sd.subdev_notifier = VAR_4;

 return 0;

out_unregister:
 FUNC_7(VAR_4);
out_cleanup:
 FUNC_4(VAR_4);
out_free:
 FUNC_2(VAR_4);

 return VAR_7;
}
