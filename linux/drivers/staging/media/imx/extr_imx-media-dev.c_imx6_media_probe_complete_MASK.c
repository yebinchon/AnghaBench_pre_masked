
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_async_notifier {int dummy; } ;
struct imx_media_dev {int mutex; int m2m_vdev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct imx_media_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct v4l2_async_notifier*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct imx_media_dev* FUNC_7 (struct v4l2_async_notifier*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_async_notifier *VAR_0)
{
 struct imx_media_dev *VAR_1 = FUNC_7(VAR_0);
 int VAR_2;


 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_5(&VAR_1->mutex);

 VAR_1->m2m_vdev = FUNC_2(VAR_1);
 if (FUNC_0(VAR_1->m2m_vdev)) {
  VAR_2 = FUNC_1(VAR_1->m2m_vdev);
  goto unlock;
 }

 VAR_2 = FUNC_3(VAR_1->m2m_vdev);
unlock:
 FUNC_6(&VAR_1->mutex);
 return VAR_2;
}
