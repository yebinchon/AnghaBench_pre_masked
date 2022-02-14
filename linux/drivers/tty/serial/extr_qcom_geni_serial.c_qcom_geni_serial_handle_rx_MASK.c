
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;
struct qcom_geni_serial_port {int rx_bytes_pw; int (* handle_rx ) (struct uart_port*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct uart_port*,int,int) ;
 struct qcom_geni_serial_port* FUNC_2 (struct uart_port*,struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_5, bool VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 struct qcom_geni_serial_port *VAR_12 = FUNC_2(VAR_5, VAR_5);

 VAR_7 = FUNC_0(VAR_5->membase + VAR_4);
 VAR_8 = VAR_7 & VAR_0;
 VAR_10 = VAR_7 & VAR_1;
 VAR_9 = (VAR_7 & VAR_2) >>
      VAR_3;

 if (!VAR_8)
  return;
 VAR_11 = VAR_12->rx_bytes_pw * (VAR_8 - 1);
 if (VAR_10 && VAR_9)
  VAR_11 += VAR_9;
 else
  VAR_11 += VAR_12->rx_bytes_pw;
 VAR_12->handle_rx(VAR_5, VAR_11, VAR_6);
}
