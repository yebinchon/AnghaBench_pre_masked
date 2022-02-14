
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nbytes; scalar_t__ dir; } ;
struct spi_mem_op {TYPE_2__ data; } ;
struct spi_mem {TYPE_3__* spi; } ;
struct nxp_fspi {int lock; TYPE_1__* devtype_data; scalar_t__ iobase; } ;
struct TYPE_6__ {int master; } ;
struct TYPE_4__ {int rxfifo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nxp_fspi*,scalar_t__,int ,int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nxp_fspi*,struct spi_mem_op const*) ;
 int FUNC_5 (struct nxp_fspi*,struct spi_mem_op const*) ;
 int FUNC_6 (struct nxp_fspi*) ;
 int FUNC_7 (struct nxp_fspi*,struct spi_mem_op const*) ;
 int FUNC_8 (struct nxp_fspi*,struct spi_mem_op const*) ;
 int FUNC_9 (struct nxp_fspi*,TYPE_3__*) ;
 struct nxp_fspi* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct spi_mem *VAR_5, const struct spi_mem_op *VAR_6)
{
 struct nxp_fspi *VAR_7 = FUNC_10(VAR_5->spi->master);
 int VAR_8 = 0;

 FUNC_2(&VAR_7->lock);


 VAR_8 = FUNC_1(VAR_7, VAR_7->iobase + VAR_0,
       VAR_1, 1, VAR_2, 1);
 FUNC_0(VAR_8);

 FUNC_9(VAR_7, VAR_5->spi);

 FUNC_7(VAR_7, VAR_6);





 if (VAR_6->data.nbytes > (VAR_7->devtype_data->rxfifo - 4) &&
     VAR_6->data.dir == VAR_3) {
  FUNC_8(VAR_7, VAR_6);
 } else {
  if (VAR_6->data.nbytes && VAR_6->data.dir == VAR_4)
   FUNC_5(VAR_7, VAR_6);

  VAR_8 = FUNC_4(VAR_7, VAR_6);
 }


 FUNC_6(VAR_7);

 FUNC_3(&VAR_7->lock);

 return VAR_8;
}
