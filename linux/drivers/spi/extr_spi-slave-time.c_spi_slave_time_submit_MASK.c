
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {struct spi_slave_time_priv* context; int complete; } ;
struct spi_slave_time_priv {TYPE_2__* spi; TYPE_1__ msg; int xfer; void** buf; } ;
struct TYPE_5__ {int dev; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct spi_slave_time_priv *VAR_1)
{
 u32 VAR_2;
 int VAR_3;
 u64 VAR_4;

 VAR_4 = FUNC_3();
 VAR_2 = FUNC_2(VAR_4, 1000000000) / 1000;

 VAR_1->buf[0] = FUNC_0(VAR_4);
 VAR_1->buf[1] = FUNC_0(VAR_2);

 FUNC_5(&VAR_1->msg, &VAR_1->xfer, 1);

 VAR_1->msg.complete = VAR_0;
 VAR_1->msg.context = VAR_1;

 VAR_3 = FUNC_4(VAR_1->spi, &VAR_1->msg);
 if (VAR_3)
  FUNC_1(&VAR_1->spi->dev, "spi_async() failed %d\n", VAR_3);

 return VAR_3;
}
