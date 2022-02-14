
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_6__ {TYPE_2__* m; } ;
struct TYPE_4__ {int * pend; } ;
struct s_smc {TYPE_3__ mib; TYPE_1__ sm; } ;
struct TYPE_5__ {int fddiMACUpstreamNbr; int fddiMACDownstreamNbr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct s_smc*) ;
 int FUNC_1 (struct s_smc*,int *,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_6, int VAR_7)
{
 u_long VAR_8 ;

 VAR_6->sm.pend[VAR_7 ? VAR_4 : VAR_5] =
  VAR_8 = FUNC_0(VAR_6) ;
 FUNC_1(VAR_6, VAR_7 ?
  &VAR_6->mib.m[VAR_1].fddiMACDownstreamNbr :
  &VAR_6->mib.m[VAR_1].fddiMACUpstreamNbr,
  VAR_0,VAR_8, VAR_2, (VAR_3 & ~3)-8) ;
}
