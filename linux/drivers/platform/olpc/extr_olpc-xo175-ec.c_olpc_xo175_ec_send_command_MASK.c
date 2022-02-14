
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct olpc_xo175_ec* context; int complete; } ;
struct TYPE_6__ {size_t len; } ;
struct olpc_xo175_ec {TYPE_3__* spi; TYPE_1__ msg; TYPE_2__ xfer; int tx_buf; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,void*,size_t) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_4(struct olpc_xo175_ec *VAR_1, void *VAR_2,
        size_t VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_1->tx_buf, VAR_2, VAR_3);
 VAR_1->xfer.len = VAR_3;

 FUNC_3(&VAR_1->msg, &VAR_1->xfer, 1);

 VAR_1->msg.complete = VAR_0;
 VAR_1->msg.context = VAR_1;

 VAR_4 = FUNC_2(VAR_1->spi, &VAR_1->msg);
 if (VAR_4)
  FUNC_0(&VAR_1->spi->dev, "spi_async() failed %d\n", VAR_4);
}
