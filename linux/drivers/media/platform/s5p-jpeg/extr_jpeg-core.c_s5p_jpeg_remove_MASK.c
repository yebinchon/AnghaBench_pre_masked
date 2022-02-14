
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_jpeg {int * clocks; TYPE_1__* variant; int v4l2_dev; int m2m_dev; int vfd_encoder; int vfd_decoder; int dev; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int num_clocks; } ;


 int FUNC_0 (int ) ;
 struct s5p_jpeg* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct s5p_jpeg *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_2(VAR_1->dev);

 FUNC_7(VAR_1->vfd_decoder);
 FUNC_7(VAR_1->vfd_encoder);
 FUNC_6(&VAR_0->dev);
 FUNC_5(VAR_1->m2m_dev);
 FUNC_4(&VAR_1->v4l2_dev);

 if (!FUNC_3(&VAR_0->dev)) {
  for (VAR_2 = VAR_1->variant->num_clocks - 1; VAR_2 >= 0; VAR_2--)
   FUNC_0(VAR_1->clocks[VAR_2]);
 }

 return 0;
}
