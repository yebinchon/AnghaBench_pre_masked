
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
struct TYPE_11__ {TYPE_4__* msix; int used_cnt; } ;
struct TYPE_7__ {int num_hwfns; } ;
struct TYPE_8__ {TYPE_1__ common; } ;
struct qedi_ctx {TYPE_5__ int_info; int dbg_ctx; int * fp_array; int cdev; TYPE_2__ dev_info; } ;
struct TYPE_12__ {TYPE_3__* common; } ;
struct TYPE_10__ {int vector; } ;
struct TYPE_9__ {size_t (* get_affin_hwfn_idx ) (int ) ;} ;


 int FUNC_0 (struct qedi_ctx*) ;
 int FUNC_1 (int *,int ,char*,int,size_t) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_7 (struct qedi_ctx*) ;
 int FUNC_8 (int ,int ,int ,char*,int *) ;
 size_t FUNC_9 (int ) ;
 size_t FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct qedi_ctx *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 u16 VAR_8;

 VAR_7 = FUNC_3(VAR_1);
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++) {
  VAR_8 = VAR_5 * VAR_4->dev_info.common.num_hwfns +
     VAR_3->common->get_affin_hwfn_idx(VAR_4->cdev);

  FUNC_1(&VAR_4->dbg_ctx, VAR_0,
     "dev_info: num_hwfns=%d affin_hwfn_idx=%d.\n",
     VAR_4->dev_info.common.num_hwfns,
     VAR_3->common->get_affin_hwfn_idx(VAR_4->cdev));

  VAR_6 = FUNC_8(VAR_4->int_info.msix[VAR_8].vector,
     VAR_2, 0, "qedi",
     &VAR_4->fp_array[VAR_5]);
  if (VAR_6) {
   FUNC_2(&VAR_4->dbg_ctx, "request_irq failed.\n");
   FUNC_7(VAR_4);
   return VAR_6;
  }
  VAR_4->int_info.used_cnt++;
  VAR_6 = FUNC_6(VAR_4->int_info.msix[VAR_8].vector,
        FUNC_5(VAR_7));
  VAR_7 = FUNC_4(VAR_7, VAR_1);
 }

 return 0;
}
