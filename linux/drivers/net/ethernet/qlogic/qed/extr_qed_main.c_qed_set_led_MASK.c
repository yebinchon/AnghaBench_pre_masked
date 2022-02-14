
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int dummy; } ;
typedef enum qed_led_mode { ____Placeholder_qed_led_mode } qed_led_mode ;


 int VAR_0 ;
 struct qed_hwfn* FUNC_0 (struct qed_dev*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int) ;
 struct qed_ptt* FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_1, enum qed_led_mode VAR_2)
{
 struct qed_hwfn *VAR_3 = FUNC_0(VAR_1);
 struct qed_ptt *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_2);

 FUNC_3(VAR_3, VAR_4);

 return VAR_5;
}
