
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sta_info {int tx_max_rate; int tx_supp_rates; } ;
struct TYPE_3__ {int tx_rate_control; } ;
typedef TYPE_1__ local_info_t ;



__attribute__((used)) static int FUNC_0(int VAR_0, struct sta_info *VAR_1,
    local_info_t *VAR_2)
{
 if (VAR_0 > VAR_1->tx_max_rate ||
     !(VAR_1->tx_supp_rates & (1 << VAR_0)))
  return 0;

 if (VAR_2->tx_rate_control != 0 &&
     !(VAR_2->tx_rate_control & (1 << VAR_0)))
  return 0;

 return 1;
}
