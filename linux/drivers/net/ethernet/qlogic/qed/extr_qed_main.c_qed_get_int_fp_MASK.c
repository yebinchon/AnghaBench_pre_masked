
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_int_info {int * msix; int msix_cnt; } ;
struct TYPE_3__ {scalar_t__ int_mode; } ;
struct TYPE_4__ {int fp_msix_base; int * msix_table; int fp_msix_cnt; TYPE_1__ out; int fp_initialized; } ;
struct qed_dev {TYPE_2__ int_params; } ;


 int FUNC_0 (struct qed_dev*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct qed_int_info*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct qed_dev *VAR_2, struct qed_int_info *VAR_3)
{
 FUNC_1(VAR_3, 0, sizeof(struct qed_int_info));

 if (!VAR_2->int_params.fp_initialized) {
  FUNC_0(VAR_2,
   "Protocol driver requested interrupt information, but its support is not yet configured\n");
  return -VAR_0;
 }




 if (VAR_2->int_params.out.int_mode == VAR_1) {
  int VAR_4 = VAR_2->int_params.fp_msix_base;

  VAR_3->msix_cnt = VAR_2->int_params.fp_msix_cnt;
  VAR_3->msix = &VAR_2->int_params.msix_table[VAR_4];
 }

 return 0;
}
