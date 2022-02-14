
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* state; } ;
struct mxs_auart_port {TYPE_2__ port; int flags; int tx_sgl; int dev; } ;
struct circ_buf {int dummy; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int,int ) ;
 int FUNC_2 (struct mxs_auart_port*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(void *VAR_3)
{
 struct mxs_auart_port *VAR_4 = VAR_3;
 struct circ_buf *VAR_5 = &VAR_4->port.state->xmit;

 FUNC_1(VAR_4->dev, &VAR_4->tx_sgl, 1, VAR_0);


 FUNC_0(VAR_1, &VAR_4->flags);
 FUNC_3();


 if (FUNC_4(VAR_5) < VAR_2)
  FUNC_5(&VAR_4->port);

 FUNC_2(VAR_4);
}
