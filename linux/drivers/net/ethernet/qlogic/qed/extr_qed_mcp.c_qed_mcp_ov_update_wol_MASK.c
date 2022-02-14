
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct TYPE_4__ {scalar_t__ b_wol_support; } ;
struct qed_hwfn {TYPE_1__* cdev; TYPE_2__ hw_info; } ;
typedef enum qed_ov_wol { ____Placeholder_qed_ov_wol } qed_ov_wol ;
struct TYPE_3__ {scalar_t__ wol_config; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 scalar_t__ VAR_6 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int *,int *) ;

int FUNC_3(struct qed_hwfn *VAR_7,
     struct qed_ptt *VAR_8, enum qed_ov_wol VAR_9)
{
 u32 VAR_10 = 0, VAR_11 = 0;
 u32 VAR_12;
 int VAR_13;

 if (VAR_7->hw_info.b_wol_support == VAR_6) {
  FUNC_1(VAR_7, VAR_5,
      "Can't change WoL configuration when WoL isn't supported\n");
  return -VAR_4;
 }

 switch (VAR_9) {
 case 130:
  VAR_12 = VAR_0;
  break;
 case 129:
  VAR_12 = VAR_1;
  break;
 case 128:
  VAR_12 = VAR_2;
  break;
 default:
  FUNC_0(VAR_7, "Invalid wol state %d\n", VAR_9);
  return -VAR_4;
 }

 VAR_13 = FUNC_2(VAR_7, VAR_8, VAR_3,
    VAR_12, &VAR_10, &VAR_11);
 if (VAR_13)
  FUNC_0(VAR_7, "Failed to send wol mode, rc = %d\n", VAR_13);


 VAR_7->cdev->wol_config = (u8)VAR_9;

 return VAR_13;
}
