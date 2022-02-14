
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zilog_channel {int control; } ;
struct TYPE_4__ {TYPE_1__* state; int lock; } ;
struct uart_ip22zilog_port {struct uart_ip22zilog_port* next; TYPE_2__ port; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int port; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct zilog_channel* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct zilog_channel*) ;
 int FUNC_3 (struct uart_ip22zilog_port*,struct zilog_channel*) ;
 int FUNC_4 (struct uart_ip22zilog_port*,struct zilog_channel*) ;
 int FUNC_5 (struct uart_ip22zilog_port*,struct zilog_channel*) ;
 unsigned char FUNC_6 (struct zilog_channel*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_9, void *VAR_10)
{
 struct uart_ip22zilog_port *VAR_11 = VAR_10;

 while (VAR_11) {
  struct zilog_channel *VAR_12
   = FUNC_0(&VAR_11->port);
  unsigned char VAR_13;
  bool VAR_14 = 0;

  FUNC_7(&VAR_11->port.lock);
  VAR_13 = FUNC_6(VAR_12, VAR_7);


  if (VAR_13 & (VAR_0 | VAR_2 | VAR_1)) {
   FUNC_10(VAR_8, &VAR_12->control);
   FUNC_1();
   FUNC_2(VAR_12);

   if (VAR_13 & VAR_1)
    VAR_14 = FUNC_3(VAR_11, VAR_12);
   if (VAR_13 & VAR_0)
    FUNC_4(VAR_11, VAR_12);
   if (VAR_13 & VAR_2)
    FUNC_5(VAR_11, VAR_12);
  }
  FUNC_8(&VAR_11->port.lock);

  if (VAR_14)
   FUNC_9(&VAR_11->port.state->port);


  VAR_11 = VAR_11->next;
  VAR_12 = FUNC_0(&VAR_11->port);
  VAR_14 = 0;

  FUNC_7(&VAR_11->port.lock);
  if (VAR_13 & (VAR_3 | VAR_5 | VAR_4)) {
   FUNC_10(VAR_8, &VAR_12->control);
   FUNC_1();
   FUNC_2(VAR_12);

   if (VAR_13 & VAR_4)
    VAR_14 = FUNC_3(VAR_11, VAR_12);
   if (VAR_13 & VAR_3)
    FUNC_4(VAR_11, VAR_12);
   if (VAR_13 & VAR_5)
    FUNC_5(VAR_11, VAR_12);
  }
  FUNC_8(&VAR_11->port.lock);

  if (VAR_14)
   FUNC_9(&VAR_11->port.state->port);

  VAR_11 = VAR_11->next;
 }

 return VAR_6;
}
