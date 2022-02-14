
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u64 ;
struct mvs_info {TYPE_2__* phy; int sas_addr; TYPE_1__* chip; } ;
struct TYPE_4__ {int dev_sas_addr; } ;
struct TYPE_3__ {size_t n_phy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int*,int ) ;

__attribute__((used)) static void FUNC_2(struct mvs_info *VAR_1)
{
 u8 VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->chip->n_phy; VAR_2++) {
  VAR_1->phy[VAR_2].dev_sas_addr = 0x5005043011ab0000ULL;
  VAR_1->phy[VAR_2].dev_sas_addr =
   FUNC_0((u64)(*(u64 *)&VAR_1->phy[VAR_2].dev_sas_addr));
 }

 FUNC_1(VAR_1->sas_addr, &VAR_1->phy[0].dev_sas_addr, VAR_0);
}
