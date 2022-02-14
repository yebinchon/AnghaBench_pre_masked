
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeout; } ;
struct lpc18xx_wdt_dev {int clk_rate; scalar_t__ base; TYPE_1__ wdt_dev; } ;


 unsigned int FUNC_0 (int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct lpc18xx_wdt_dev *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_2->wdt_dev.timeout * VAR_2->clk_rate,
      VAR_0);
 FUNC_1(VAR_3, VAR_2->base + VAR_1);
}
