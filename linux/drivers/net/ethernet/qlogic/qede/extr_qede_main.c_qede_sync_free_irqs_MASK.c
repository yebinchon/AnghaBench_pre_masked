
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int used_cnt; TYPE_1__* msix; scalar_t__ msix_cnt; } ;
struct qede_dev {TYPE_4__ int_info; int cdev; TYPE_3__* ops; int * fp_array; } ;
struct TYPE_7__ {TYPE_2__* common; } ;
struct TYPE_6__ {int (* simd_handler_clean ) (int ,int) ;} ;
struct TYPE_5__ {int vector; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct qede_dev *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->int_info.used_cnt; VAR_1++) {
  if (VAR_0->int_info.msix_cnt) {
   FUNC_2(VAR_0->int_info.msix[VAR_1].vector);
   FUNC_0(VAR_0->int_info.msix[VAR_1].vector,
     &VAR_0->fp_array[VAR_1]);
  } else {
   VAR_0->ops->common->simd_handler_clean(VAR_0->cdev, VAR_1);
  }
 }

 VAR_0->int_info.used_cnt = 0;
}
