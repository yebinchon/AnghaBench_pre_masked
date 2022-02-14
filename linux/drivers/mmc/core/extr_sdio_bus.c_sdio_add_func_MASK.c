
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dev; int num; int card; } ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*) ;

int FUNC_7(struct sdio_func *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->dev, "%s:%d", FUNC_3(VAR_0->card), VAR_0->num);

 FUNC_6(VAR_0);
 FUNC_4(VAR_0);
 FUNC_2(&VAR_0->dev);
 VAR_1 = FUNC_1(&VAR_0->dev);
 if (VAR_1 == 0)
  FUNC_5(VAR_0);

 return VAR_1;
}
