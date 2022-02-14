
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct spi_device*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, &VAR_0);
 if (VAR_2 != 0) {
  FUNC_0(&VAR_1->dev, "failed to initialise ili9320\n");
  return VAR_2;
 }

 return 0;
}
