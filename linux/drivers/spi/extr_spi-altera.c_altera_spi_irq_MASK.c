
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct altera_spi {scalar_t__ count; scalar_t__ len; scalar_t__ base; int imr; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct altera_spi*) ;
 int FUNC_1 (struct altera_spi*) ;
 int FUNC_2 (struct spi_master*) ;
 struct altera_spi* FUNC_3 (struct spi_master*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct spi_master *VAR_5 = VAR_4;
 struct altera_spi *VAR_6 = FUNC_3(VAR_5);

 FUNC_0(VAR_6);

 if (VAR_6->count < VAR_6->len) {
  FUNC_1(VAR_6);
 } else {

  VAR_6->imr &= ~VAR_1;
  FUNC_4(VAR_6->imr, VAR_6->base + VAR_0);

  FUNC_2(VAR_5);
 }

 return VAR_2;
}
