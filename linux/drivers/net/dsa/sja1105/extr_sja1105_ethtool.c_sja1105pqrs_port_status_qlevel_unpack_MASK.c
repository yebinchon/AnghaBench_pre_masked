
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sja1105_port_status_hl2 {int * qlevel; int * qlevel_hwm; } ;


 int FUNC_0 (int *,int *,int,int,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0,
          struct sja1105_port_status_hl2 *VAR_1)
{

 u32 *VAR_2 = VAR_0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_0(VAR_2 + VAR_3, &VAR_1->qlevel_hwm[VAR_3], 24, 16, 4);
  FUNC_0(VAR_2 + VAR_3, &VAR_1->qlevel[VAR_3], 8, 0, 4);
 }
}
