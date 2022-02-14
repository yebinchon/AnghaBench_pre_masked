
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct cxl_context {struct cxl_afu* afu; int sstp1; int sstp0; scalar_t__ kernel; } ;
struct cxl_afu {TYPE_3__* adapter; } ;
struct TYPE_10__ {scalar_t__ pid; } ;
struct TYPE_9__ {int (* afu_reset ) (struct cxl_afu*) ;} ;
struct TYPE_8__ {TYPE_2__* native; } ;
struct TYPE_7__ {TYPE_1__* sl_ops; } ;
struct TYPE_6__ {int (* update_dedicated_ivtes ) (struct cxl_context*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxl_afu*) ;
 int FUNC_1 (struct cxl_context*) ;
 TYPE_5__* VAR_4 ;
 int FUNC_2 (struct cxl_context*) ;
 TYPE_4__* VAR_5 ;
 int FUNC_3 (struct cxl_afu*,int ,int ) ;
 int FUNC_4 (struct cxl_afu*,int ,int) ;
 int FUNC_5 (struct cxl_context*,int) ;
 int FUNC_6 (struct cxl_afu*,int ,int ) ;
 int FUNC_7 (struct cxl_context*) ;
 int FUNC_8 (struct cxl_afu*) ;

int FUNC_9(struct cxl_context *VAR_6, u64 VAR_7, u64 VAR_8)
{
 struct cxl_afu *VAR_9 = VAR_6->afu;
 u64 VAR_10;
 int VAR_11;

 VAR_10 = (u64)VAR_4->pid << 32;
 if (VAR_6->kernel)
  VAR_10 = 0;
 FUNC_4(VAR_9, VAR_1, VAR_10);

 FUNC_3(VAR_9, VAR_2, FUNC_1(VAR_6));

 if ((VAR_11 = FUNC_6(VAR_9, VAR_6->sstp0, VAR_6->sstp1)))
  return VAR_11;

 FUNC_5(VAR_6, VAR_7);

 if (VAR_6->afu->adapter->native->sl_ops->update_dedicated_ivtes)
  VAR_9->adapter->native->sl_ops->update_dedicated_ivtes(VAR_6);

 FUNC_4(VAR_9, VAR_0, VAR_8);


 FUNC_2(VAR_6);

 if ((VAR_11 = VAR_5->afu_reset(VAR_9)))
  return VAR_11;

 FUNC_4(VAR_9, VAR_3, VAR_7);

 return FUNC_0(VAR_9);
}
