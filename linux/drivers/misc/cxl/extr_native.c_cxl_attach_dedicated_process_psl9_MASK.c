
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
struct cxl_context {TYPE_1__* elem; struct cxl_afu* afu; } ;
struct cxl_afu {TYPE_4__* adapter; } ;
struct TYPE_10__ {int (* afu_reset ) (struct cxl_afu*) ;} ;
struct TYPE_9__ {TYPE_3__* native; } ;
struct TYPE_8__ {TYPE_2__* sl_ops; } ;
struct TYPE_7__ {int (* update_dedicated_ivtes ) (struct cxl_context*) ;} ;
struct TYPE_6__ {int software_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxl_afu*) ;
 int FUNC_1 (int ) ;
 TYPE_5__* VAR_1 ;
 int FUNC_2 (struct cxl_context*,int ,int ) ;
 int FUNC_3 (struct cxl_context*) ;
 int FUNC_4 (struct cxl_afu*) ;

int FUNC_5(struct cxl_context *VAR_2, u64 VAR_3, u64 VAR_4)
{
 struct cxl_afu *VAR_5 = VAR_2->afu;
 int VAR_6;


 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 if (VAR_2->afu->adapter->native->sl_ops->update_dedicated_ivtes)
  VAR_5->adapter->native->sl_ops->update_dedicated_ivtes(VAR_2);

 VAR_2->elem->software_state = FUNC_1(VAR_0);







 VAR_6 = VAR_1->afu_reset(VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_0(VAR_5);
}
