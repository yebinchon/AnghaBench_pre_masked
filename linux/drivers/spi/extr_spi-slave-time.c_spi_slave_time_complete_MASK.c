
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; } ;
struct spi_slave_time_priv {int finished; TYPE_2__* spi; TYPE_1__ msg; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct spi_slave_time_priv*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct spi_slave_time_priv *VAR_1 = VAR_0;
 int VAR_2;

 VAR_2 = VAR_1->msg.status;
 if (VAR_2)
  goto terminate;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto terminate;

 return;

terminate:
 FUNC_1(&VAR_1->spi->dev, "Terminating\n");
 FUNC_0(&VAR_1->finished);
}
