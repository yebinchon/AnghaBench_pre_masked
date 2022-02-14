
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct imx_port {int context_saved; TYPE_1__ port; void** saved_reg; } ;


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
 void* FUNC_0 (struct imx_port*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct imx_port *VAR_10)
{
 unsigned long VAR_11;


 FUNC_1(&VAR_10->port.lock, VAR_11);
 VAR_10->saved_reg[0] = FUNC_0(VAR_10, VAR_3);
 VAR_10->saved_reg[1] = FUNC_0(VAR_10, VAR_4);
 VAR_10->saved_reg[2] = FUNC_0(VAR_10, VAR_5);
 VAR_10->saved_reg[3] = FUNC_0(VAR_10, VAR_6);
 VAR_10->saved_reg[4] = FUNC_0(VAR_10, VAR_8);
 VAR_10->saved_reg[5] = FUNC_0(VAR_10, VAR_7);
 VAR_10->saved_reg[6] = FUNC_0(VAR_10, VAR_9);
 VAR_10->saved_reg[7] = FUNC_0(VAR_10, VAR_1);
 VAR_10->saved_reg[8] = FUNC_0(VAR_10, VAR_2);
 VAR_10->saved_reg[9] = FUNC_0(VAR_10, VAR_0);
 VAR_10->context_saved = 1;
 FUNC_2(&VAR_10->port.lock, VAR_11);
}
