
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {scalar_t__ recov_in_prog; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct qed_dev *VAR_5,
          struct qed_hwfn *VAR_6, struct qed_ptt *VAR_7)
{
 int VAR_8;


 FUNC_2(VAR_6, VAR_7, VAR_1, 0x0);
 FUNC_2(VAR_6, VAR_7, VAR_2, 0x0);

 if (VAR_5->recov_in_prog)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if ((!FUNC_1(VAR_6, VAR_7,
        VAR_3)) &&
      (!FUNC_1(VAR_6, VAR_7, VAR_4)))
   break;




  FUNC_3(1000, 2000);
 }

 if (VAR_8 < VAR_0)
  return;

 FUNC_0(VAR_6,
    "Timers linear scans are not over [Connection %02x Tasks %02x]\n",
    (u8)FUNC_1(VAR_6, VAR_7, VAR_3),
    (u8)FUNC_1(VAR_6, VAR_7, VAR_4));
}
