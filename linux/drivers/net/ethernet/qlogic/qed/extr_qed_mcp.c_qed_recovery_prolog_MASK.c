
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {struct qed_ptt* p_main_ptt; } ;
struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 struct qed_hwfn* FUNC_1 (struct qed_dev*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int) ;

int FUNC_4(struct qed_dev *VAR_1)
{
 struct qed_hwfn *VAR_2 = FUNC_1(VAR_1);
 struct qed_ptt *VAR_3 = VAR_2->p_main_ptt;
 int VAR_4;


 FUNC_2(VAR_0);


 VAR_4 = FUNC_3(VAR_2, VAR_3, 0);
 if (VAR_4)
  FUNC_0(VAR_2,
     "qed_pglueb_set_pfid_enable() failed. rc = %d.\n",
     VAR_4);

 return VAR_4;
}
