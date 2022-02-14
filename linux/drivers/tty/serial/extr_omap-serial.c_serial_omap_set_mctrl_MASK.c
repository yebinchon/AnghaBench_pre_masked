
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int status; } ;
struct TYPE_2__ {int line; int dev; } ;
struct uart_omap_port {unsigned char mcr; unsigned char efr; int dev; TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned char FUNC_4 (struct uart_omap_port*,int ) ;
 int FUNC_5 (struct uart_omap_port*,int ,unsigned char) ;
 struct uart_omap_port* FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_16, unsigned int VAR_17)
{
 struct uart_omap_port *VAR_18 = FUNC_6(VAR_16);
 unsigned char VAR_19 = 0, VAR_20, VAR_21;

 FUNC_0(VAR_18->port.dev, "serial_omap_set_mctrl+%d\n", VAR_18->port.line);
 if (VAR_17 & VAR_4)
  VAR_19 |= VAR_14;
 if (VAR_17 & VAR_0)
  VAR_19 |= VAR_10;
 if (VAR_17 & VAR_2)
  VAR_19 |= VAR_12;
 if (VAR_17 & VAR_3)
  VAR_19 |= VAR_13;
 if (VAR_17 & VAR_1)
  VAR_19 |= VAR_11;

 FUNC_1(VAR_18->dev);
 VAR_20 = FUNC_4(VAR_18, VAR_9);
 VAR_20 &= ~(VAR_11 | VAR_13 | VAR_12 |
       VAR_10 | VAR_14);
 VAR_18->mcr = VAR_20 | VAR_19;
 FUNC_5(VAR_18, VAR_9, VAR_18->mcr);


 VAR_21 = FUNC_4(VAR_18, VAR_7);
 FUNC_5(VAR_18, VAR_7, VAR_8);
 if ((VAR_17 & VAR_4) && (VAR_16->status & VAR_15))
  VAR_18->efr |= VAR_6;
 else
  VAR_18->efr &= ~VAR_6;
 FUNC_5(VAR_18, VAR_5, VAR_18->efr);
 FUNC_5(VAR_18, VAR_7, VAR_21);

 FUNC_2(VAR_18->dev);
 FUNC_3(VAR_18->dev);
}
