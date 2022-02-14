
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct hwbus_priv {int * core; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hwbus_priv*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct hwbus_priv* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct hwbus_priv *VAR_1 = FUNC_4(VAR_0);

 if (VAR_1) {
  FUNC_1(VAR_1);
  if (VAR_1->core) {
   FUNC_0(VAR_1->core);
   VAR_1->core = ((void*)0);
  }
 }
 FUNC_2(FUNC_3(&VAR_0->dev));

 return 0;
}
