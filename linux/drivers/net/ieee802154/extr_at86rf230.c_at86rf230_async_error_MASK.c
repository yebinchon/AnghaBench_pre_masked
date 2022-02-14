
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct at86rf230_state_change {int dummy; } ;
struct at86rf230_local {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at86rf230_local*,struct at86rf230_state_change*,int ,int ) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct at86rf230_local *VAR_2,
        struct at86rf230_state_change *VAR_3, int VAR_4)
{
 FUNC_1(&VAR_2->spi->dev, "spi_async error %d\n", VAR_4);

 FUNC_0(VAR_2, VAR_3, VAR_0,
         VAR_1);
}
