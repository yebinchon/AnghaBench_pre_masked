
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_16__ {int* range; int * offset; } ;
struct cxl_context {TYPE_8__* afu; TYPE_7__* elem; TYPE_5__ irqs; scalar_t__ sstp1; scalar_t__ sstp0; scalar_t__ kernel; } ;
struct TYPE_20__ {int (* afu_check_and_enable ) (TYPE_8__*) ;} ;
struct TYPE_19__ {TYPE_4__* native; } ;
struct TYPE_13__ {void* sstp1; void* sstp0; scalar_t__ aurp1; scalar_t__ aurp0; } ;
struct TYPE_14__ {TYPE_2__ psl8; } ;
struct TYPE_17__ {void* wed; void* amr; TYPE_3__ u; scalar_t__ csrp; void* pid; scalar_t__ tid; } ;
struct TYPE_12__ {void* sdr; } ;
struct TYPE_18__ {TYPE_6__ common; void* sr; TYPE_1__ u; scalar_t__ haurp; void* lpid; scalar_t__ ctxtime; } ;
struct TYPE_15__ {int psl_hwirq; } ;
struct TYPE_11__ {scalar_t__ pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxl_context*) ;
 scalar_t__ FUNC_1 (struct cxl_context*) ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 TYPE_10__* VAR_2 ;
 int FUNC_4 (struct cxl_context*) ;
 TYPE_9__* VAR_3 ;
 int FUNC_5 (struct cxl_context*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (struct cxl_context*) ;

int FUNC_9(struct cxl_context *VAR_4, u64 VAR_5, u64 VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 FUNC_4(VAR_4);

 VAR_4->elem->ctxtime = 0;
 VAR_4->elem->lpid = FUNC_2(FUNC_6(VAR_0));
 VAR_4->elem->haurp = 0;
 VAR_4->elem->u.sdr = FUNC_3(FUNC_6(VAR_1));

 VAR_7 = VAR_2->pid;
 if (VAR_4->kernel)
  VAR_7 = 0;
 VAR_4->elem->common.tid = 0;
 VAR_4->elem->common.pid = FUNC_2(VAR_7);

 VAR_4->elem->sr = FUNC_3(FUNC_1(VAR_4));

 VAR_4->elem->common.csrp = 0;
 VAR_4->elem->common.u.psl8.aurp0 = 0;
 VAR_4->elem->common.u.psl8.aurp1 = 0;

 FUNC_5(VAR_4, VAR_5);

 VAR_4->elem->common.u.psl8.sstp0 = FUNC_3(VAR_4->sstp0);
 VAR_4->elem->common.u.psl8.sstp1 = FUNC_3(VAR_4->sstp1);





 if (VAR_4->irqs.range[0] == 0) {
  VAR_4->irqs.offset[0] = VAR_4->afu->native->psl_hwirq;
  VAR_4->irqs.range[0] = 1;
 }

 FUNC_8(VAR_4);

 VAR_4->elem->common.amr = FUNC_3(VAR_6);
 VAR_4->elem->common.wed = FUNC_3(VAR_5);


 if ((VAR_8 = VAR_3->afu_check_and_enable(VAR_4->afu)))
  return VAR_8;

 return FUNC_0(VAR_4);
}
