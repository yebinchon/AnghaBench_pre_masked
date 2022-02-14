
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int num_ports; scalar_t__* port_type; int * def_mac; } ;
struct mlx4_dev {int port_random_macs; TYPE_1__ caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mlx4_dev *VAR_2)
{
 int VAR_3;
 u8 VAR_4[VAR_0];

 VAR_2->port_random_macs = 0;
 for (VAR_3 = 1; VAR_3 <= VAR_2->caps.num_ports; ++VAR_3)
  if (!VAR_2->caps.def_mac[VAR_3] &&
      VAR_2->caps.port_type[VAR_3] == VAR_1) {
   FUNC_0(VAR_4);
   VAR_2->port_random_macs |= 1 << VAR_3;
   VAR_2->caps.def_mac[VAR_3] = FUNC_1(VAR_4);
  }
}
