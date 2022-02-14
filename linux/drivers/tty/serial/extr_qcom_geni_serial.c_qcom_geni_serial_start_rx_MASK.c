
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;
struct qcom_geni_serial_port {int se; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (scalar_t__) ;
 struct qcom_geni_serial_port* FUNC_3 (struct uart_port*,struct uart_port*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;
 struct qcom_geni_serial_port *VAR_12 = FUNC_3(VAR_9, VAR_9);

 VAR_11 = FUNC_2(VAR_9->membase + VAR_3);
 if (VAR_11 & VAR_5)
  FUNC_1(VAR_9);

 FUNC_0(&VAR_12->se, VAR_8, 0);

 VAR_10 = FUNC_2(VAR_9->membase + VAR_4);
 VAR_10 |= VAR_7 | VAR_6;
 FUNC_4(VAR_10, VAR_9->membase + VAR_4);

 VAR_10 = FUNC_2(VAR_9->membase + VAR_2);
 VAR_10 |= VAR_1 | VAR_0;
 FUNC_4(VAR_10, VAR_9->membase + VAR_2);
}
