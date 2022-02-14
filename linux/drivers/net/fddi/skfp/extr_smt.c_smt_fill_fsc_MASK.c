
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smt_p_fsc {void* fsc_value; void* fsc_mac_index; scalar_t__ fsc_pad1; scalar_t__ fsc_pad0; } ;
struct s_smc {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct s_smc*) ;
 int FUNC_1 (struct smt_p_fsc*,int ) ;
 int VAR_2 ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(struct s_smc *VAR_3, struct smt_p_fsc *VAR_4)
{
 FUNC_0(VAR_3) ;
 FUNC_1(VAR_4,VAR_2) ;
 VAR_4->fsc_pad0 = 0 ;
 VAR_4->fsc_mac_index = VAR_1 ;


 VAR_4->fsc_pad1 = 0 ;
 VAR_4->fsc_value = VAR_0 ;




}
