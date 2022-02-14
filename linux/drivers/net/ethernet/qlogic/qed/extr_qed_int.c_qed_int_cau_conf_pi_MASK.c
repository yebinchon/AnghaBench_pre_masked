
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {scalar_t__ hw_init_done; int cdev; } ;
struct cau_pi_entry {int prod; } ;
typedef enum qed_coalescing_fsm { ____Placeholder_qed_coalescing_fsm } qed_coalescing_fsm ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,scalar_t__,int) ;
 int FUNC_3 (struct cau_pi_entry*,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_6,
    struct qed_ptt *VAR_7,
    u16 VAR_8,
    u32 VAR_9,
    enum qed_coalescing_fsm VAR_10,
    u8 VAR_11)
{
 struct cau_pi_entry VAR_12;
 u32 VAR_13, VAR_14;

 if (FUNC_0(VAR_6->cdev))
  return;

 VAR_13 = VAR_8 * VAR_4;
 FUNC_3(&VAR_12, 0, sizeof(struct cau_pi_entry));

 FUNC_1(VAR_12.prod, VAR_1, VAR_11);
 if (VAR_10 == VAR_5)
  FUNC_1(VAR_12.prod, VAR_0, 0);
 else
  FUNC_1(VAR_12.prod, VAR_0, 1);

 VAR_14 = VAR_13 + VAR_9;
 if (VAR_6->hw_init_done) {
  FUNC_4(VAR_6, VAR_7,
         VAR_2 + VAR_14 * sizeof(u32),
         *((u32 *)&(VAR_12)));
 } else {
  FUNC_2(VAR_6,
        VAR_3 + VAR_14,
        *((u32 *)&(VAR_12)));
 }
}
