
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_10__ {int used_cnt; TYPE_3__* msix; scalar_t__ msix_cnt; } ;
struct TYPE_7__ {int num_hwfns; } ;
struct TYPE_8__ {TYPE_1__ common; } ;
struct qedi_ctx {int cdev; TYPE_4__ int_info; int * fp_array; int dbg_ctx; TYPE_2__ dev_info; } ;
struct TYPE_12__ {TYPE_5__* common; } ;
struct TYPE_11__ {size_t (* get_affin_hwfn_idx ) (int ) ;int (* set_fp_int ) (int ,int ) ;int (* simd_handler_clean ) (int ,int ) ;} ;
struct TYPE_9__ {int vector; } ;


 int FUNC_0 (int *,int ,char*,int,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 TYPE_6__* VAR_2 ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct qedi_ctx *VAR_3)
{
 int VAR_4;
 u16 VAR_5;

 if (VAR_3->int_info.msix_cnt) {
  for (VAR_4 = 0; VAR_4 < VAR_3->int_info.used_cnt; VAR_4++) {
   VAR_5 = VAR_4 * VAR_3->dev_info.common.num_hwfns +
   VAR_2->common->get_affin_hwfn_idx(VAR_3->cdev);

   FUNC_0(&VAR_3->dbg_ctx, VAR_0,
      "Freeing IRQ #%d vector_idx=%d.\n", VAR_4, VAR_5);

   FUNC_6(VAR_3->int_info.msix[VAR_5].vector);
   FUNC_2(VAR_3->int_info.msix[VAR_5].vector,
           ((void*)0));
   FUNC_1(VAR_3->int_info.msix[VAR_5].vector,
     &VAR_3->fp_array[VAR_4]);
  }
 } else {
  VAR_2->common->simd_handler_clean(VAR_3->cdev,
           VAR_1);
 }

 VAR_3->int_info.used_cnt = 0;
 VAR_2->common->set_fp_int(VAR_3->cdev, 0);
}
