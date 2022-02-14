
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct b43_wldev {int dummy; } ;
struct b43_sdio {int (* irq_handler ) (struct b43_wldev*) ;struct b43_wldev* irq_handler_opaque; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct sdio_func*) ;
 struct b43_sdio* FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct b43_wldev*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct sdio_func *VAR_1)
{
 struct b43_sdio *VAR_2 = FUNC_2(VAR_1);
 struct b43_wldev *VAR_3 = VAR_2->irq_handler_opaque;

 if (FUNC_5(FUNC_0(VAR_3) < VAR_0))
  return;

 FUNC_3(VAR_1);
 VAR_2->irq_handler(VAR_3);
 FUNC_1(VAR_1);
}
