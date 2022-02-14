
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
struct cxl_context {int kernel; TYPE_4__* afu; } ;
struct TYPE_10__ {int (* link_ok ) (TYPE_3__*,TYPE_4__*) ;} ;
struct TYPE_9__ {scalar_t__ current_mode; TYPE_3__* adapter; } ;
struct TYPE_8__ {TYPE_2__* native; } ;
struct TYPE_7__ {TYPE_1__* sl_ops; } ;
struct TYPE_6__ {int (* attach_afu_directed ) (struct cxl_context*,int ,int ) ;int (* attach_dedicated_process ) (struct cxl_context*,int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 TYPE_5__* VAR_4 ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (struct cxl_context*,int ,int ) ;
 int FUNC_3 (struct cxl_context*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct cxl_context *VAR_5, bool VAR_6,
    u64 VAR_7, u64 VAR_8)
{
 if (!VAR_4->link_ok(VAR_5->afu->adapter, VAR_5->afu)) {
  FUNC_0(1, "Device link is down, refusing to attach process!\n");
  return -VAR_3;
 }

 VAR_5->kernel = VAR_6;
 if ((VAR_5->afu->current_mode == VAR_1) &&
     (VAR_5->afu->adapter->native->sl_ops->attach_afu_directed))
  return VAR_5->afu->adapter->native->sl_ops->attach_afu_directed(VAR_5, VAR_7, VAR_8);

 if ((VAR_5->afu->current_mode == VAR_0) &&
     (VAR_5->afu->adapter->native->sl_ops->attach_dedicated_process))
  return VAR_5->afu->adapter->native->sl_ops->attach_dedicated_process(VAR_5, VAR_7, VAR_8);

 return -VAR_2;
}
