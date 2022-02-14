
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


struct uart_port {TYPE_2__* state; } ;
struct TYPE_13__ {TYPE_5__* dram; scalar_t__ statStg_pci; int * xmitRestart; TYPE_4__* statStg; int * xmit_buf; } ;
struct TYPE_12__ {int StartXmitCmd; int CmdReg; } ;
struct TYPE_11__ {TYPE_3__* xmit; } ;
struct TYPE_10__ {unsigned long flags; int leLength; } ;
struct TYPE_8__ {int tail; int head; int * buf; } ;
struct TYPE_9__ {TYPE_1__ xmit; } ;


 unsigned char VAR_0 ;
 TYPE_6__* VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (scalar_t__) ;
 unsigned char FUNC_2 (int *) ;
 int FUNC_3 (TYPE_6__*,char*,unsigned long) ;
 int FUNC_4 (unsigned char,int *) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_6)
{
 unsigned long VAR_7;
 unsigned char VAR_8;
 unsigned long VAR_9;
 int VAR_10 = VAR_6->state->xmit.tail;

 FUNC_3(VAR_1, "WRITE", 0);

 if (FUNC_0(VAR_1->statStg->xmit[0].flags) &
     VAR_2) {
  FUNC_3(VAR_1, "WRITE_FULL", 0);
  return 0;
 }

 VAR_7 = 0;
 while ((VAR_6->state->xmit.head != VAR_10) &&
        (VAR_7 <= VAR_5)) {

  VAR_1->xmit_buf[VAR_7++] =
      VAR_6->state->xmit.buf[VAR_10];

  VAR_10++;
  VAR_10 &= (VAR_4 - 1);
 }

 if (VAR_7) {
  VAR_1->statStg->xmit[0].flags =
      FUNC_0(VAR_2);
  VAR_1->statStg->xmit[0].leLength =
      FUNC_0(VAR_7);
  VAR_9 =
      (unsigned long) &VAR_1->statStg->xmit[0] -
      (unsigned long) VAR_1->statStg;
  *VAR_1->xmitRestart =
      FUNC_1(VAR_1->statStg_pci + VAR_9);
  VAR_8 = FUNC_2(&VAR_1->dram->CmdReg);
  FUNC_4(VAR_8 | VAR_0,
         &VAR_1->dram->CmdReg);
  FUNC_4(VAR_3, &VAR_1->dram->StartXmitCmd);
  FUNC_3(VAR_1, "WRITE_START", VAR_7);

  FUNC_2(&VAR_1->dram->StartXmitCmd);
 }

 return VAR_7;
}
