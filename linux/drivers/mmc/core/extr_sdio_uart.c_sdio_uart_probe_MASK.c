
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ops; } ;
struct sdio_uart_port {int regs_offset; int uartclk; int index; TYPE_1__ port; struct sdio_func* func; } ;
struct sdio_func_tuple {int code; int size; int* data; struct sdio_func_tuple* next; } ;
struct sdio_func {scalar_t__ class; int dev; struct sdio_func_tuple* tuples; } ;
struct sdio_device_id {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct sdio_uart_port*) ;
 struct sdio_uart_port* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,int,...) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*,struct sdio_uart_port*) ;
 int FUNC_8 (struct sdio_uart_port*) ;
 int VAR_6 ;
 int FUNC_9 (struct sdio_uart_port*) ;
 int VAR_7 ;
 int FUNC_10 (TYPE_1__*) ;
 struct device* FUNC_11 (TYPE_1__*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_12(struct sdio_func *VAR_8,
      const struct sdio_device_id *VAR_9)
{
 struct sdio_uart_port *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(sizeof(struct sdio_uart_port), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 if (VAR_8->class == VAR_5) {
  FUNC_5("%s: need info on UART class basic setup\n",
   FUNC_6(VAR_8));
  FUNC_2(VAR_10);
  return -VAR_2;
 } else if (VAR_8->class == VAR_4) {




  struct sdio_func_tuple *VAR_12;
  for (VAR_12 = VAR_8->tuples; VAR_12; VAR_12 = VAR_12->next) {
   if (VAR_12->code != 0x91)
    continue;
   if (VAR_12->size < 10)
    continue;
   if (VAR_12->data[1] == 0)
    break;
  }
  if (!VAR_12) {
   FUNC_5("%s: can't find tuple 0x91 subtuple 0 (SUBTPL_SIOREG) for GPS class\n",
    FUNC_6(VAR_8));
   FUNC_2(VAR_10);
   return -VAR_0;
  }
  FUNC_4("%s: Register ID = 0x%02x, Exp ID = 0x%02x\n",
         FUNC_6(VAR_8), VAR_12->data[2], VAR_12->data[3]);
  VAR_10->regs_offset = (VAR_12->data[4] << 0) |
        (VAR_12->data[5] << 8) |
        (VAR_12->data[6] << 16);
  FUNC_4("%s: regs offset = 0x%x\n",
         FUNC_6(VAR_8), VAR_10->regs_offset);
  VAR_10->uartclk = VAR_12->data[7] * 115200;
  if (VAR_10->uartclk == 0)
   VAR_10->uartclk = 115200;
  FUNC_4("%s: clk %d baudcode %u 4800-div %u\n",
         FUNC_6(VAR_8), VAR_10->uartclk,
         VAR_12->data[7], VAR_12->data[8] | (VAR_12->data[9] << 8));
 } else {
  FUNC_2(VAR_10);
  return -VAR_0;
 }

 VAR_10->func = VAR_8;
 FUNC_7(VAR_8, VAR_10);
 FUNC_10(&VAR_10->port);
 VAR_10->port.ops = &VAR_6;

 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11) {
  FUNC_2(VAR_10);
 } else {
  struct device *VAR_13;
  VAR_13 = FUNC_11(&VAR_10->port,
    VAR_7, VAR_10->index, &VAR_8->dev);
  if (FUNC_0(VAR_13)) {
   FUNC_9(VAR_10);
   VAR_11 = FUNC_1(VAR_13);
  }
 }

 return VAR_11;
}
