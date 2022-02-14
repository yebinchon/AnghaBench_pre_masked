
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct esas2r_sas_nvram {int * sas_addr; } ;
struct esas2r_adapter {TYPE_1__* nvram; } ;
struct TYPE_2__ {int * sas_addr; } ;


 struct esas2r_sas_nvram VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

void FUNC_1(struct esas2r_adapter *VAR_1,
          struct esas2r_sas_nvram *VAR_2)
{
 u8 VAR_3[8];





 FUNC_0(&VAR_3[0], VAR_1->nvram->sas_addr, 8);
 *VAR_2 = VAR_0;
 FUNC_0(&VAR_2->sas_addr[0], &VAR_3[0], 8);
}
