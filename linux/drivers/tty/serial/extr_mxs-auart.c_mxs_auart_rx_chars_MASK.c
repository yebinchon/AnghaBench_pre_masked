
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct mxs_auart_port {TYPE_2__ port; } ;
struct TYPE_3__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mxs_auart_port*) ;
 int FUNC_1 (struct mxs_auart_port*,int ) ;
 int FUNC_2 (int,struct mxs_auart_port*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mxs_auart_port *VAR_2)
{
 u32 VAR_3 = 0;

 for (;;) {
  VAR_3 = FUNC_1(VAR_2, VAR_1);
  if (VAR_3 & VAR_0)
   break;
  FUNC_0(VAR_2);
 }

 FUNC_2(VAR_3, VAR_2, VAR_1);
 FUNC_3(&VAR_2->port.state->port);
}
