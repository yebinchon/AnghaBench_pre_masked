
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cc2520_private {TYPE_1__* spi; int lock; int tx_complete; scalar_t__ is_tx; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct cc2520_private *VAR_3 = VAR_2;
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);
 if (VAR_3->is_tx) {
  VAR_3->is_tx = 0;
  FUNC_3(&VAR_3->lock, VAR_4);
  FUNC_1(&VAR_3->spi->dev, "SFD for TX\n");
  FUNC_0(&VAR_3->tx_complete);
 } else {
  FUNC_3(&VAR_3->lock, VAR_4);
  FUNC_1(&VAR_3->spi->dev, "SFD for RX\n");
 }

 return VAR_0;
}
