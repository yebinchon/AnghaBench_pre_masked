
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct imx_port {TYPE_1__ port; scalar_t__ dte_mode; scalar_t__ have_rtscts; int dma_is_enabled; int clk_per; int clk_ipg; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct imx_port*) ;
 int FUNC_3 (struct imx_port*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct imx_port*) ;
 int FUNC_6 (struct imx_port*,int ) ;
 int FUNC_7 (struct imx_port*,int ,int ) ;
 int FUNC_8 (struct imx_port*) ;
 int FUNC_9 (struct imx_port*,int,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct uart_port*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct uart_port *VAR_28)
{
 struct imx_port *VAR_29 = (struct imx_port *)VAR_28;
 int VAR_30, VAR_31;
 unsigned long VAR_32;
 int VAR_33 = 0;
 u32 VAR_34, VAR_35, VAR_36;

 VAR_30 = FUNC_1(VAR_29->clk_per);
 if (VAR_30)
  return VAR_30;
 VAR_30 = FUNC_1(VAR_29->clk_ipg);
 if (VAR_30) {
  FUNC_0(VAR_29->clk_per);
  return VAR_30;
 }

 FUNC_7(VAR_29, VAR_2, VAR_1);




 VAR_36 = FUNC_6(VAR_29, VAR_18);


 VAR_36 &= ~(VAR_19 << VAR_20);
 VAR_36 |= VAR_0 << VAR_20;

 FUNC_9(VAR_29, VAR_36 & ~VAR_21, VAR_18);


 if (!FUNC_12(VAR_28) && FUNC_2(VAR_29) == 0)
  VAR_33 = 1;

 FUNC_10(&VAR_29->port.lock, VAR_32);

 VAR_31 = 100;

 VAR_35 = FUNC_6(VAR_29, VAR_7);
 VAR_35 &= ~VAR_12;
 FUNC_9(VAR_29, VAR_35, VAR_7);

 while (!(FUNC_6(VAR_29, VAR_7) & VAR_12) && (--VAR_31 > 0))
  FUNC_13(1);




 FUNC_9(VAR_29, VAR_25 | VAR_24, VAR_23);
 FUNC_9(VAR_29, VAR_27, VAR_26);

 VAR_34 = FUNC_6(VAR_29, VAR_3) & ~VAR_4;
 VAR_34 |= VAR_6;
 if (VAR_29->have_rtscts)
  VAR_34 |= VAR_5;

 FUNC_9(VAR_29, VAR_34, VAR_3);

 VAR_36 = FUNC_6(VAR_29, VAR_18) & ~VAR_22;
 if (!VAR_29->dma_is_enabled)
  VAR_36 |= VAR_22;
 FUNC_9(VAR_29, VAR_36, VAR_18);

 VAR_35 = FUNC_6(VAR_29, VAR_7) & ~VAR_8;
 VAR_35 |= (VAR_11 | VAR_13);
 if (!VAR_29->have_rtscts)
  VAR_35 |= VAR_9;




 if (!FUNC_5(VAR_29))
  VAR_35 &= ~VAR_10;
 FUNC_9(VAR_29, VAR_35, VAR_7);

 if (!FUNC_5(VAR_29)) {
  u32 VAR_37;

  VAR_37 = FUNC_6(VAR_29, VAR_14);

  VAR_37 |= VAR_16 | VAR_17 | VAR_15;

  if (VAR_29->dte_mode)

   VAR_37 &= ~(VAR_17 | VAR_15);

  FUNC_9(VAR_29, VAR_37, VAR_14);
 }




 FUNC_4(&VAR_29->port);

 if (VAR_33) {
  FUNC_3(VAR_29);
  FUNC_8(VAR_29);
 } else {
  VAR_34 = FUNC_6(VAR_29, VAR_3);
  VAR_34 |= VAR_4;
  FUNC_9(VAR_29, VAR_34, VAR_3);

  VAR_35 = FUNC_6(VAR_29, VAR_7);
  VAR_35 |= VAR_8;
  FUNC_9(VAR_29, VAR_35, VAR_7);
 }

 FUNC_11(&VAR_29->port.lock, VAR_32);

 return 0;
}
