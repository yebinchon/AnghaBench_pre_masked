
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int name; } ;
struct hantro_dev {int dev; int clocks; TYPE_1__* variant; int v4l2_dev; int m2m_dev; int mdev; } ;
struct TYPE_2__ {int num_clocks; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hantro_dev*) ;
 int FUNC_2 (struct hantro_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct hantro_dev* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_0)
{
 struct hantro_dev *VAR_1 = FUNC_5(VAR_0);

 FUNC_9(&VAR_1->v4l2_dev, "Removing %s\n", VAR_0->name);

 FUNC_4(&VAR_1->mdev);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_3(&VAR_1->mdev);
 FUNC_10(VAR_1->m2m_dev);
 FUNC_8(&VAR_1->v4l2_dev);
 FUNC_0(VAR_1->variant->num_clocks, VAR_1->clocks);
 FUNC_7(VAR_1->dev);
 FUNC_6(VAR_1->dev);
 return 0;
}
