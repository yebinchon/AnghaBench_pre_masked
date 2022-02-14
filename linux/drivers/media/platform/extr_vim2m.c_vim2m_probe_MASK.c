
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_5__* mdev; } ;
struct video_device {int num; TYPE_1__* v4l2_dev; int * lock; } ;
struct TYPE_8__ {int * ops; int bus_info; int model; int * dev; } ;
struct vim2m_dev {TYPE_1__ v4l2_dev; struct video_device vfd; int m2m_dev; TYPE_5__ mdev; int dev_mutex; int num_inst; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct vim2m_dev*) ;
 struct vim2m_dev* FUNC_4 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct platform_device*,struct vim2m_dev*) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,char*) ;
 int FUNC_13 (TYPE_1__*,char*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,struct video_device*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct video_device*,int ,int ) ;
 int FUNC_18 (struct video_device*,struct vim2m_dev*) ;
 int FUNC_19 (struct video_device*) ;
 struct video_device VAR_6 ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_7)
{
 struct vim2m_dev *VAR_8;
 struct video_device *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_10(&VAR_7->dev, &VAR_8->v4l2_dev);
 if (VAR_10)
  goto error_free;

 FUNC_2(&VAR_8->num_inst, 0);
 FUNC_7(&VAR_8->dev_mutex);

 VAR_8->vfd = VAR_6;
 VAR_9 = &VAR_8->vfd;
 VAR_9->lock = &VAR_8->dev_mutex;
 VAR_9->v4l2_dev = &VAR_8->v4l2_dev;

 VAR_10 = FUNC_17(VAR_9, VAR_3, 0);
 if (VAR_10) {
  FUNC_12(&VAR_8->v4l2_dev, "Failed to register video device\n");
  goto error_v4l2;
 }

 FUNC_18(VAR_9, VAR_8);
 FUNC_13(&VAR_8->v4l2_dev,
    "Device registered as /dev/video%d\n", VAR_9->num);

 FUNC_8(VAR_7, VAR_8);

 VAR_8->m2m_dev = FUNC_14(&VAR_5);
 if (FUNC_0(VAR_8->m2m_dev)) {
  FUNC_12(&VAR_8->v4l2_dev, "Failed to init mem2mem device\n");
  VAR_10 = FUNC_1(VAR_8->m2m_dev);
  goto error_dev;
 }
 return 0;





error_dev:
 FUNC_19(&VAR_8->vfd);

 return VAR_10;
error_v4l2:
 FUNC_11(&VAR_8->v4l2_dev);
error_free:
 FUNC_3(VAR_8);

 return VAR_10;
}
