
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cxl_afu {TYPE_3__* adapter; scalar_t__ num_procs; scalar_t__ current_mode; int dev; } ;
struct TYPE_8__ {int (* afu_reset ) (struct cxl_afu*) ;} ;
struct TYPE_7__ {TYPE_2__* native; } ;
struct TYPE_6__ {TYPE_1__* sl_ops; } ;
struct TYPE_5__ {scalar_t__ needs_reset_before_disable; } ;


 int FUNC_0 (struct cxl_afu*) ;
 int FUNC_1 (struct cxl_afu*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_2 (struct cxl_afu*) ;
 int FUNC_3 (struct cxl_afu*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct cxl_afu*) ;

__attribute__((used)) static int FUNC_6(struct cxl_afu *VAR_1)
{
 FUNC_4(&VAR_1->dev, "Deactivating AFU directed mode\n");

 VAR_1->current_mode = 0;
 VAR_1->num_procs = 0;

 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 if (VAR_1->adapter->native->sl_ops->needs_reset_before_disable)
  VAR_0->afu_reset(VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);

 return 0;
}
