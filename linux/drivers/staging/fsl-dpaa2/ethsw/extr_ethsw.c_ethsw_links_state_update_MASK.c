
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_ifs; } ;
struct ethsw_core {TYPE_2__** ports; TYPE_1__ sw_attr; } ;
struct TYPE_4__ {int netdev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ethsw_core *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->sw_attr.num_ifs; VAR_1++)
  FUNC_0(VAR_0->ports[VAR_1]->netdev);
}
