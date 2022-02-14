
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
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,int ,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 struct qcom_geni_serial_port* FUNC_4 (struct uart_port*,struct uart_port*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_12)
{
 u32 VAR_13;
 u32 VAR_14;
 struct qcom_geni_serial_port *VAR_15 = FUNC_4(VAR_12, VAR_12);
 u32 VAR_16 = VAR_7;

 VAR_13 = FUNC_3(VAR_12->membase + VAR_6);
 VAR_13 &= ~(VAR_11 | VAR_10);
 FUNC_5(VAR_13, VAR_12->membase + VAR_6);

 VAR_13 = FUNC_3(VAR_12->membase + VAR_2);
 VAR_13 &= ~(VAR_1 | VAR_0);
 FUNC_5(VAR_13, VAR_12->membase + VAR_2);

 VAR_14 = FUNC_3(VAR_12->membase + VAR_3);

 if (!(VAR_14 & VAR_8))
  return;

 FUNC_0(&VAR_15->se);
 FUNC_2(VAR_12, VAR_4,
     VAR_9, 0);
 VAR_14 = FUNC_3(VAR_12->membase + VAR_3);
 FUNC_5(VAR_16, VAR_12->membase + VAR_5);
 if (VAR_14 & VAR_8)
  FUNC_1(VAR_12);
}
