
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qed_int_params {int dummy; } ;
struct TYPE_5__ {int num_vectors; } ;
struct TYPE_4__ {int min_msix_cnt; scalar_t__ num_vectors; int int_mode; } ;
struct TYPE_6__ {TYPE_2__ out; int fp_msix_cnt; scalar_t__ fp_msix_base; TYPE_1__ in; } ;
struct qed_dev {int num_hwfns; TYPE_3__ int_params; int * hwfns; } ;


 int VAR_0 ;
 int * FUNC_0 (struct qed_dev*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (struct qed_dev*,int) ;
 int FUNC_3 (int *,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->int_params, 0, sizeof(struct qed_int_params));
 VAR_1->int_params.in.int_mode = VAR_0;

 FUNC_3(FUNC_0(VAR_1),
       &VAR_1->int_params.in.num_vectors);
 if (VAR_1->num_hwfns > 1) {
  u8 VAR_3 = 0;

  FUNC_3(&VAR_1->hwfns[1], &VAR_3);
  VAR_1->int_params.in.num_vectors += VAR_3;
 }


 VAR_1->int_params.in.min_msix_cnt = VAR_1->num_hwfns;

 VAR_2 = FUNC_2(VAR_1, 1);
 if (VAR_2)
  return VAR_2;

 VAR_1->int_params.fp_msix_base = 0;
 VAR_1->int_params.fp_msix_cnt = VAR_1->int_params.out.num_vectors;

 return 0;
}
