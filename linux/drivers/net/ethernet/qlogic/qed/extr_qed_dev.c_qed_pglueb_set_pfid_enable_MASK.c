
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct qed_hwfn *VAR_2,
          struct qed_ptt *VAR_3, bool VAR_4)
{
 u32 VAR_5 = 0, VAR_6, VAR_7 = VAR_4 ? 1 : 0;


 FUNC_2(VAR_2, VAR_3, VAR_1, VAR_7);


 for (VAR_5 = 0; VAR_5 < 20000; VAR_5++) {
  VAR_6 = FUNC_1(VAR_2, VAR_3,
        VAR_1);
  if (VAR_6 == VAR_7)
   break;

  FUNC_3(50, 60);
 }

 if (VAR_6 != VAR_7) {
  FUNC_0(VAR_2,
     "PFID_ENABLE_MASTER wasn't changed after a second\n");
  return -VAR_0;
 }

 return 0;
}
