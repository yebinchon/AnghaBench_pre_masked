
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dorq_attn; } ;
struct qed_hwfn {TYPE_1__ db_recovery_info; } ;


 int FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (struct qed_hwfn*) ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_0)
{
 VAR_0->db_recovery_info.dorq_attn = 1;
 FUNC_1(VAR_0);

 return FUNC_0(VAR_0);
}
