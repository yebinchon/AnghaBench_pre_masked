
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ca8210_priv {TYPE_1__* spi; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct ca8210_priv *VAR_4 = VAR_3;
 int VAR_5;

 FUNC_1(&VAR_4->spi->dev, "irq: Interrupt occurred\n");
 do {
  VAR_5 = FUNC_0(VAR_4->spi, ((void*)0), 0);
  if (VAR_5 && (VAR_5 != -VAR_0)) {
   FUNC_2(
    &VAR_4->spi->dev,
    "spi read failed, returned %d\n",
    VAR_5
   );
  }
 } while (VAR_5 == -VAR_0);
 return VAR_1;
}
