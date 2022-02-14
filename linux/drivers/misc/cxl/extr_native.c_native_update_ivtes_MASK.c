
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cxl_context {TYPE_2__* afu; } ;
struct TYPE_8__ {TYPE_3__* sl_ops; } ;
struct TYPE_7__ {void (* update_dedicated_ivtes ) (struct cxl_context*) ;} ;
struct TYPE_6__ {scalar_t__ current_mode; TYPE_1__* adapter; } ;
struct TYPE_5__ {TYPE_4__* native; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 void FUNC_1 (struct cxl_context*) ;
 void FUNC_2 (struct cxl_context*) ;

__attribute__((used)) static void FUNC_3(struct cxl_context *VAR_2)
{
 if (VAR_2->afu->current_mode == VAR_1)
  return FUNC_2(VAR_2);
 if ((VAR_2->afu->current_mode == VAR_0) &&
     (VAR_2->afu->adapter->native->sl_ops->update_dedicated_ivtes))
  return VAR_2->afu->adapter->native->sl_ops->update_dedicated_ivtes(VAR_2);
 FUNC_0(1, "native_update_ivtes: Bad mode\n");
}
