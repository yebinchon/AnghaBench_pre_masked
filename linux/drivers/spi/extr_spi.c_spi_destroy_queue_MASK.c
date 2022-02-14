
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int kworker_task; int kworker; int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_4(struct spi_controller *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0);







 if (VAR_1) {
  FUNC_0(&VAR_0->dev, "problem destroying queue\n");
  return VAR_1;
 }

 FUNC_1(&VAR_0->kworker);
 FUNC_2(VAR_0->kworker_task);

 return 0;
}
