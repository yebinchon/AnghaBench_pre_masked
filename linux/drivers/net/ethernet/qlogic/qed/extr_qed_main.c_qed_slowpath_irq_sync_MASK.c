
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct qed_hwfn {size_t my_id; struct qed_dev* cdev; } ;
struct TYPE_5__ {scalar_t__ int_mode; } ;
struct TYPE_7__ {TYPE_2__* msix_table; TYPE_1__ out; } ;
struct qed_dev {TYPE_4__* pdev; TYPE_3__ int_params; } ;
struct TYPE_8__ {int irq; } ;
struct TYPE_6__ {int vector; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct qed_hwfn *VAR_1)
{
 struct qed_dev *VAR_2 = VAR_1->cdev;
 u8 VAR_3 = VAR_1->my_id;
 u32 VAR_4;

 VAR_4 = VAR_2->int_params.out.int_mode;
 if (VAR_4 == VAR_0)
  FUNC_1(VAR_2->int_params.msix_table[VAR_3].vector);
 else
  FUNC_1(VAR_2->pdev->irq);

 FUNC_0(VAR_1);
}
