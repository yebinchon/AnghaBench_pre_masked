
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int fifosize; } ;
struct mxs_auart_port {int ms_irq_enabled; int mctrl_prev; int gpios; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct mxs_auart_port*) ;
 int FUNC_3 (struct mxs_auart_port*) ;
 int FUNC_4 (int ,struct mxs_auart_port*,int ) ;
 int FUNC_5 (int ,struct mxs_auart_port*,int ) ;
 int FUNC_6 (int,struct mxs_auart_port*,int ) ;
 struct mxs_auart_port* FUNC_7 (struct uart_port*) ;
 scalar_t__ FUNC_8 (struct uart_port*) ;

__attribute__((used)) static int FUNC_9(struct uart_port *VAR_11)
{
 int VAR_12;
 struct mxs_auart_port *VAR_13 = FUNC_7(VAR_11);

 VAR_12 = FUNC_0(VAR_13->clk);
 if (VAR_12)
  return VAR_12;

 if (FUNC_8(VAR_11)) {
  FUNC_4(VAR_0, VAR_13, VAR_7);
 } else {

  FUNC_2(VAR_13);
  FUNC_3(VAR_13);
 }

 FUNC_5(VAR_1, VAR_13, VAR_8);

 FUNC_6(VAR_4 | VAR_3 | VAR_2,
    VAR_13, VAR_9);


 VAR_11->fifosize = VAR_6;





 FUNC_5(VAR_5, VAR_13, VAR_10);


 FUNC_1(VAR_13->gpios, &VAR_13->mctrl_prev);

 VAR_13->ms_irq_enabled = 0;
 return 0;
}
