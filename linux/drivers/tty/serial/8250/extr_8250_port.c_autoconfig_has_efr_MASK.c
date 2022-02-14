
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct uart_8250_port {int capabilities; TYPE_1__ port; int bugs; scalar_t__ acr; } ;


 int FUNC_0 (char*,unsigned int,...) ;
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
 unsigned int FUNC_1 (struct uart_8250_port*) ;
 unsigned int FUNC_2 (struct uart_8250_port*,int ) ;
 int FUNC_3 (struct uart_8250_port*,int ,int) ;
 int FUNC_4 (struct uart_8250_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_8250_port *VAR_15)
{
 unsigned int VAR_16, VAR_17, VAR_18, VAR_19;




 VAR_15->capabilities |= VAR_5 | VAR_6;
 VAR_15->acr = 0;
 FUNC_3(VAR_15, VAR_12, VAR_13);
 FUNC_3(VAR_15, VAR_7, VAR_8);
 FUNC_3(VAR_15, VAR_12, 0x00);
 VAR_16 = FUNC_2(VAR_15, VAR_9);
 VAR_17 = FUNC_2(VAR_15, VAR_10);
 VAR_18 = FUNC_2(VAR_15, VAR_11);
 VAR_19 = FUNC_2(VAR_15, VAR_14);

 FUNC_0("950id=%02x:%02x:%02x:%02x ", VAR_16, VAR_17, VAR_18, VAR_19);

 if (VAR_16 == 0x16 && VAR_17 == 0xC9 &&
     (VAR_18 == 0x50 || VAR_18 == 0x52 || VAR_18 == 0x54)) {
  VAR_15->port.type = VAR_3;






  if (VAR_18 == 0x52 && VAR_19 == 0x01)
   VAR_15->bugs |= VAR_4;
  return;
 }
 VAR_16 = FUNC_1(VAR_15);
 FUNC_0("850id=%04x ", VAR_16);

 VAR_17 = VAR_16 >> 8;
 if (VAR_17 == 0x10 || VAR_17 == 0x12 || VAR_17 == 0x14) {
  VAR_15->port.type = VAR_2;
  return;
 }
 if (FUNC_4(VAR_15) == 64)
  VAR_15->port.type = VAR_1;
 else
  VAR_15->port.type = VAR_0;
}
