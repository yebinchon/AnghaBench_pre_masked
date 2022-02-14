
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct zynq_qspi {int* txbuf; int* rxbuf; int tx_bytes; int rx_bytes; int data_completion; int dev; } ;
struct TYPE_11__ {scalar_t__ in; scalar_t__ out; } ;
struct TYPE_12__ {int nbytes; scalar_t__ dir; TYPE_4__ buf; int buswidth; } ;
struct TYPE_10__ {int nbytes; int buswidth; } ;
struct TYPE_9__ {int nbytes; int val; int buswidth; } ;
struct TYPE_8__ {int opcode; int buswidth; } ;
struct spi_mem_op {TYPE_5__ data; TYPE_3__ dummy; TYPE_2__ addr; TYPE_1__ cmd; } ;
struct spi_mem {TYPE_6__* spi; } ;
struct TYPE_13__ {int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 struct zynq_qspi* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_6__*,int) ;
 int FUNC_9 (struct zynq_qspi*,TYPE_6__*) ;
 int FUNC_10 (struct zynq_qspi*,int ,int ) ;
 int FUNC_11 (struct zynq_qspi*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct spi_mem *VAR_6,
     const struct spi_mem_op *VAR_7)
{
 struct zynq_qspi *VAR_8 = FUNC_6(VAR_6->spi->master);
 int VAR_9 = 0, VAR_10;
 u8 *VAR_11;

 FUNC_0(VAR_8->dev, "cmd:%#x mode:%d.%d.%d.%d\n",
  VAR_7->cmd.opcode, VAR_7->cmd.buswidth, VAR_7->addr.buswidth,
  VAR_7->dummy.buswidth, VAR_7->data.buswidth);

 FUNC_8(VAR_6->spi, 1);
 FUNC_9(VAR_8, VAR_6->spi);

 if (VAR_7->cmd.opcode) {
  FUNC_5(&VAR_8->data_completion);
  VAR_8->txbuf = (u8 *)&VAR_7->cmd.opcode;
  VAR_8->rxbuf = ((void*)0);
  VAR_8->tx_bytes = sizeof(VAR_7->cmd.opcode);
  VAR_8->rx_bytes = sizeof(VAR_7->cmd.opcode);
  FUNC_11(VAR_8, VAR_3, 1);
  FUNC_10(VAR_8, VAR_4,
    VAR_5);
  if (!FUNC_7(&VAR_8->data_completion,
              FUNC_4(1000)))
   VAR_9 = -VAR_0;
 }

 if (VAR_7->addr.nbytes) {
  for (VAR_10 = 0; VAR_10 < VAR_7->addr.nbytes; VAR_10++) {
   VAR_8->txbuf[VAR_10] = VAR_7->addr.val >>
     (8 * (VAR_7->addr.nbytes - VAR_10 - 1));
  }

  FUNC_5(&VAR_8->data_completion);
  VAR_8->rxbuf = ((void*)0);
  VAR_8->tx_bytes = VAR_7->addr.nbytes;
  VAR_8->rx_bytes = VAR_7->addr.nbytes;
  FUNC_11(VAR_8, VAR_3, 1);
  FUNC_10(VAR_8, VAR_4,
    VAR_5);
  if (!FUNC_7(&VAR_8->data_completion,
              FUNC_4(1000)))
   VAR_9 = -VAR_0;
 }

 if (VAR_7->dummy.nbytes) {
  VAR_11 = FUNC_2(VAR_7->dummy.nbytes, VAR_1);
  FUNC_3(VAR_11, 0xff, VAR_7->dummy.nbytes);
  FUNC_5(&VAR_8->data_completion);
  VAR_8->txbuf = VAR_11;
  VAR_8->rxbuf = ((void*)0);
  VAR_8->tx_bytes = VAR_7->dummy.nbytes;
  VAR_8->rx_bytes = VAR_7->dummy.nbytes;
  FUNC_11(VAR_8, VAR_3, 1);
  FUNC_10(VAR_8, VAR_4,
    VAR_5);
  if (!FUNC_7(&VAR_8->data_completion,
              FUNC_4(1000)))
   VAR_9 = -VAR_0;

  FUNC_1(VAR_11);
 }

 if (VAR_7->data.nbytes) {
  FUNC_5(&VAR_8->data_completion);
  if (VAR_7->data.dir == VAR_2) {
   VAR_8->txbuf = (u8 *)VAR_7->data.buf.out;
   VAR_8->tx_bytes = VAR_7->data.nbytes;
   VAR_8->rxbuf = ((void*)0);
   VAR_8->rx_bytes = VAR_7->data.nbytes;
  } else {
   VAR_8->txbuf = ((void*)0);
   VAR_8->rxbuf = (u8 *)VAR_7->data.buf.in;
   VAR_8->rx_bytes = VAR_7->data.nbytes;
   VAR_8->tx_bytes = VAR_7->data.nbytes;
  }

  FUNC_11(VAR_8, VAR_3, 1);
  FUNC_10(VAR_8, VAR_4,
    VAR_5);
  if (!FUNC_7(&VAR_8->data_completion,
              FUNC_4(1000)))
   VAR_9 = -VAR_0;
 }
 FUNC_8(VAR_6->spi, 0);

 return VAR_9;
}
