
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct at86rf230_local {int hw; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct at86rf230_local*,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct at86rf230_local* FUNC_5 (struct spi_device*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_1)
{
 struct at86rf230_local *VAR_2 = FUNC_5(VAR_1);


 FUNC_1(VAR_2, VAR_0, 0);
 FUNC_4(VAR_2->hw);
 FUNC_3(VAR_2->hw);
 FUNC_0();
 FUNC_2(&VAR_1->dev, "unregistered at86rf230\n");

 return 0;
}
