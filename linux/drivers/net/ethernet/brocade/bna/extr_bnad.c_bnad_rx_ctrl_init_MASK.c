
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct bnad_rx_info {TYPE_1__* rx_ctrl; } ;
struct bnad {int num_rxp_per_rx; struct bnad_rx_info* rx_info; } ;
struct TYPE_2__ {struct bnad* bnad; } ;



__attribute__((used)) static void
FUNC_0(struct bnad *VAR_0, u32 VAR_1)
{
 struct bnad_rx_info *VAR_2 = &VAR_0->rx_info[VAR_1];
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_rxp_per_rx; VAR_3++)
  VAR_2->rx_ctrl[VAR_3].bnad = VAR_0;
}
