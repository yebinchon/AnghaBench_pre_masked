
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;
struct qcom_geni_serial_port {int se; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uart_port*,int ,int,int) ;
 int FUNC_3 (scalar_t__) ;
 struct qcom_geni_serial_port* FUNC_4 (struct uart_port*,struct uart_port*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 struct qcom_geni_serial_port *VAR_13 = FUNC_4(VAR_10, VAR_10);

 VAR_11 = FUNC_3(VAR_10->membase + VAR_6);
 VAR_11 &= ~(VAR_2 | VAR_4);
 FUNC_5(0, VAR_10->membase + VAR_9);
 FUNC_5(VAR_11, VAR_10->membase + VAR_6);
 VAR_12 = FUNC_3(VAR_10->membase + VAR_8);

 if (!(VAR_12 & VAR_3))
  return;

 FUNC_1(&VAR_13->se);
 if (!FUNC_2(VAR_10, VAR_7,
      VAR_1, 1)) {
  FUNC_0(&VAR_13->se);
  FUNC_2(VAR_10, VAR_7,
      VAR_0, 1);
  FUNC_5(VAR_0, VAR_10->membase + VAR_5);
 }
 FUNC_5(VAR_1, VAR_10->membase + VAR_5);
}
