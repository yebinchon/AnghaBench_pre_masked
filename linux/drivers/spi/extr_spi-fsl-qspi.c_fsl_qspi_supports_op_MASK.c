
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ nbytes; int buswidth; scalar_t__ dir; } ;
struct TYPE_10__ {int nbytes; int buswidth; } ;
struct TYPE_9__ {int nbytes; int buswidth; } ;
struct TYPE_8__ {int buswidth; } ;
struct spi_mem_op {TYPE_5__ data; TYPE_4__ dummy; TYPE_3__ addr; TYPE_2__ cmd; } ;
struct spi_mem {TYPE_1__* spi; } ;
struct fsl_qspi {TYPE_6__* devtype_data; } ;
struct TYPE_12__ {scalar_t__ ahb_buf_size; int rxfifo; scalar_t__ txfifo; } ;
struct TYPE_7__ {int master; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct fsl_qspi*,int) ;
 struct fsl_qspi* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct spi_mem *VAR_2,
     const struct spi_mem_op *VAR_3)
{
 struct fsl_qspi *VAR_4 = FUNC_2(VAR_2->spi->master);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_3->cmd.buswidth);

 if (VAR_3->addr.nbytes)
  VAR_5 |= FUNC_1(VAR_4, VAR_3->addr.buswidth);

 if (VAR_3->dummy.nbytes)
  VAR_5 |= FUNC_1(VAR_4, VAR_3->dummy.buswidth);

 if (VAR_3->data.nbytes)
  VAR_5 |= FUNC_1(VAR_4, VAR_3->data.buswidth);

 if (VAR_5)
  return 0;





 if (VAR_3->addr.nbytes +
    (VAR_3->dummy.nbytes ? 1:0) +
    (VAR_3->data.nbytes ? 1:0) > 6)
  return 0;


 if (VAR_3->dummy.nbytes &&
     (VAR_3->dummy.nbytes * 8 / VAR_3->dummy.buswidth > 64))
  return 0;


 if (VAR_3->data.dir == VAR_0 &&
     (VAR_3->data.nbytes > VAR_4->devtype_data->ahb_buf_size ||
      (VAR_3->data.nbytes > VAR_4->devtype_data->rxfifo - 4 &&
       !FUNC_0(VAR_3->data.nbytes, 8))))
  return 0;

 if (VAR_3->data.dir == VAR_1 &&
     VAR_3->data.nbytes > VAR_4->devtype_data->txfifo)
  return 0;

 return 1;
}
