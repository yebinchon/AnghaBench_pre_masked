
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct uart_port {TYPE_1__ rs485; } ;
struct imx_port {int gpios; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct imx_port*,int ) ;
 int FUNC_1 (struct imx_port*) ;
 int FUNC_2 (struct imx_port*,int,int ) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_11, unsigned int VAR_12)
{
 struct imx_port *VAR_13 = (struct imx_port *)VAR_11;
 u32 VAR_14, VAR_15;

 if (!(VAR_11->rs485.flags & VAR_0)) {
  u32 VAR_16;





  VAR_16 = FUNC_0(VAR_13, VAR_4);
  VAR_16 &= ~(VAR_5 | VAR_6);
  if (VAR_12 & VAR_3) {
   VAR_16 |= VAR_5;





   if (!(VAR_16 & VAR_7))
    VAR_16 |= VAR_6;
  }
  FUNC_2(VAR_13, VAR_16, VAR_4);
 }

 VAR_14 = FUNC_0(VAR_13, VAR_8) & ~VAR_9;
 if (!(VAR_12 & VAR_1))
  VAR_14 |= VAR_9;
 FUNC_2(VAR_13, VAR_14, VAR_8);

 VAR_15 = FUNC_0(VAR_13, FUNC_1(VAR_13)) & ~VAR_10;
 if (VAR_12 & VAR_2)
  VAR_15 |= VAR_10;
 FUNC_2(VAR_13, VAR_15, FUNC_1(VAR_13));

 FUNC_3(VAR_13->gpios, VAR_12);
}
