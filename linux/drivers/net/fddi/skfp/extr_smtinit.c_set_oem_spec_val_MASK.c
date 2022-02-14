
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fddi_mib {int fddiSMTConnectionPolicy; } ;
struct s_smc {struct fddi_mib mib; } ;


 char FUNC_0 (struct s_smc*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct s_smc *VAR_1)
{
 struct fddi_mib *VAR_2 ;

 VAR_2 = &VAR_1->mib ;




 if (FUNC_0(VAR_1,0) == 'I') {
  VAR_2->fddiSMTConnectionPolicy = VAR_0 ;
 }
}
