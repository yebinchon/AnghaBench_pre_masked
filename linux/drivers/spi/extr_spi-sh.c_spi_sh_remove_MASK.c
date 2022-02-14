
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_sh_data {int irq; int ws; int master; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct spi_sh_data*) ;
 struct spi_sh_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct spi_sh_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1->master);
 FUNC_0(&VAR_1->ws);
 FUNC_1(VAR_1->irq, VAR_1);

 return 0;
}
