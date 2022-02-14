
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_dev*,char*,int,int ) ;
 int FUNC_1 (struct qed_dev*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct qed_hwfn* FUNC_2 (struct qed_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int ,int *,int *) ;
 struct qed_ptt* FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static int FUNC_6(struct qed_dev *VAR_4, u8 **VAR_5,
      u32 VAR_6, u32 VAR_7)
{
 struct qed_hwfn *VAR_8 = FUNC_2(VAR_4);
 struct qed_ptt *VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12 = 0;

 VAR_9 = FUNC_4(VAR_8);
 if (!VAR_9)
  return -VAR_0;

 FUNC_1(VAR_4, VAR_1,
     "Read config cmd = %d entity id %d\n", VAR_6, VAR_7);
 VAR_10 = VAR_7 ? VAR_3 : VAR_2;
 VAR_12 = FUNC_3(VAR_8, VAR_9, VAR_6, VAR_7, VAR_10, *VAR_5, &VAR_11);
 if (VAR_12)
  FUNC_0(VAR_4, "Error %d reading %d\n", VAR_12, VAR_6);

 FUNC_5(VAR_8, VAR_9);

 return VAR_12;
}
