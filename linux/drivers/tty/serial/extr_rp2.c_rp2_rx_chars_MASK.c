
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct tty_port {int dummy; } ;
struct TYPE_6__ {int rx; } ;
struct TYPE_7__ {int lock; TYPE_2__ icount; TYPE_1__* state; } ;
struct rp2_uart_port {TYPE_3__ port; scalar_t__ base; } ;
struct TYPE_5__ {struct tty_port port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_port*) ;
 int FUNC_5 (TYPE_3__*,char) ;
 int FUNC_6 (TYPE_3__*,int,int ,char,char) ;

__attribute__((used)) static void FUNC_7(struct rp2_uart_port *VAR_12)
{
 u16 VAR_13 = FUNC_1(VAR_12->base + VAR_7);
 struct tty_port *VAR_14 = &VAR_12->port.state->port;

 for (; VAR_13 != 0; VAR_13--) {
  u32 VAR_15 = FUNC_1(VAR_12->base + VAR_0) | VAR_6;
  char VAR_16 = VAR_15 & 0xff;

  if (FUNC_0(!(VAR_15 & VAR_5))) {
   if (!FUNC_5(&VAR_12->port, VAR_16))
    FUNC_6(&VAR_12->port, VAR_15, 0, VAR_16,
       VAR_10);
  } else {
   char VAR_17 = VAR_10;

   if (VAR_15 & VAR_1)
    VAR_17 = VAR_8;
   else if (VAR_15 & VAR_2)
    VAR_17 = VAR_9;
   else if (VAR_15 & VAR_4)
    VAR_17 = VAR_11;
   FUNC_6(&VAR_12->port, VAR_15,
      VAR_3, VAR_16, VAR_17);
  }
  VAR_12->port.icount.rx++;
 }

 FUNC_3(&VAR_12->port.lock);
 FUNC_4(VAR_14);
 FUNC_2(&VAR_12->port.lock);
}
