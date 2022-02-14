
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int name; int dev; } ;
struct mtk_mdp_dev {int * comp; int job_wq; int v4l2_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct mtk_mdp_dev*) ;
 struct mtk_mdp_dev* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct mtk_mdp_dev *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;

 FUNC_7(&VAR_0->dev);
 FUNC_9(&VAR_0->dev);
 FUNC_5(VAR_1);
 FUNC_8(&VAR_1->v4l2_dev);

 FUNC_3(VAR_1->job_wq);
 FUNC_1(VAR_1->job_wq);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->comp); VAR_2++)
  FUNC_4(&VAR_0->dev, VAR_1->comp[VAR_2]);

 FUNC_2(&VAR_0->dev, "%s driver unloaded\n", VAR_0->name);
 return 0;
}
