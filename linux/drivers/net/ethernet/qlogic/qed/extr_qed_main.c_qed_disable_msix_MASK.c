
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_int_param {int dummy; } ;
struct TYPE_4__ {scalar_t__ int_mode; } ;
struct TYPE_3__ {TYPE_2__ out; int msix_table; } ;
struct qed_dev {TYPE_1__ int_params; int pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct qed_dev *VAR_2)
{
 if (VAR_2->int_params.out.int_mode == VAR_1) {
  FUNC_3(VAR_2->pdev);
  FUNC_0(VAR_2->int_params.msix_table);
 } else if (VAR_2->int_params.out.int_mode == VAR_0) {
  FUNC_2(VAR_2->pdev);
 }

 FUNC_1(&VAR_2->int_params.out, 0, sizeof(struct qed_int_param));
}
