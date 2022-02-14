
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct jpu {int v4l2_dev; int m2m_dev; int vfd_encoder; int vfd_decoder; } ;


 struct jpu* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct jpu *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(&VAR_1->vfd_decoder);
 FUNC_3(&VAR_1->vfd_encoder);
 FUNC_2(VAR_1->m2m_dev);
 FUNC_1(&VAR_1->v4l2_dev);

 return 0;
}
