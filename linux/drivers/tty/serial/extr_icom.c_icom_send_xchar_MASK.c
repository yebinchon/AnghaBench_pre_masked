
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct TYPE_5__ {TYPE_1__* dram; } ;
struct TYPE_4__ {int xchar; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 unsigned char FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_2__*,char*,char) ;
 int FUNC_5 (char,int *) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_1, char VAR_2)
{
 unsigned char VAR_3;
 int VAR_4;
 unsigned long VAR_5;

 FUNC_4(VAR_0, "SEND_XCHAR", VAR_2);


 for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
  FUNC_2(&VAR_1->lock, VAR_5);
  VAR_3 = FUNC_1(&VAR_0->dram->xchar);
  if (VAR_3 == 0x00) {
   FUNC_4(VAR_0, "QUICK_WRITE", 0);
   FUNC_5(VAR_2, &VAR_0->dram->xchar);


   VAR_3 = FUNC_1(&VAR_0->dram->xchar);
   FUNC_3(&VAR_1->lock, VAR_5);
   break;
  }
  FUNC_3(&VAR_1->lock, VAR_5);
  FUNC_0(10);
 }
}
