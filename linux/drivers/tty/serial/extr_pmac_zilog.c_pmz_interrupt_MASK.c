
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* state; int lock; } ;
struct uart_pmac_port {TYPE_2__ port; struct uart_pmac_port* mate; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int port; } ;


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
 int FUNC_0 (struct uart_pmac_port*) ;
 int FUNC_1 (char*,...) ;
 struct uart_pmac_port* FUNC_2 (struct uart_pmac_port*) ;
 int FUNC_3 (struct uart_pmac_port*) ;
 int FUNC_4 (struct uart_pmac_port*) ;
 int FUNC_5 (struct uart_pmac_port*) ;
 int FUNC_6 (struct uart_pmac_port*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct uart_pmac_port*,int ,int ) ;
 int FUNC_11 (struct uart_pmac_port*) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_11, void *VAR_12)
{
 struct uart_pmac_port *VAR_13 = VAR_12;
 struct uart_pmac_port *VAR_14;
 struct uart_pmac_port *VAR_15;
 int VAR_16 = VAR_7;
 bool VAR_17;
 u8 VAR_18;

 VAR_14 = FUNC_2(VAR_13);
 VAR_15 = VAR_14->mate;

 FUNC_7(&VAR_14->port.lock);
 VAR_18 = FUNC_6(VAR_14, VAR_9);





 VAR_17 = 0;
 if (VAR_18 & (VAR_0 | VAR_2 | VAR_1)) {
  if (!FUNC_0(VAR_14)) {
   FUNC_1("ChanA interrupt while not open !\n");
   goto skip_a;
  }
  FUNC_10(VAR_14, VAR_8, VAR_10);
  FUNC_11(VAR_14);
  if (VAR_18 & VAR_0)
   FUNC_4(VAR_14);
  if (VAR_18 & VAR_1)
   VAR_17 = FUNC_3(VAR_14);
  if (VAR_18 & VAR_2)
   FUNC_5(VAR_14);
  VAR_16 = VAR_6;
 }
 skip_a:
 FUNC_8(&VAR_14->port.lock);
 if (VAR_17)
  FUNC_9(&VAR_13->port.state->port);

 if (!VAR_15)
  goto out;

 FUNC_7(&VAR_15->port.lock);
 VAR_17 = 0;
 if (VAR_18 & (VAR_3 | VAR_5 | VAR_4)) {
  if (!FUNC_0(VAR_15)) {
   FUNC_1("ChanB interrupt while not open !\n");
   goto skip_b;
  }
  FUNC_10(VAR_15, VAR_8, VAR_10);
  FUNC_11(VAR_15);
  if (VAR_18 & VAR_3)
   FUNC_4(VAR_15);
  if (VAR_18 & VAR_4)
   VAR_17 = FUNC_3(VAR_15);
  if (VAR_18 & VAR_5)
   FUNC_5(VAR_15);
  VAR_16 = VAR_6;
 }
 skip_b:
 FUNC_8(&VAR_15->port.lock);
 if (VAR_17)
  FUNC_9(&VAR_13->port.state->port);

 out:
 return VAR_16;
}
