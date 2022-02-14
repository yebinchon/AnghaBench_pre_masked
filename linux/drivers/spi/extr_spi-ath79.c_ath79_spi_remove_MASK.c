
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int master; } ;
struct ath79_spi {TYPE_1__ bitbang; int clk; } ;


 int FUNC_0 (struct ath79_spi*) ;
 int FUNC_1 (int ) ;
 struct ath79_spi* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct ath79_spi *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(&VAR_1->bitbang);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1->clk);
 FUNC_4(VAR_1->bitbang.master);

 return 0;
}
