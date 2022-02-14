
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct allegro_dev {int v4l2_dev; scalar_t__ m2m_dev; int video_dev; } ;


 int FUNC_0 (struct allegro_dev*) ;
 int FUNC_1 (struct allegro_dev*) ;
 struct allegro_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct allegro_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_5(&VAR_1->video_dev);
 if (VAR_1->m2m_dev)
  FUNC_4(VAR_1->m2m_dev);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);

 FUNC_3(&VAR_1->v4l2_dev);

 return 0;
}
