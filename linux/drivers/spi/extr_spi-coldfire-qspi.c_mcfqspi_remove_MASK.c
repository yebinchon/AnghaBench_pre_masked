
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct platform_device {int dev; } ;
struct mcfqspi {int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mcfqspi*) ;
 int FUNC_2 (struct mcfqspi*,int ) ;
 struct spi_master* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 struct mcfqspi* FUNC_5 (struct spi_master*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct spi_master *VAR_2 = FUNC_3(VAR_1);
 struct mcfqspi *VAR_3 = FUNC_5(VAR_2);

 FUNC_4(&VAR_1->dev);

 FUNC_2(VAR_3, VAR_0);

 FUNC_1(VAR_3);
 FUNC_0(VAR_3->clk);

 return 0;
}
