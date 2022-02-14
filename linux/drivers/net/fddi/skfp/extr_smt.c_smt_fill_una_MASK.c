
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smt_p_una {int una_node; scalar_t__ una_pad; } ;
struct TYPE_4__ {TYPE_1__* m; } ;
struct s_smc {TYPE_2__ mib; } ;
struct TYPE_3__ {int fddiMACUpstreamNbr; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct smt_p_una*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct s_smc *VAR_2, struct smt_p_una *VAR_3)
{
 FUNC_0(VAR_3,VAR_1) ;
 VAR_3->una_pad = 0 ;
 VAR_3->una_node = VAR_2->mib.m[VAR_0].fddiMACUpstreamNbr ;
}
