
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_int_info {int msix_cnt; int * msix; } ;
struct TYPE_3__ {scalar_t__ int_mode; } ;
struct TYPE_4__ {int rdma_msix_base; int * msix_table; int rdma_msix_cnt; TYPE_1__ out; int fp_initialized; } ;
struct qed_dev {TYPE_2__ int_params; } ;


 int FUNC_0 (struct qed_dev*,char*) ;
 int FUNC_1 (struct qed_dev*,int ,char*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct qed_int_info*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct qed_dev *VAR_3, struct qed_int_info *VAR_4)
{
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));

 if (!VAR_3->int_params.fp_initialized) {
  FUNC_0(VAR_3,
   "Protocol driver requested interrupt information, but its support is not yet configured\n");
  return -VAR_0;
 }

 if (VAR_3->int_params.out.int_mode == VAR_1) {
  int VAR_5 = VAR_3->int_params.rdma_msix_base;

  VAR_4->msix_cnt = VAR_3->int_params.rdma_msix_cnt;
  VAR_4->msix = &VAR_3->int_params.msix_table[VAR_5];

  FUNC_1(VAR_3, VAR_2, "msix_cnt = %d msix_base=%d\n",
      VAR_4->msix_cnt, VAR_5);
 }

 return 0;
}
