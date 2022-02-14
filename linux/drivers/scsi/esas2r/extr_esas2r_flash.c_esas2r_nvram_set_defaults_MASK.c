
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct esas2r_sas_nvram {int* sas_addr; } ;
struct esas2r_adapter {TYPE_2__* pcid; int flags; struct esas2r_sas_nvram* nvram; } ;
struct TYPE_4__ {int devfn; TYPE_1__* bus; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 struct esas2r_sas_nvram VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

void FUNC_5(struct esas2r_adapter *VAR_3)
{
 struct esas2r_sas_nvram *VAR_4 = VAR_3->nvram;
 u32 VAR_5 = FUNC_4(VAR_2);

 FUNC_3(VAR_0, &VAR_3->flags);
 *VAR_4 = VAR_1;
 VAR_4->sas_addr[3] |= 0x0F;
 VAR_4->sas_addr[4] = FUNC_0(FUNC_2(VAR_5));
 VAR_4->sas_addr[5] = FUNC_1(FUNC_2(VAR_5));
 VAR_4->sas_addr[6] = VAR_3->pcid->bus->number;
 VAR_4->sas_addr[7] = VAR_3->pcid->devfn;
}
