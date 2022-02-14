
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int dev; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct omap8250_priv {int habit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct uart_8250_port*,int ) ;

__attribute__((used)) static void FUNC_3(struct uart_8250_port *VAR_10,
           struct omap8250_priv *VAR_11)
{
 u32 VAR_12, VAR_13;
 u16 VAR_14, VAR_15, VAR_16;

 VAR_12 = FUNC_2(VAR_10, VAR_9);


 VAR_13 = VAR_12 >> VAR_6;

 switch (VAR_13) {
 case 0:

  VAR_15 = (VAR_12 & VAR_0) >>
   VAR_1;
  VAR_16 = (VAR_12 & VAR_2);
  break;
 case 1:


  VAR_15 = (VAR_12 & VAR_3) >>
   VAR_4;
  VAR_16 = (VAR_12 & VAR_5);
  break;
 default:
  FUNC_1(VAR_10->port.dev,
    "Unknown revision, defaulting to highest\n");

  VAR_15 = 0xff;
  VAR_16 = 0xff;
 }

 VAR_14 = FUNC_0(VAR_15, VAR_16);

 switch (VAR_14) {
 case 130:
  VAR_11->habit |= VAR_8;
  break;
 case 129:
  VAR_11->habit |= VAR_8 |
    VAR_7;
  break;
 case 128:
  VAR_11->habit |= VAR_8 |
   VAR_7;
  break;
 default:
  break;
 }
}
