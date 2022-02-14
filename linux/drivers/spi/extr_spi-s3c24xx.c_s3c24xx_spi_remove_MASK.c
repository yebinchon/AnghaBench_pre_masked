
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_spi {int master; int clk; int bitbang; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct s3c24xx_spi* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct s3c24xx_spi *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->bitbang);
 FUNC_0(VAR_1->clk);
 FUNC_3(VAR_1->master);
 return 0;
}
