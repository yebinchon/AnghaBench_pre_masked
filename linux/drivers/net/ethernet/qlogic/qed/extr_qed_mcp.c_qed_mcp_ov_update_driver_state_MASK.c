
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef enum qed_ov_driver_state { ____Placeholder_qed_ov_driver_state } qed_ov_driver_state ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int *,int *) ;

int FUNC_3(struct qed_hwfn *VAR_5,
       struct qed_ptt *VAR_6,
       enum qed_ov_driver_state VAR_7)
{
 u32 VAR_8 = 0, VAR_9 = 0;
 u32 VAR_10;
 int VAR_11;

 switch (VAR_7) {
 case 128:
  VAR_10 = VAR_3;
  break;
 case 129:
  VAR_10 = VAR_2;
  break;
 case 130:
  VAR_10 = VAR_1;
  break;
 default:
  FUNC_1(VAR_5, "Invalid driver state %d\n", VAR_7);
  return -VAR_4;
 }

 VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_0,
    VAR_10, &VAR_8, &VAR_9);
 if (VAR_11)
  FUNC_0(VAR_5, "Failed to send driver state\n");

 return VAR_11;
}
