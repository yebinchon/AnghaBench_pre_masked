
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct bnad {int num_rxp_per_rx; TYPE_2__* rx_info; } ;
struct TYPE_4__ {TYPE_1__* rx_ctrl; } ;
struct TYPE_3__ {int napi; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct bnad *VAR_0, u32 VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->num_rxp_per_rx; VAR_2++)
  FUNC_0(&VAR_0->rx_info[VAR_1].rx_ctrl[VAR_2].napi);
}
