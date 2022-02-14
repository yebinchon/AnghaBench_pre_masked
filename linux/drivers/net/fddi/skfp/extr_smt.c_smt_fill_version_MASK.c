
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smt_p_version {int v_n; int v_index; scalar_t__ v_pad2; int * v_version; scalar_t__ v_pad; } ;
struct s_smc {int dummy; } ;


 int FUNC_0 (struct s_smc*) ;
 int FUNC_1 (struct smt_p_version*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_2, struct smt_p_version *VAR_3)
{
 FUNC_0(VAR_2) ;
 FUNC_1(VAR_3,VAR_0) ;
 VAR_3->v_pad = 0 ;
 VAR_3->v_n = 1 ;
 VAR_3->v_index = 1 ;
 VAR_3->v_version[0] = VAR_1 ;
 VAR_3->v_pad2 = 0 ;
}
