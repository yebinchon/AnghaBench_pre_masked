
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_spi {unsigned int count; unsigned int len; int done; scalar_t__ regs; void** rx; scalar_t__ fiq_inuse; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct s3c24xx_spi*,unsigned int) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct s3c24xx_spi*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct s3c24xx_spi *VAR_8 = VAR_7;
 unsigned int VAR_9 = FUNC_3(VAR_8->regs + VAR_2);
 unsigned int VAR_10 = VAR_8->count;

 if (VAR_9 & VAR_3) {
  FUNC_1(VAR_8->dev, "data-collision\n");
  FUNC_0(&VAR_8->done);
  goto irq_done;
 }

 if (!(VAR_9 & VAR_4)) {
  FUNC_1(VAR_8->dev, "spi not ready for tx?\n");
  FUNC_0(&VAR_8->done);
  goto irq_done;
 }

 if (!FUNC_4(VAR_8)) {
  VAR_8->count++;

  if (VAR_8->rx)
   VAR_8->rx[VAR_10] = FUNC_3(VAR_8->regs + VAR_1);

  VAR_10++;

  if (VAR_10 < VAR_8->len)
   FUNC_5(FUNC_2(VAR_8, VAR_10), VAR_8->regs + VAR_5);
  else
   FUNC_0(&VAR_8->done);
 } else {
  VAR_8->count = VAR_8->len;
  VAR_8->fiq_inuse = 0;

  if (VAR_8->rx)
   VAR_8->rx[VAR_8->len-1] = FUNC_3(VAR_8->regs + VAR_1);

  FUNC_0(&VAR_8->done);
 }

 irq_done:
 return VAR_0;
}
