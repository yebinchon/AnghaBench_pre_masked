
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int device_caps; int num; int name; int * v4l2_dev; int * lock; } ;
struct vicodec_dev_instance {int m2m_dev; int mutex; struct video_device vfd; int lock; } ;
struct vicodec_dev {int v4l2_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (struct video_device*,int ) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,char*,char const*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 struct video_device VAR_10 ;
 int FUNC_10 (struct video_device*,int ,int ) ;
 int FUNC_11 (struct video_device*,struct vicodec_dev*) ;

__attribute__((used)) static int FUNC_12(struct vicodec_dev *VAR_11,
        struct vicodec_dev_instance *VAR_12,
        const char *VAR_13, bool VAR_14)
{
 struct video_device *VAR_15;
 int VAR_16;

 FUNC_3(&VAR_12->lock);
 FUNC_2(&VAR_12->mutex);
 VAR_12->m2m_dev = FUNC_8(&VAR_8);
 if (FUNC_0(VAR_12->m2m_dev)) {
  FUNC_6(&VAR_11->v4l2_dev, "Failed to init vicodec enc device\n");
  return FUNC_1(VAR_12->m2m_dev);
 }

 VAR_12->vfd = VAR_10;
 VAR_15 = &VAR_12->vfd;
 VAR_15->lock = &VAR_12->mutex;
 VAR_15->v4l2_dev = &VAR_11->v4l2_dev;
 FUNC_4(VAR_15->name, VAR_13, sizeof(VAR_15->name));
 VAR_15->device_caps = VAR_0 |
  (VAR_9 ? VAR_2 : VAR_1);
 if (VAR_14) {
  FUNC_5(VAR_15, VAR_4);
  FUNC_5(VAR_15, VAR_6);
 } else {
  FUNC_5(VAR_15, VAR_5);
  FUNC_5(VAR_15, VAR_7);
 }
 FUNC_11(VAR_15, VAR_11);

 VAR_16 = FUNC_10(VAR_15, VAR_3, 0);
 if (VAR_16) {
  FUNC_6(&VAR_11->v4l2_dev, "Failed to register video device '%s'\n", VAR_13);
  FUNC_9(VAR_12->m2m_dev);
  return VAR_16;
 }
 FUNC_7(&VAR_11->v4l2_dev, "Device '%s' registered as /dev/video%d\n",
    VAR_13, VAR_15->num);
 return 0;
}
