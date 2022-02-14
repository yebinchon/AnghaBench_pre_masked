
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct spi_slave_system_control_priv* context; int complete; } ;
struct spi_slave_system_control_priv {TYPE_2__* spi; TYPE_1__ msg; int xfer; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static
int FUNC_3(struct spi_slave_system_control_priv *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_1->msg, &VAR_1->xfer, 1);

 VAR_1->msg.complete = VAR_0;
 VAR_1->msg.context = VAR_1;

 VAR_2 = FUNC_1(VAR_1->spi, &VAR_1->msg);
 if (VAR_2)
  FUNC_0(&VAR_1->spi->dev, "spi_async() failed %d\n", VAR_2);

 return VAR_2;
}
