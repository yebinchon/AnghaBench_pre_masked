
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dir; scalar_t__ nbytes; } ;
struct spi_mem_op {TYPE_3__ data; } ;
struct spi_mem {TYPE_1__* spi; } ;
struct fsl_qspi {TYPE_2__* devtype_data; } ;
struct TYPE_5__ {scalar_t__ txfifo; scalar_t__ ahb_buf_size; int rxfifo; } ;
struct TYPE_4__ {int master; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 struct fsl_qspi* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct spi_mem *VAR_1, struct spi_mem_op *VAR_2)
{
 struct fsl_qspi *VAR_3 = FUNC_1(VAR_1->spi->master);

 if (VAR_2->data.dir == VAR_0) {
  if (VAR_2->data.nbytes > VAR_3->devtype_data->txfifo)
   VAR_2->data.nbytes = VAR_3->devtype_data->txfifo;
 } else {
  if (VAR_2->data.nbytes > VAR_3->devtype_data->ahb_buf_size)
   VAR_2->data.nbytes = VAR_3->devtype_data->ahb_buf_size;
  else if (VAR_2->data.nbytes > (VAR_3->devtype_data->rxfifo - 4))
   VAR_2->data.nbytes = FUNC_0(VAR_2->data.nbytes, 8);
 }

 return 0;
}
