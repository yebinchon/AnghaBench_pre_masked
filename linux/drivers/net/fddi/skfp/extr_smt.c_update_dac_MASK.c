
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* m; } ;
struct s_smc {TYPE_2__ mib; } ;
struct TYPE_3__ {int fddiMACUNDA_Flag; int fddiMACDA_Flag; int fddiMACDuplicateAddressCond; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct s_smc*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct s_smc *VAR_3, int VAR_4)
{
 int VAR_5 ;

 VAR_5 = ( VAR_3->mib.m[VAR_1].fddiMACUNDA_Flag |
  VAR_3->mib.m[VAR_1].fddiMACDA_Flag) != 0 ;
 if (VAR_4 && (VAR_5 != VAR_3->mib.m[VAR_1].fddiMACDuplicateAddressCond))
  FUNC_0(VAR_3, VAR_2,VAR_0,VAR_5) ;
 else
  VAR_3->mib.m[VAR_1].fddiMACDuplicateAddressCond = VAR_5 ;
}
