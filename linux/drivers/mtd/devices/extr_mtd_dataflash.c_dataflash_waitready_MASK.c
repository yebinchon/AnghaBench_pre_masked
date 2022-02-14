
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;


 int FUNC_0 (struct spi_device*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 int VAR_1;

 for (;;) {
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 < 0) {
   FUNC_1(&VAR_0->dev, "status %d?\n", VAR_1);
   VAR_1 = 0;
  }

  if (VAR_1 & (1 << 7))
   return VAR_1;

  FUNC_2(3000, 4000);
 }
}
