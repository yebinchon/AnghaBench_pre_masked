
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int out; int in; } ;
struct TYPE_6__ {scalar_t__ dir; int nbytes; TYPE_2__ buf; } ;
struct spi_mem_op {TYPE_3__ data; } ;
struct spi_mem {TYPE_1__* spi; } ;
struct atmel_qspi {int mem; int pending; scalar_t__ regs; int cmd_completion; } ;
struct TYPE_4__ {int master; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct atmel_qspi*,struct spi_mem_op const*,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 struct atmel_qspi* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct spi_mem *VAR_9, const struct spi_mem_op *VAR_10)
{
 struct atmel_qspi *VAR_11 = FUNC_6(VAR_9->spi->master);
 u32 VAR_12, VAR_13;
 int VAR_14;

 VAR_14 = FUNC_2(VAR_11, VAR_10, &VAR_13);
 if (VAR_14)
  return VAR_14;


 if (VAR_10->data.nbytes) {

  (void)FUNC_4(VAR_11->regs + VAR_5);


  if (VAR_10->data.dir == VAR_8)
   FUNC_0(VAR_10->data.buf.in, VAR_11->mem + VAR_13,
           VAR_10->data.nbytes);
  else
   FUNC_1(VAR_11->mem + VAR_13, VAR_10->data.buf.out,
         VAR_10->data.nbytes);


  FUNC_8(VAR_2, VAR_11->regs + VAR_1);
 }


 VAR_12 = FUNC_4(VAR_11->regs + VAR_6);
 if ((VAR_12 & VAR_7) == VAR_7)
  return VAR_14;


 FUNC_5(&VAR_11->cmd_completion);
 VAR_11->pending = VAR_12 & VAR_7;
 FUNC_8(VAR_7, VAR_11->regs + VAR_4);
 if (!FUNC_7(&VAR_11->cmd_completion,
      FUNC_3(1000)))
  VAR_14 = -VAR_0;
 FUNC_8(VAR_7, VAR_11->regs + VAR_3);

 return VAR_14;
}
