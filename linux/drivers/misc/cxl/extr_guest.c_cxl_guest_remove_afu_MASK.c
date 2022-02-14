
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cxl_afu {size_t slice; int dev; int current_mode; TYPE_1__* adapter; TYPE_2__* guest; } ;
struct TYPE_6__ {int (* afu_deactivate_mode ) (struct cxl_afu*,int ) ;} ;
struct TYPE_5__ {int handle_err; int work_err; } ;
struct TYPE_4__ {int afu_list_lock; int ** afu; } ;


 int FUNC_0 (struct cxl_afu*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (struct cxl_afu*) ;
 int FUNC_2 (struct cxl_afu*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cxl_afu*) ;
 int FUNC_6 (struct cxl_afu*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct cxl_afu*,int ) ;

void FUNC_10(struct cxl_afu *VAR_1)
{
 if (!VAR_1)
  return;


 VAR_1->guest->handle_err = 0;
 FUNC_4(&VAR_1->guest->work_err);

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);

 FUNC_7(&VAR_1->adapter->afu_list_lock);
 VAR_1->adapter->afu[VAR_1->slice] = ((void*)0);
 FUNC_8(&VAR_1->adapter->afu_list_lock);

 FUNC_0(VAR_1);
 VAR_0->afu_deactivate_mode(VAR_1, VAR_1->current_mode);
 FUNC_5(VAR_1);
 FUNC_6(VAR_1);

 FUNC_3(&VAR_1->dev);
}
