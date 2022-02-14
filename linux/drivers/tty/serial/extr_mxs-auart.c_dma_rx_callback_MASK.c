
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tty_port {int dummy; } ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct mxs_auart_port {int rx_dma_buf; int rx_sgl; int dev; TYPE_2__ port; } ;
struct TYPE_3__ {struct tty_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,int,int ) ;
 int FUNC_1 (struct mxs_auart_port*) ;
 int FUNC_2 (struct mxs_auart_port*,int ) ;
 int FUNC_3 (int,struct mxs_auart_port*,int ) ;
 int FUNC_4 (struct tty_port*) ;
 int FUNC_5 (struct tty_port*,int ,int) ;

__attribute__((used)) static void FUNC_6(void *VAR_7)
{
 struct mxs_auart_port *VAR_8 = (struct mxs_auart_port *) VAR_7;
 struct tty_port *VAR_9 = &VAR_8->port.state->port;
 int VAR_10;
 u32 VAR_11;

 FUNC_0(VAR_8->dev, &VAR_8->rx_sgl, 1, VAR_5);

 VAR_11 = FUNC_2(VAR_8, VAR_6);
 VAR_11 &= ~(VAR_2 | VAR_0 |
   VAR_3 | VAR_1);

 VAR_10 = VAR_11 & VAR_4;
 FUNC_5(VAR_9, VAR_8->rx_dma_buf, VAR_10);

 FUNC_3(VAR_11, VAR_8, VAR_6);
 FUNC_4(VAR_9);


 FUNC_1(VAR_8);
}
