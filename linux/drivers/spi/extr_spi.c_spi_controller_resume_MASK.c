
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int dev; int queued; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct spi_controller*) ;

int FUNC_2(struct spi_controller *VAR_0)
{
 int VAR_1;

 if (!VAR_0->queued)
  return 0;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(&VAR_0->dev, "queue restart failed\n");

 return VAR_1;
}
