
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_afu {int current_mode; TYPE_1__* native; int max_procs_virtualised; int num_procs; int dev; } ;
struct TYPE_2__ {int * spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cxl_afu*) ;
 scalar_t__ FUNC_1 (struct cxl_afu*,int ) ;
 int FUNC_2 (struct cxl_afu*) ;
 int FUNC_3 (struct cxl_afu*) ;
 int FUNC_4 (struct cxl_afu*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct cxl_afu*,int ,int) ;
 int FUNC_7 (struct cxl_afu*) ;
 int FUNC_8 (struct cxl_afu*) ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static int FUNC_10(struct cxl_afu *VAR_8)
{
 int VAR_9;

 FUNC_9(&VAR_8->dev, "Activating AFU directed mode\n");

 VAR_8->num_procs = VAR_8->max_procs_virtualised;
 if (VAR_8->native->spa == ((void*)0)) {
  if (FUNC_1(VAR_8, VAR_0))
   return -VAR_7;
 }
 FUNC_0(VAR_8);

 FUNC_6(VAR_8, VAR_5, VAR_6);
 if (FUNC_5())
  FUNC_6(VAR_8, VAR_1, 0xFFFFFFFFFFFFFFFFULL);
 FUNC_6(VAR_8, VAR_2, VAR_3 | VAR_4);

 VAR_8->current_mode = VAR_0;

 if ((VAR_9 = FUNC_3(VAR_8)))
  return VAR_9;

 if ((VAR_9 = FUNC_7(VAR_8)))
  goto err;

 if ((VAR_9 = FUNC_4(VAR_8)))
  goto err1;

 return 0;
err1:
 FUNC_8(VAR_8);
err:
 FUNC_2(VAR_8);
 return VAR_9;
}
