
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_simd_fp_handler {int dummy; } ;
struct qed_hwfn {int * simd_proto_handler; } ;
struct qed_dev {int num_hwfns; struct qed_hwfn* hwfns; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct qed_dev *VAR_0, int VAR_1)
{
 struct qed_hwfn *VAR_2 = &VAR_0->hwfns[VAR_1 % VAR_0->num_hwfns];
 int VAR_3 = VAR_1 / VAR_0->num_hwfns;

 FUNC_0(&VAR_2->simd_proto_handler[VAR_3], 0,
        sizeof(struct qed_simd_fp_handler));
}
