
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int irq; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct hi3110_priv {int force_quit; int hi3110_lock; TYPE_1__ can; int transceiver; int * wq; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct hi3110_priv*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct spi_device*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct spi_device*,int ) ;
 int FUNC_8 (struct spi_device*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct hi3110_priv* FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_5)
{
 struct hi3110_priv *VAR_6 = FUNC_11(VAR_5);
 struct spi_device *VAR_7 = VAR_6->spi;

 FUNC_1(VAR_5);

 VAR_6->force_quit = 1;
 FUNC_3(VAR_7->irq, VAR_6);
 FUNC_2(VAR_6->wq);
 VAR_6->wq = ((void*)0);

 FUNC_9(&VAR_6->hi3110_lock);


 FUNC_8(VAR_7, VAR_3, 0x0);
 FUNC_8(VAR_7, VAR_4, 0x0);
 FUNC_7(VAR_7, VAR_2);

 FUNC_4(VAR_5);

 FUNC_5(VAR_7);

 FUNC_6(VAR_6->transceiver, 0);

 VAR_6->can.state = VAR_1;

 FUNC_10(&VAR_6->hi3110_lock);

 FUNC_0(VAR_5, VAR_0);

 return 0;
}
