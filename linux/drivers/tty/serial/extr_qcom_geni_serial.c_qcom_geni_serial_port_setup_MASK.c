
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uart_port {int dev; scalar_t__ membase; } ;
struct qcom_geni_serial_port {int tx_bytes_pw; int rx_bytes_pw; int setup; int rx_fifo; scalar_t__ rx_fifo_depth; int se; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int,int ) ;
 int FUNC_2 (int *,int ,int,int,int,int) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct qcom_geni_serial_port*) ;
 int FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_port*) ;
 struct qcom_geni_serial_port* FUNC_9 (struct uart_port*,struct uart_port*) ;
 scalar_t__ FUNC_10 (struct uart_port*) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct uart_port *VAR_11)
{
 struct qcom_geni_serial_port *VAR_12 = FUNC_9(VAR_11, VAR_11);
 u32 VAR_13 = VAR_2 * VAR_9;
 u32 VAR_14;

 if (FUNC_10(VAR_11)) {
  VAR_12->tx_bytes_pw = 1;
  VAR_12->rx_bytes_pw = VAR_1;
 } else {
  VAR_12->tx_bytes_pw = 4;
  VAR_12->rx_bytes_pw = 4;
 }

 VAR_14 = FUNC_4(&VAR_12->se);
 if (VAR_14 != VAR_6) {
  FUNC_0(VAR_11->dev, "Invalid FW loaded, proto: %d\n", VAR_14);
  return -VAR_4;
 }

 FUNC_8(VAR_11);

 FUNC_6(VAR_12);

 FUNC_11(VAR_13, VAR_11->membase + VAR_8);




 if (FUNC_10(VAR_11))
  FUNC_7(VAR_11);
 FUNC_2(&VAR_12->se, VAR_0, VAR_12->tx_bytes_pw,
      0, 1, 0);
 FUNC_2(&VAR_12->se, VAR_0, VAR_12->rx_bytes_pw,
      0, 0, 1);
 FUNC_3(&VAR_12->se, VAR_10, VAR_12->rx_fifo_depth - 2);
 FUNC_5(&VAR_12->se, VAR_5);
 if (!FUNC_10(VAR_11)) {
  VAR_12->rx_fifo = FUNC_1(VAR_11->dev,
   VAR_12->rx_fifo_depth, sizeof(u32), VAR_7);
  if (!VAR_12->rx_fifo)
   return -VAR_3;
 }
 VAR_12->setup = 1;

 return 0;
}
