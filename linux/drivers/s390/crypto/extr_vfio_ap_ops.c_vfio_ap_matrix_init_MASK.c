
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_matrix {int apm_max; int aqm_max; int adm_max; } ;
struct ap_config_info {int Na; int Nd; scalar_t__ apxa; } ;



__attribute__((used)) static void FUNC_0(struct ap_config_info *VAR_0,
    struct ap_matrix *VAR_1)
{
 VAR_1->apm_max = VAR_0->apxa ? VAR_0->Na : 63;
 VAR_1->aqm_max = VAR_0->apxa ? VAR_0->Nd : 15;
 VAR_1->adm_max = VAR_0->apxa ? VAR_0->Nd : 15;
}
