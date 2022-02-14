
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_func {TYPE_1__* card; } ;
struct TYPE_2__ {int host; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct sdio_func *VAR_0)
{
 if (FUNC_0(!VAR_0))
  return;

 FUNC_1(VAR_0->card->host);
}
