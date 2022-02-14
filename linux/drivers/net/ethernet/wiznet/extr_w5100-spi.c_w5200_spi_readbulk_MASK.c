
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct w5200_spi_priv {int* cmd_buf; int cmd_lock; } ;
struct spi_transfer {int* tx_buf; int len; int * rx_buf; } ;
struct spi_device {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct spi_transfer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spi_device*,struct spi_transfer*,int ) ;
 struct spi_device* FUNC_4 (int ) ;
 struct w5200_spi_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0, u32 VAR_1, u8 *VAR_2,
         int VAR_3)
{
 struct spi_device *VAR_4 = FUNC_4(VAR_0->dev.parent);
 struct w5200_spi_priv *VAR_5 = FUNC_5(VAR_0);
 struct spi_transfer VAR_6[] = {
  {
   .tx_buf = VAR_5->cmd_buf,
   .len = sizeof(VAR_5->cmd_buf),
  },
  {
   .rx_buf = VAR_2,
   .len = VAR_3,
  },
 };
 int VAR_7;

 FUNC_1(&VAR_5->cmd_lock);

 VAR_5->cmd_buf[0] = VAR_1 >> 8;
 VAR_5->cmd_buf[1] = VAR_1;
 VAR_5->cmd_buf[2] = VAR_3 >> 8;
 VAR_5->cmd_buf[3] = VAR_3;
 VAR_7 = FUNC_3(VAR_4, VAR_6, FUNC_0(VAR_6));

 FUNC_2(&VAR_5->cmd_lock);

 return VAR_7;
}
