
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_rx_mode_ramrod_params {TYPE_1__* rx_mode_obj; int ramrod_flags; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int (* config_rx_mode ) (struct bnx2x*,struct bnx2x_rx_mode_ramrod_params*) ;int (* wait_comp ) (struct bnx2x*,struct bnx2x_rx_mode_ramrod_params*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*,struct bnx2x_rx_mode_ramrod_params*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_rx_mode_ramrod_params*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

int FUNC_3(struct bnx2x *VAR_1,
    struct bnx2x_rx_mode_ramrod_params *VAR_2)
{
 int VAR_3;


 VAR_3 = VAR_2->rx_mode_obj->config_rx_mode(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;


 if (FUNC_2(VAR_0, &VAR_2->ramrod_flags)) {
  VAR_3 = VAR_2->rx_mode_obj->wait_comp(VAR_1, VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 return VAR_3;
}
