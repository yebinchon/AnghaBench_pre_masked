
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qed_hwfn {int dummy; } ;
struct init_if_mode_op {int op_data; int modes_buf_offset; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct qed_hwfn*,int *,int) ;

__attribute__((used)) static u32 FUNC_4(struct qed_hwfn *VAR_1,
        struct init_if_mode_op *VAR_2, int VAR_3)
{
 u16 VAR_4 = FUNC_1(VAR_2->modes_buf_offset);

 if (FUNC_3(VAR_1, &VAR_4, VAR_3))
  return 0;
 else
  return FUNC_0(FUNC_2(VAR_2->op_data),
     VAR_0);
}
