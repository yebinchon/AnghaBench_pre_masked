
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ conn_type; } ;
struct qed_ll2_info {TYPE_1__ input; } ;
struct qed_hwfn {int p_ooo_info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,int ) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ll2_info*) ;

__attribute__((used)) static void
FUNC_2(struct qed_hwfn *VAR_1,
     struct qed_ll2_info *VAR_2)
{
 if (VAR_2->input.conn_type != VAR_0)
  return;

 FUNC_0(VAR_1, VAR_1->p_ooo_info);
 FUNC_1(VAR_1, VAR_2);
}
