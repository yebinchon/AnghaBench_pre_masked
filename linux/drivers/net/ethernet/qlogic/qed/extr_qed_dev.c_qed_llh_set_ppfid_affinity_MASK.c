
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int iwarp_affin; } ;
typedef enum qed_eng { ____Placeholder_qed_eng } qed_eng ;


 int FUNC_0 (struct qed_dev*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (struct qed_dev*) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*) ;
 struct qed_hwfn* FUNC_3 (struct qed_dev*) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct qed_dev*,int,int*) ;
 struct qed_ptt* FUNC_6 (struct qed_hwfn*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_ptt*,int,int) ;

int FUNC_10(struct qed_dev *VAR_4, u8 VAR_5, enum qed_eng VAR_6)
{
 struct qed_hwfn *VAR_7 = FUNC_3(VAR_4);
 struct qed_ptt *VAR_8 = FUNC_6(VAR_7);
 u32 VAR_9, VAR_10, VAR_11;
 u8 VAR_12;
 int VAR_13 = 0;

 if (!VAR_8)
  return -VAR_0;

 if (!FUNC_1(VAR_4))
  goto out;

 VAR_13 = FUNC_5(VAR_4, VAR_5, &VAR_12);
 if (VAR_13)
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
  break;
 default:
  FUNC_0(VAR_4, "Invalid affinity value for ppfid [%d]\n", VAR_6);
  VAR_13 = -VAR_1;
  goto out;
 }

 VAR_9 = VAR_2 + VAR_12 * 0x4;
 VAR_10 = FUNC_8(VAR_7, VAR_8, VAR_9);
 FUNC_4(VAR_10, VAR_3, VAR_11);
 FUNC_9(VAR_7, VAR_8, VAR_9, VAR_10);


 if (!VAR_5 && FUNC_2(VAR_7))
  VAR_4->iwarp_affin = (VAR_6 == 128) ? 1 : 0;
out:
 FUNC_7(VAR_7, VAR_8);

 return VAR_13;
}
