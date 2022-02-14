
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sja1105_port_status_hl2 {int n_not_reach; int n_egr_disabled; int n_part_drop; int n_qfull; } ;


 int FUNC_0 (int *,int *,int,int ,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0,
          struct sja1105_port_status_hl2 *VAR_1)
{

 u32 *VAR_2 = VAR_0;

 FUNC_0(VAR_2 + 0x3, &VAR_1->n_qfull, 31, 0, 4);
 FUNC_0(VAR_2 + 0x2, &VAR_1->n_part_drop, 31, 0, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->n_egr_disabled, 31, 0, 4);
 FUNC_0(VAR_2 + 0x0, &VAR_1->n_not_reach, 31, 0, 4);
}
