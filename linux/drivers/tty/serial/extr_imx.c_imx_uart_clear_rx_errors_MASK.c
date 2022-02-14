
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tty_port {int dummy; } ;
struct TYPE_5__ {int overrun; int parity; int frame; int buf_overrun; int brk; } ;
struct TYPE_6__ {TYPE_2__ icount; TYPE_1__* state; } ;
struct imx_port {TYPE_3__ port; } ;
struct TYPE_4__ {struct tty_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct imx_port*,int ) ;
 int FUNC_1 (struct imx_port*,int,int ) ;
 int FUNC_2 (struct tty_port*) ;
 scalar_t__ FUNC_3 (struct tty_port*,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(struct imx_port *VAR_7)
{
 struct tty_port *VAR_8 = &VAR_7->port.state->port;
 u32 VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_7, VAR_1);
 VAR_10 = FUNC_0(VAR_7, VAR_4);

 if (VAR_10 & VAR_5) {
  VAR_7->port.icount.brk++;
  FUNC_1(VAR_7, VAR_5, VAR_4);
  FUNC_4(&VAR_7->port);
  if (FUNC_3(VAR_8, 0, VAR_0) == 0)
   VAR_7->port.icount.buf_overrun++;
  FUNC_2(VAR_8);
 } else {
  if (VAR_9 & VAR_2) {
   VAR_7->port.icount.frame++;
   FUNC_1(VAR_7, VAR_2, VAR_1);
  } else if (VAR_9 & VAR_3) {
   VAR_7->port.icount.parity++;
   FUNC_1(VAR_7, VAR_3, VAR_1);
  }
 }

 if (VAR_10 & VAR_6) {
  VAR_7->port.icount.overrun++;
  FUNC_1(VAR_7, VAR_6, VAR_4);
 }

}
