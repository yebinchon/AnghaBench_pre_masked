
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct msi2500_dev {int v4l2_lock; int v4l2_subdev; scalar_t__ udev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct msi2500_dev*) ;
 int FUNC_2 (struct msi2500_dev*,int ,int) ;
 int FUNC_3 (struct msi2500_dev*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 struct msi2500_dev* FUNC_8 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_9(struct vb2_queue *VAR_4)
{
 struct msi2500_dev *VAR_5 = FUNC_8(VAR_4);

 FUNC_0(VAR_5->dev, "\n");

 FUNC_5(&VAR_5->v4l2_lock);

 if (VAR_5->udev)
  FUNC_3(VAR_5);

 FUNC_1(VAR_5);


 FUNC_4(20);
 if (!FUNC_2(VAR_5, VAR_0, 0)) {

  FUNC_2(VAR_5, VAR_1, 0x01000003);
 }


 FUNC_7(VAR_5->v4l2_subdev, VAR_2, VAR_3, 0);

 FUNC_6(&VAR_5->v4l2_lock);
}
