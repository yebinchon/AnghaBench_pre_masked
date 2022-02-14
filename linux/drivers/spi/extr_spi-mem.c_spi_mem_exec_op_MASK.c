
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct spi_transfer {int* tx_buf; int len; int tx_nbits; int rx_nbits; int rx_buf; } ;
struct spi_message {unsigned int actual_length; } ;
struct TYPE_12__ {int* out; int in; } ;
struct TYPE_13__ {int nbytes; scalar_t__ dir; int buswidth; TYPE_5__ buf; } ;
struct TYPE_11__ {int nbytes; int buswidth; } ;
struct TYPE_10__ {int nbytes; int val; int buswidth; } ;
struct TYPE_9__ {int opcode; int buswidth; } ;
struct spi_mem_op {TYPE_6__ data; TYPE_4__ dummy; TYPE_3__ addr; TYPE_2__ cmd; } ;
struct spi_mem {TYPE_7__* spi; } ;
struct spi_controller {TYPE_1__* mem_ops; } ;
struct TYPE_14__ {struct spi_controller* controller; } ;
struct TYPE_8__ {int (* exec_op ) (struct spi_mem*,struct spi_mem_op const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (struct spi_mem*) ;
 int FUNC_4 (struct spi_mem*) ;
 int FUNC_5 (struct spi_mem_op const*) ;
 int FUNC_6 (struct spi_mem*,struct spi_mem_op const*) ;
 int FUNC_7 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_8 (struct spi_message*) ;
 int FUNC_9 (TYPE_7__*,struct spi_message*) ;
 int FUNC_10 (struct spi_mem*,struct spi_mem_op const*) ;

int FUNC_11(struct spi_mem *VAR_6, const struct spi_mem_op *VAR_7)
{
 unsigned int VAR_8, VAR_9 = 0, VAR_10 = 0;
 struct spi_controller *VAR_11 = VAR_6->spi->controller;
 struct spi_transfer VAR_12[4] = { };
 struct spi_message VAR_13;
 u8 *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_5(VAR_7);
 if (VAR_15)
  return VAR_15;

 if (!FUNC_6(VAR_6, VAR_7))
  return -VAR_2;

 if (VAR_11->mem_ops) {
  VAR_15 = FUNC_4(VAR_6);
  if (VAR_15)
   return VAR_15;

  VAR_15 = VAR_11->mem_ops->exec_op(VAR_6, VAR_7);

  FUNC_3(VAR_6);






  if (!VAR_15 || VAR_15 != -VAR_2)
   return VAR_15;
 }

 VAR_8 = sizeof(VAR_7->cmd.opcode) + VAR_7->addr.nbytes +
       VAR_7->dummy.nbytes;






 VAR_14 = FUNC_1(VAR_8, VAR_4 | VAR_3);
 if (!VAR_14)
  return -VAR_1;

 FUNC_8(&VAR_13);

 VAR_14[0] = VAR_7->cmd.opcode;
 VAR_12[VAR_9].tx_buf = VAR_14;
 VAR_12[VAR_9].len = sizeof(VAR_7->cmd.opcode);
 VAR_12[VAR_9].tx_nbits = VAR_7->cmd.buswidth;
 FUNC_7(&VAR_12[VAR_9], &VAR_13);
 VAR_9++;
 VAR_10++;

 if (VAR_7->addr.nbytes) {
  int VAR_16;

  for (VAR_16 = 0; VAR_16 < VAR_7->addr.nbytes; VAR_16++)
   VAR_14[VAR_16 + 1] = VAR_7->addr.val >>
     (8 * (VAR_7->addr.nbytes - VAR_16 - 1));

  VAR_12[VAR_9].tx_buf = VAR_14 + 1;
  VAR_12[VAR_9].len = VAR_7->addr.nbytes;
  VAR_12[VAR_9].tx_nbits = VAR_7->addr.buswidth;
  FUNC_7(&VAR_12[VAR_9], &VAR_13);
  VAR_9++;
  VAR_10 += VAR_7->addr.nbytes;
 }

 if (VAR_7->dummy.nbytes) {
  FUNC_2(VAR_14 + VAR_7->addr.nbytes + 1, 0xff, VAR_7->dummy.nbytes);
  VAR_12[VAR_9].tx_buf = VAR_14 + VAR_7->addr.nbytes + 1;
  VAR_12[VAR_9].len = VAR_7->dummy.nbytes;
  VAR_12[VAR_9].tx_nbits = VAR_7->dummy.buswidth;
  FUNC_7(&VAR_12[VAR_9], &VAR_13);
  VAR_9++;
  VAR_10 += VAR_7->dummy.nbytes;
 }

 if (VAR_7->data.nbytes) {
  if (VAR_7->data.dir == VAR_5) {
   VAR_12[VAR_9].rx_buf = VAR_7->data.buf.in;
   VAR_12[VAR_9].rx_nbits = VAR_7->data.buswidth;
  } else {
   VAR_12[VAR_9].tx_buf = VAR_7->data.buf.out;
   VAR_12[VAR_9].tx_nbits = VAR_7->data.buswidth;
  }

  VAR_12[VAR_9].len = VAR_7->data.nbytes;
  FUNC_7(&VAR_12[VAR_9], &VAR_13);
  VAR_9++;
  VAR_10 += VAR_7->data.nbytes;
 }

 VAR_15 = FUNC_9(VAR_6->spi, &VAR_13);

 FUNC_0(VAR_14);

 if (VAR_15)
  return VAR_15;

 if (VAR_13.actual_length != VAR_10)
  return -VAR_0;

 return 0;
}
