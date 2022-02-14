
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int release; int * parent; } ;
struct cxl_afu {int slice; struct cxl* adapter; int irqs_max; int prefault_mode; int configured_state; int afu_cntl_lock; int contexts_lock; int contexts_idr; TYPE_1__ dev; } ;
struct cxl {int user_irqs; int dev; } ;
struct TYPE_4__ {int release_afu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int *) ;
 struct cxl_afu* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct cxl_afu *FUNC_5(struct cxl *VAR_3, int VAR_4)
{
 struct cxl_afu *VAR_5;

 if (!(VAR_5 = FUNC_2(sizeof(struct cxl_afu), VAR_1)))
  return ((void*)0);

 VAR_5->adapter = VAR_3;
 VAR_5->dev.parent = &VAR_3->dev;
 VAR_5->dev.release = VAR_2->release_afu;
 VAR_5->slice = VAR_4;
 FUNC_1(&VAR_5->contexts_idr);
 FUNC_3(&VAR_5->contexts_lock);
 FUNC_4(&VAR_5->afu_cntl_lock);
 FUNC_0(&VAR_5->configured_state, -1);
 VAR_5->prefault_mode = VAR_0;
 VAR_5->irqs_max = VAR_5->adapter->user_irqs;

 return VAR_5;
}
