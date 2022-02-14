
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mtk_jpeg_dev {int v4l2_dev; int m2m_dev; int dec_vdev; } ;


 struct mtk_jpeg_dev* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct mtk_jpeg_dev *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_0->dev);
 FUNC_5(VAR_1->dec_vdev);
 FUNC_4(VAR_1->dec_vdev);
 FUNC_3(VAR_1->m2m_dev);
 FUNC_2(&VAR_1->v4l2_dev);

 return 0;
}
