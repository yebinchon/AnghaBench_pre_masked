
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_priv {int status; TYPE_1__* assoc_network; } ;
struct TYPE_2__ {int beacon_interval; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ipw_priv *VAR_1)
{





 if (VAR_1->status & VAR_0
     && VAR_1->assoc_network->beacon_interval > 10)
  return VAR_1->assoc_network->beacon_interval - 10;
 else
  return 120;
}
