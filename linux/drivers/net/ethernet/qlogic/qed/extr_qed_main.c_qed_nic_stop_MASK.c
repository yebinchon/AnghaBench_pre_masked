
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int b_sp_dpc_enabled; int sp_dpc; } ;
struct qed_dev {int num_hwfns; struct qed_hwfn* hwfns; } ;


 int FUNC_0 (struct qed_dev*,int ,char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_dev*) ;
 int FUNC_2 (struct qed_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = FUNC_2(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_hwfns; VAR_2++) {
  struct qed_hwfn *VAR_4 = &VAR_1->hwfns[VAR_2];

  if (VAR_4->b_sp_dpc_enabled) {
   FUNC_3(VAR_4->sp_dpc);
   VAR_4->b_sp_dpc_enabled = 0;
   FUNC_0(VAR_1, VAR_0,
       "Disabled sp tasklet [hwfn %d] at %p\n",
       VAR_2, VAR_4->sp_dpc);
  }
 }

 FUNC_1(VAR_1);

 return VAR_3;
}
