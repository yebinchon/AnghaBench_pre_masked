
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_10__ {unsigned short tx; } ;
struct TYPE_12__ {TYPE_4__* state; TYPE_3__ icount; } ;
struct icom_port {TYPE_5__ uart_port; TYPE_2__* statStg; } ;
struct TYPE_13__ {int tail; } ;
struct TYPE_11__ {TYPE_6__ xmit; } ;
struct TYPE_9__ {TYPE_1__* xmit; } ;
struct TYPE_8__ {int leLength; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct icom_port*,char*,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_5(u16 VAR_3, struct icom_port *VAR_4)
{
 unsigned short int VAR_5;
 int VAR_6;

 if (VAR_3 & (VAR_0)) {
  FUNC_2(VAR_4, "XMIT_COMPLETE", 0);


  VAR_4->statStg->xmit[0].flags &=
   FUNC_0(~VAR_1);

  VAR_5 = (unsigned short int)
   FUNC_0(VAR_4->statStg->xmit[0].leLength);
  VAR_4->uart_port.icount.tx += VAR_5;

  for (VAR_6=0; VAR_6<VAR_5 &&
   !FUNC_3(&VAR_4->uart_port.state->xmit); VAR_6++) {

   VAR_4->uart_port.state->xmit.tail++;
   VAR_4->uart_port.state->xmit.tail &=
    (VAR_2 - 1);
  }

  if (!FUNC_1(&VAR_4->uart_port))

   FUNC_4(&VAR_4->uart_port);
 } else
  FUNC_2(VAR_4, "XMIT_DISABLED", 0);
}
