
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int * lock; int * v4l2_dev; } ;
struct sh_veu_dev {int is_2h; int v4l2_dev; int m2m_dev; int vfmt_in; int vfmt_out; int * dev; int fop_lock; int lock; struct video_device vdev; int base; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct resource*) ;
 struct sh_veu_dev* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int,int ,int ,int ,char*,struct sh_veu_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct resource*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct video_device VAR_10 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,char*,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct video_device*,int ,int) ;
 int FUNC_21 (struct video_device*,struct sh_veu_dev*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_11)
{
 struct sh_veu_dev *VAR_12;
 struct resource *VAR_13;
 struct video_device *VAR_14;
 int VAR_15, VAR_16;

 VAR_13 = FUNC_8(VAR_11, VAR_5, 0);
 VAR_15 = FUNC_7(VAR_11, 0);

 if (!VAR_13 || VAR_15 <= 0) {
  FUNC_2(&VAR_11->dev, "Insufficient VEU platform information.\n");
  return -VAR_2;
 }

 VAR_12 = FUNC_4(&VAR_11->dev, sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_3;

 VAR_12->is_2h = FUNC_13(VAR_13) == 0x22c;

 VAR_12->base = FUNC_3(&VAR_11->dev, VAR_13);
 if (FUNC_0(VAR_12->base))
  return FUNC_1(VAR_12->base);

 VAR_16 = FUNC_5(&VAR_11->dev, VAR_15, VAR_8, VAR_7,
     0, "veu", VAR_12);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_15(&VAR_11->dev, &VAR_12->v4l2_dev);
 if (VAR_16 < 0) {
  FUNC_2(&VAR_11->dev, "Error registering v4l2 device\n");
  return VAR_16;
 }

 VAR_14 = &VAR_12->vdev;

 *VAR_14 = VAR_10;
 VAR_14->v4l2_dev = &VAR_12->v4l2_dev;
 FUNC_14(&VAR_12->lock);
 FUNC_6(&VAR_12->fop_lock);
 VAR_14->lock = &VAR_12->fop_lock;

 FUNC_21(VAR_14, VAR_12);

 VAR_12->dev = &VAR_11->dev;
 VAR_12->vfmt_out = VAR_1;
 VAR_12->vfmt_in = VAR_0;

 VAR_12->m2m_dev = FUNC_18(&VAR_9);
 if (FUNC_0(VAR_12->m2m_dev)) {
  VAR_16 = FUNC_1(VAR_12->m2m_dev);
  FUNC_17(&VAR_12->v4l2_dev, "Failed to init mem2mem device: %d\n", VAR_16);
  goto em2minit;
 }

 FUNC_10(&VAR_11->dev);
 FUNC_11(&VAR_11->dev);

 VAR_16 = FUNC_20(VAR_14, VAR_6, -1);
 FUNC_12(&VAR_11->dev);
 if (VAR_16 < 0)
  goto evidreg;

 return VAR_16;

evidreg:
 FUNC_9(&VAR_11->dev);
 FUNC_19(VAR_12->m2m_dev);
em2minit:
 FUNC_16(&VAR_12->v4l2_dev);
 return VAR_16;
}
