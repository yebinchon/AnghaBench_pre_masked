
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * port_ops; } ;
struct sdw_cdns {TYPE_1__ bus; int tx_complete; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct sdw_cdns *VAR_1)
{
 FUNC_0(&VAR_1->tx_complete);
 VAR_1->bus.port_ops = &VAR_0;

 return 0;
}
