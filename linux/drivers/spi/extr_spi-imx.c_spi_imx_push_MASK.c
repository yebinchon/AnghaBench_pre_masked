
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_imx_data {unsigned int remainder; unsigned int count; scalar_t__ txfifo; TYPE_1__* devtype_data; int slave_mode; int (* tx ) (struct spi_imx_data*) ;scalar_t__ dynamic_burst; int bits_per_word; } ;
struct TYPE_2__ {scalar_t__ fifo_size; int (* trigger ) (struct spi_imx_data*) ;} ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct spi_imx_data*,unsigned int) ;
 int FUNC_3 (struct spi_imx_data*) ;
 int FUNC_4 (struct spi_imx_data*) ;

__attribute__((used)) static void FUNC_5(struct spi_imx_data *VAR_1)
{
 unsigned int VAR_2, VAR_3;

 if (VAR_1->dynamic_burst)
  VAR_3 = 4;
 else
  VAR_3 = FUNC_1(VAR_1->bits_per_word);





 if (!VAR_1->remainder) {
  if (VAR_1->dynamic_burst) {


   VAR_2 = VAR_1->count % VAR_0;

   if (!VAR_2)
    VAR_2 = VAR_0;

   FUNC_2(VAR_1, VAR_2 * 8);

   VAR_1->remainder = VAR_2;
  } else {
   VAR_1->remainder = VAR_3;
  }
 }

 while (VAR_1->txfifo < VAR_1->devtype_data->fifo_size) {
  if (!VAR_1->count)
   break;
  if (VAR_1->dynamic_burst &&
      VAR_1->txfifo >= FUNC_0(VAR_1->remainder,
           VAR_3))
   break;
  VAR_1->tx(VAR_1);
  VAR_1->txfifo++;
 }

 if (!VAR_1->slave_mode)
  VAR_1->devtype_data->trigger(VAR_1);
}
