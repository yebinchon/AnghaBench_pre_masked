
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int dev; } ;
struct uart_8250_port {int fcr; TYPE_1__ port; } ;
struct omap8250_priv {scalar_t__ mdr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct uart_8250_port*,int ) ;
 int FUNC_2 (struct uart_8250_port*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct uart_8250_port *VAR_7,
         struct omap8250_priv *VAR_8)
{
 u8 VAR_9 = 255;
 u8 VAR_10;

 VAR_10 = FUNC_1(VAR_7, VAR_6);
 if (VAR_10 == VAR_8->mdr1)
  return;

 FUNC_2(VAR_7, VAR_6, VAR_8->mdr1);
 FUNC_3(2);
 FUNC_2(VAR_7, VAR_0, VAR_7->fcr | VAR_2 |
   VAR_1);




 while (VAR_5 != (FUNC_1(VAR_7, VAR_3) &
    (VAR_5 | VAR_4))) {
  VAR_9--;
  if (!VAR_9) {

   FUNC_0(VAR_7->port.dev, "Errata i202: timedout %x\n",
     FUNC_1(VAR_7, VAR_3));
   break;
  }
  FUNC_3(1);
 }
}
