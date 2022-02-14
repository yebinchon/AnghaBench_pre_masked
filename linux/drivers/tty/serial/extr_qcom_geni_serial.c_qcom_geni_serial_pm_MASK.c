
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct qcom_geni_serial_port {int se; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct qcom_geni_serial_port* FUNC_2 (struct uart_port*,struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_3,
  unsigned int VAR_4, unsigned int VAR_5)
{
 struct qcom_geni_serial_port *VAR_6 = FUNC_2(VAR_3, VAR_3);


 if (VAR_5 == VAR_2)
  VAR_5 = VAR_0;

 if (VAR_4 == VAR_1 && VAR_5 == VAR_0)
  FUNC_1(&VAR_6->se);
 else if (VAR_4 == VAR_0 &&
   VAR_5 == VAR_1)
  FUNC_0(&VAR_6->se);
}
