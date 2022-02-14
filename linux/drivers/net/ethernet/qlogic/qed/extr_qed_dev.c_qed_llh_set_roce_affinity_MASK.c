
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {TYPE_1__* p_llh_info; } ;
typedef enum qed_eng { ____Placeholder_qed_eng } qed_eng ;
struct TYPE_2__ {scalar_t__ num_ppfid; } ;


 int FUNC_0 (struct qed_dev*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (struct qed_dev*) ;
 struct qed_hwfn* FUNC_2 (struct qed_dev*) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct qed_dev*,scalar_t__,scalar_t__*) ;
 struct qed_ptt* FUNC_5 (struct qed_hwfn*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*,int,int) ;

int FUNC_9(struct qed_dev *VAR_5, enum qed_eng VAR_6)
{
 struct qed_hwfn *VAR_7 = FUNC_2(VAR_5);
 struct qed_ptt *VAR_8 = FUNC_5(VAR_7);
 u32 VAR_9, VAR_10, VAR_11;
 u8 VAR_12, VAR_13;
 int VAR_14 = 0;

 if (!VAR_8)
  return -VAR_0;

 if (!FUNC_1(VAR_5))
  goto out;

 switch (VAR_6) {
 case 129:
  VAR_11 = 0;
  break;
 case 128:
  VAR_11 = 1;
  break;
 case 130:
  VAR_11 = 2;
  FUNC_8(VAR_7, VAR_8, VAR_2,
         0xf);
  break;
 default:
  FUNC_0(VAR_5, "Invalid affinity value for RoCE [%d]\n", VAR_6);
  VAR_14 = -VAR_1;
  goto out;
 }

 for (VAR_12 = 0; VAR_12 < VAR_5->p_llh_info->num_ppfid; VAR_12++) {
  VAR_14 = FUNC_4(VAR_5, VAR_12, &VAR_13);
  if (VAR_14)
   goto out;

  VAR_9 = VAR_3 + VAR_13 * 0x4;
  VAR_10 = FUNC_7(VAR_7, VAR_8, VAR_9);
  FUNC_3(VAR_10, VAR_4, VAR_11);
  FUNC_8(VAR_7, VAR_8, VAR_9, VAR_10);
 }
out:
 FUNC_6(VAR_7, VAR_8);

 return VAR_14;
}
