
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_hwfn {int dummy; } ;
struct aeu_invert_reg_bit {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct qed_hwfn*,struct aeu_invert_reg_bit*) ;

__attribute__((used)) static bool FUNC_1(struct qed_hwfn *VAR_1,
       struct aeu_invert_reg_bit *VAR_2)
{
 return !!(FUNC_0(VAR_1, VAR_2)->flags &
     VAR_0);
}
