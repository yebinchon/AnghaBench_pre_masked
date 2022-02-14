
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ksz_switch {TYPE_1__* port_cfg; } ;
struct ksz_hw {struct ksz_switch* ksz_switch; } ;
struct TYPE_2__ {scalar_t__* tx_rate; scalar_t__* rx_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ksz_hw*,int) ;

__attribute__((used)) static void FUNC_1(struct ksz_hw *VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct ksz_switch *VAR_5 = VAR_2->ksz_switch;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   VAR_5->port_cfg[VAR_3].rx_rate[VAR_4] =
   VAR_5->port_cfg[VAR_3].tx_rate[VAR_4] = 0;
  }
  FUNC_0(VAR_2, VAR_3);
 }
}
