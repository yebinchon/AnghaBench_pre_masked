
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct imx_port {int context_saved; int* saved_reg; TYPE_1__ port; } ;


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
 int FUNC_0 (struct imx_port*,int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct imx_port *VAR_11)
{
 unsigned long VAR_12;

 FUNC_1(&VAR_11->port.lock, VAR_12);
 if (!VAR_11->context_saved) {
  FUNC_2(&VAR_11->port.lock, VAR_12);
  return;
 }

 FUNC_0(VAR_11, VAR_11->saved_reg[4], VAR_9);
 FUNC_0(VAR_11, VAR_11->saved_reg[5], VAR_8);
 FUNC_0(VAR_11, VAR_11->saved_reg[6], VAR_10);
 FUNC_0(VAR_11, VAR_11->saved_reg[7], VAR_1);
 FUNC_0(VAR_11, VAR_11->saved_reg[8], VAR_2);
 FUNC_0(VAR_11, VAR_11->saved_reg[9], VAR_0);
 FUNC_0(VAR_11, VAR_11->saved_reg[0], VAR_3);
 FUNC_0(VAR_11, VAR_11->saved_reg[1] | VAR_5, VAR_4);
 FUNC_0(VAR_11, VAR_11->saved_reg[2], VAR_6);
 FUNC_0(VAR_11, VAR_11->saved_reg[3], VAR_7);
 VAR_11->context_saved = 0;
 FUNC_2(&VAR_11->port.lock, VAR_12);
}
