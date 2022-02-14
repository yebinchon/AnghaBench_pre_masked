
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mtk_vcodec_dev {int v4l2_dev; scalar_t__ vfd_enc; scalar_t__ m2m_dev_enc; int encode_workqueue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct mtk_vcodec_dev*) ;
 struct mtk_vcodec_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct mtk_vcodec_dev *VAR_1 = FUNC_4(VAR_0);

 FUNC_2();
 FUNC_1(VAR_1->encode_workqueue);
 FUNC_0(VAR_1->encode_workqueue);
 if (VAR_1->m2m_dev_enc)
  FUNC_6(VAR_1->m2m_dev_enc);

 if (VAR_1->vfd_enc)
  FUNC_7(VAR_1->vfd_enc);

 FUNC_5(&VAR_1->v4l2_dev);
 FUNC_3(VAR_1);
 return 0;
}
