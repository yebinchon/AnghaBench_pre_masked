
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_bus {scalar_t__ bustype; TYPE_1__* host_pcmcia; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;

void FUNC_1(struct ssb_bus *VAR_2)
{
 if (VAR_2->bustype != VAR_0)
  return;

 FUNC_0(&VAR_2->host_pcmcia->dev, &VAR_1);
}
