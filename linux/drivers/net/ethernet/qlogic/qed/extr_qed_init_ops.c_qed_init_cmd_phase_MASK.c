
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_hwfn {int dummy; } ;
struct init_if_phase_op {int op_data; int phase_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct qed_hwfn *VAR_4,
         struct init_if_phase_op *VAR_5,
         u32 VAR_6, u32 VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_5->phase_data);
 u32 VAR_9 = FUNC_1(VAR_5->op_data);

 if (!(FUNC_0(VAR_8, VAR_2) == VAR_6 &&
       (FUNC_0(VAR_8, VAR_3) == VAR_0 ||
        FUNC_0(VAR_8, VAR_3) == VAR_7)))
  return FUNC_0(VAR_9, VAR_1);
 else
  return 0;
}
