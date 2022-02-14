
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_adi {int restart_handler; } ;
struct spi_controller {int dummy; } ;
struct platform_device {int dev; } ;


 struct spi_controller* FUNC_0 (int *) ;
 struct sprd_adi* FUNC_1 (struct spi_controller*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct spi_controller *VAR_1 = FUNC_0(&VAR_0->dev);
 struct sprd_adi *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(&VAR_2->restart_handler);
 return 0;
}
