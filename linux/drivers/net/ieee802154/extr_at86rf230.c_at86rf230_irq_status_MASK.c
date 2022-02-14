
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct at86rf230_state_change {int* buf; struct at86rf230_local* lp; } ;
struct at86rf230_local {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct at86rf230_state_change*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct at86rf230_state_change*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct at86rf230_state_change *VAR_2 = VAR_1;
 struct at86rf230_local *VAR_3 = VAR_2->lp;
 const u8 *VAR_4 = VAR_2->buf;
 u8 VAR_5 = VAR_4[1];

 FUNC_2(VAR_3->spi->irq);

 if (VAR_5 & VAR_0) {
  FUNC_0(VAR_2);
 } else {
  FUNC_1(&VAR_3->spi->dev, "not supported irq %02x received\n",
   VAR_5);
  FUNC_3(VAR_2);
 }
}
