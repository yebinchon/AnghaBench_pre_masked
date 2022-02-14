
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_afu {scalar_t__ num_procs; scalar_t__ current_mode; int slice; int dev; } ;
struct TYPE_2__ {int (* afu_reset ) (struct cxl_afu*) ;} ;


 int FUNC_0 (struct cxl_afu*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct cxl_afu*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct cxl_afu*) ;

__attribute__((used)) static int FUNC_4(struct cxl_afu *VAR_1)
{
 FUNC_2(&VAR_1->dev, "Deactivating AFU(%d) directed mode\n", VAR_1->slice);

 VAR_1->current_mode = 0;
 VAR_1->num_procs = 0;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);

 VAR_0->afu_reset(VAR_1);

 return 0;
}
