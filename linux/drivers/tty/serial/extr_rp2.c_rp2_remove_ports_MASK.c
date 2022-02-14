
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rp2_card {int initialized_ports; TYPE_1__* ports; } ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct rp2_card *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->initialized_ports; VAR_2++)
  FUNC_0(&VAR_0, &VAR_1->ports[VAR_2].port);
 VAR_1->initialized_ports = 0;
}
