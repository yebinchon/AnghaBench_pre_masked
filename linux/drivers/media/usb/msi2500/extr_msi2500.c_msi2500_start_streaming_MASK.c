
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct msi2500_dev {int v4l2_lock; int v4l2_subdev; int udev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct msi2500_dev*) ;
 int FUNC_2 (struct msi2500_dev*,int ,int ) ;
 int FUNC_3 (struct msi2500_dev*) ;
 int FUNC_4 (struct msi2500_dev*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,int ,int) ;
 struct msi2500_dev* FUNC_8 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_9(struct vb2_queue *VAR_5, unsigned int VAR_6)
{
 struct msi2500_dev *VAR_7 = FUNC_8(VAR_5);
 int VAR_8;

 FUNC_0(VAR_7->dev, "\n");

 if (!VAR_7->udev)
  return -VAR_1;

 if (FUNC_5(&VAR_7->v4l2_lock))
  return -VAR_2;


 FUNC_7(VAR_7->v4l2_subdev, VAR_3, VAR_4, 1);

 VAR_8 = FUNC_4(VAR_7);

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8)
  FUNC_1(VAR_7);

 VAR_8 = FUNC_2(VAR_7, VAR_0, 0);

 FUNC_6(&VAR_7->v4l2_lock);

 return VAR_8;
}
