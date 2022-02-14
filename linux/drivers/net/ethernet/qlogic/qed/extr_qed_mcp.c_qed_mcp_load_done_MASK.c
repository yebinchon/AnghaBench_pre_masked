
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int*,int*) ;

int FUNC_2(struct qed_hwfn *VAR_2, struct qed_ptt *VAR_3)
{
 u32 VAR_4 = 0, VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_0, 0, &VAR_4,
    &VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_2,
     "Failed to send a LOAD_DONE command, rc = %d\n", VAR_6);
  return VAR_6;
 }


 if (VAR_5 & VAR_1)
  FUNC_0(VAR_2,
     "warning: device configuration is not supported on this board type. The device may not function as expected.\n");

 return 0;
}
