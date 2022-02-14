
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_3__ {int devnode; } ;
struct cedrus_dev {int v4l2_dev; int vfd; int m2m_dev; TYPE_1__ mdev; } ;


 int FUNC_0 (struct cedrus_dev*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct cedrus_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct cedrus_dev *VAR_1 = FUNC_4(VAR_0);

 if (FUNC_3(VAR_1->mdev.devnode)) {
  FUNC_2(&VAR_1->mdev);
  FUNC_7(VAR_1->m2m_dev);
  FUNC_1(&VAR_1->mdev);
 }

 FUNC_6(VAR_1->m2m_dev);
 FUNC_8(&VAR_1->vfd);
 FUNC_5(&VAR_1->v4l2_dev);

 FUNC_0(VAR_1);

 return 0;
}
