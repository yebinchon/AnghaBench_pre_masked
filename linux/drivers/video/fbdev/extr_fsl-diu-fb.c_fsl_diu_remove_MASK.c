
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fsl_diu_data {int diu_reg; int * fsl_diu_info; int irq; } ;


 int VAR_0 ;
 struct fsl_diu_data* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct fsl_diu_data *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(&VAR_1->dev);
 FUNC_1(&VAR_2->fsl_diu_info[0]);

 FUNC_2(VAR_2->irq, VAR_2->diu_reg);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_4(&VAR_2->fsl_diu_info[VAR_3]);

 FUNC_3(VAR_2->diu_reg);

 return 0;
}
