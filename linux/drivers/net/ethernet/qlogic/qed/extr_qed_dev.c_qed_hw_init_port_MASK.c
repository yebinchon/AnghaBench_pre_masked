
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {int port_id; int cdev; } ;


 int FUNC_0 (struct qed_hwfn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qed_hwfn*,int ,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct qed_hwfn *VAR_3,
       struct qed_ptt *VAR_4, int VAR_5)
{
 int VAR_6 = 0;


 if (!FUNC_1(VAR_3->cdev) || !FUNC_0(VAR_3))
  FUNC_2(VAR_3, VAR_0, 0);

 VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_2, VAR_3->port_id, VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_4(VAR_3, VAR_4, VAR_1, 0);

 return 0;
}
