
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct olpc_xo175_ec {scalar_t__ logbuf_len; int logbuf; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct olpc_xo175_ec *VAR_0)
{
 FUNC_0(&VAR_0->spi->dev, "got debug string [%*pE]\n",
    VAR_0->logbuf_len, VAR_0->logbuf);
 VAR_0->logbuf_len = 0;
}
