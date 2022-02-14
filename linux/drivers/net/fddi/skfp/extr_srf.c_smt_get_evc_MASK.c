
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_srf_evc {int evc_code; int evc_index; } ;
struct s_smc {struct s_srf_evc* evcs; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static struct s_srf_evc *FUNC_0(struct s_smc *VAR_1, int VAR_2, int VAR_3)
{
 unsigned int VAR_4 ;
 struct s_srf_evc *VAR_5 ;

 for (VAR_4 = 0, VAR_5 = VAR_1->evcs ; VAR_4 < VAR_0 ; VAR_4++, VAR_5++) {
  if (VAR_5->evc_code == VAR_2 && VAR_5->evc_index == VAR_3)
   return VAR_5;
 }
 return ((void*)0);
}
