
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int * rx_buf; } ;
struct spi_slave_system_control_priv {TYPE_1__ xfer; int cmd; int finished; struct spi_device* spi; } ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct spi_slave_system_control_priv* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct spi_device*,struct spi_slave_system_control_priv*) ;
 int FUNC_3 (struct spi_slave_system_control_priv*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_2)
{
 struct spi_slave_system_control_priv *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->spi = VAR_2;
 FUNC_1(&VAR_3->finished);
 VAR_3->xfer.rx_buf = &VAR_3->cmd;
 VAR_3->xfer.len = sizeof(VAR_3->cmd);

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_2, VAR_3);
 return 0;
}
