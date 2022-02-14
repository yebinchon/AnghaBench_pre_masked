
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ status; } ;
struct spi_slave_system_control_priv {int finished; TYPE_2__* spi; int cmd; TYPE_1__ msg; } ;
struct TYPE_4__ {int dev; } ;






 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct spi_slave_system_control_priv*) ;

__attribute__((used)) static void FUNC_9(void *VAR_1)
{
 struct spi_slave_system_control_priv *VAR_2 = VAR_1;
 u16 VAR_3;
 int VAR_4;

 if (VAR_2->msg.status)
  goto terminate;

 VAR_3 = FUNC_0(VAR_2->cmd);
 switch (VAR_3) {
 case 129:
  FUNC_2(&VAR_2->spi->dev, "Rebooting system...\n");
  FUNC_6(((void*)0));
  break;

 case 130:
  FUNC_2(&VAR_2->spi->dev, "Powering off system...\n");
  FUNC_5();
  break;

 case 131:
  FUNC_2(&VAR_2->spi->dev, "Halting system...\n");
  FUNC_4();
  break;

 case 128:
  FUNC_2(&VAR_2->spi->dev, "Suspending system...\n");
  FUNC_7(VAR_0);
  break;

 default:
  FUNC_3(&VAR_2->spi->dev, "Unknown command 0x%x\n", VAR_3);
  break;
 }

 VAR_4 = FUNC_8(VAR_2);
 if (VAR_4)
  goto terminate;

 return;

terminate:
 FUNC_2(&VAR_2->spi->dev, "Terminating\n");
 FUNC_1(&VAR_2->finished);
}
