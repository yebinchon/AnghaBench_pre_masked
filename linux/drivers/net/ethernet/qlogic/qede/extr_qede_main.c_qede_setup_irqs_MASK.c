
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int used_cnt; TYPE_2__* msix; scalar_t__ msix_cnt; } ;
struct qede_dev {TYPE_4__ int_info; int * fp_array; int cdev; TYPE_3__* ops; TYPE_1__* ndev; } ;
struct qed_common_ops {int (* get_fp_int ) (int ,TYPE_4__*) ;int (* simd_handler_config ) (int ,int *,int,int ) ;} ;
struct TYPE_7__ {struct qed_common_ops* common; } ;
struct TYPE_6__ {int vector; } ;
struct TYPE_5__ {int irq; } ;


 int FUNC_0 (struct qede_dev*) ;
 int FUNC_1 (struct qede_dev*) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_4(struct qede_dev *VAR_1)
{
 int VAR_2, VAR_3 = 0;


 VAR_3 = VAR_1->ops->common->get_fp_int(VAR_1->cdev, &VAR_1->int_info);
 if (VAR_3)
  return VAR_3;

 if (VAR_1->int_info.msix_cnt) {
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3)
   return VAR_3;
  VAR_1->ndev->irq = VAR_1->int_info.msix[0].vector;
 } else {
  const struct qed_common_ops *VAR_4;


  VAR_4 = VAR_1->ops->common;
  for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
   VAR_4->simd_handler_config(VAR_1->cdev,
       &VAR_1->fp_array[VAR_2], VAR_2,
       VAR_0);
  VAR_1->int_info.used_cnt = FUNC_0(VAR_1);
 }
 return 0;
}
