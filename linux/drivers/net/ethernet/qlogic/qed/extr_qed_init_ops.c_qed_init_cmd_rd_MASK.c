
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct init_read_op {int op_data; int expected_val; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int,...) ;
 int FUNC_1 (int,int ) ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (u32,u32) ;
 int FUNC_3 (u32,u32) ;
 int FUNC_4 (u32,u32) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct qed_hwfn *VAR_5,
       struct qed_ptt *VAR_6, struct init_read_op *VAR_7)
{
 bool (*VAR_8)(u32 VAR_9, u32 VAR_10);
 u32 VAR_11 = VAR_4, VAR_12;
 u32 VAR_13, VAR_14, VAR_15;
 int VAR_16;

 VAR_13 = FUNC_5(VAR_7->op_data);
 VAR_14 = FUNC_1(VAR_13, VAR_1) << 2;
 VAR_15 = FUNC_1(VAR_13, VAR_2);


 VAR_12 = FUNC_6(VAR_5, VAR_6, VAR_14);

 if (VAR_15 == VAR_0)
  return;

 switch (VAR_15) {
 case 129:
  VAR_8 = FUNC_3;
  break;
 case 128:
  VAR_8 = FUNC_4;
  break;
 case 130:
  VAR_8 = FUNC_2;
  break;
 default:
  FUNC_0(VAR_5, "Invalid poll comparison type %08x\n",
         VAR_7->op_data);
  return;
 }

 VAR_13 = FUNC_5(VAR_7->expected_val);
 for (VAR_16 = 0;
      VAR_16 < VAR_3 && !VAR_8(VAR_12, VAR_13);
      VAR_16++) {
  FUNC_7(VAR_11);
  VAR_12 = FUNC_6(VAR_5, VAR_6, VAR_14);
 }

 if (VAR_16 == VAR_3) {
  FUNC_0(VAR_5,
         "Timeout when polling reg: 0x%08x [ Waiting-for: %08x Got: %08x (comparison %08x)]\n",
         VAR_14, FUNC_5(VAR_7->expected_val),
         VAR_12, FUNC_5(VAR_7->op_data));
 }
}
