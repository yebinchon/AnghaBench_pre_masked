
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_5,
      struct qed_ptt *VAR_6)
{
 u32 VAR_7 = VAR_3;
 u32 VAR_8 = 1;


 FUNC_2(VAR_5, VAR_6, VAR_0, 0x1);
 while (VAR_7-- && VAR_8) {
  VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_1);
  FUNC_3(VAR_4);
 }


 if (VAR_8) {
  FUNC_0(VAR_5->cdev,
     "DB recovery: doorbell usage failed to zero after %d usec. usage was %x\n",
     VAR_4 * VAR_3, VAR_8);
  return -VAR_2;
 }

 return 0;
}
