
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long timeout; } ;
struct pdc_wdt_dev {scalar_t__ base; TYPE_1__ wdt_dev; int wdt_clk; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct pdc_wdt_dev *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_2->wdt_clk);
 unsigned int VAR_4;

 VAR_4 = FUNC_2(VAR_2->base + VAR_0) & ~VAR_1;
 VAR_4 |= FUNC_1(VAR_2->wdt_dev.timeout * VAR_3) - 1;
 FUNC_3(VAR_4, VAR_2->base + VAR_0);
}
