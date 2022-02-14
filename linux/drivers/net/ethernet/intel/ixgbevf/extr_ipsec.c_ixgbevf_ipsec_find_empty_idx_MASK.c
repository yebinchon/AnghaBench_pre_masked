
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct ixgbevf_ipsec {size_t num_rx_sa; size_t num_tx_sa; TYPE_2__* tx_tbl; TYPE_1__* rx_tbl; } ;
struct TYPE_4__ {int used; } ;
struct TYPE_3__ {int used; } ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static
int FUNC_0(struct ixgbevf_ipsec *VAR_2, bool VAR_3)
{
 u32 VAR_4;

 if (VAR_3) {
  if (VAR_2->num_rx_sa == VAR_1)
   return -VAR_0;


  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   if (!VAR_2->rx_tbl[VAR_4].used)
    return VAR_4;
  }
 } else {
  if (VAR_2->num_tx_sa == VAR_1)
   return -VAR_0;


  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   if (!VAR_2->tx_tbl[VAR_4].used)
    return VAR_4;
  }
 }

 return -VAR_0;
}
