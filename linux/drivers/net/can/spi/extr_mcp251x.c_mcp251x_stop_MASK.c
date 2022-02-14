
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int irq; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct mcp251x_priv {int force_quit; int mcp_lock; TYPE_1__ can; int transceiver; int * wq; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct mcp251x_priv*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct spi_device*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct spi_device*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct mcp251x_priv* FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_4)
{
 struct mcp251x_priv *VAR_5 = FUNC_11(VAR_4);
 struct spi_device *VAR_6 = VAR_5->spi;

 FUNC_2(VAR_4);

 VAR_5->force_quit = 1;
 FUNC_4(VAR_6->irq, VAR_5);
 FUNC_3(VAR_5->wq);
 VAR_5->wq = ((void*)0);

 FUNC_9(&VAR_5->mcp_lock);


 FUNC_8(VAR_6, VAR_0, 0x00);
 FUNC_8(VAR_6, VAR_1, 0x00);

 FUNC_8(VAR_6, FUNC_0(0), 0);
 FUNC_5(VAR_4);

 FUNC_6(VAR_6);

 FUNC_7(VAR_5->transceiver, 0);

 VAR_5->can.state = VAR_3;

 FUNC_10(&VAR_5->mcp_lock);

 FUNC_1(VAR_4, VAR_2);

 return 0;
}
