
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct msm_port {scalar_t__ is_uartdm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct msm_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_8)
{
 struct msm_port *VAR_9 = FUNC_0(VAR_8);


 FUNC_1(VAR_8, VAR_5, VAR_1);
 FUNC_1(VAR_8, VAR_6, VAR_1);
 FUNC_1(VAR_8, VAR_4, VAR_1);
 FUNC_1(VAR_8, VAR_2, VAR_1);
 FUNC_1(VAR_8, VAR_3, VAR_1);
 FUNC_1(VAR_8, VAR_7, VAR_1);


 if (VAR_9->is_uartdm)
  FUNC_1(VAR_8, 0, VAR_0);
}
