
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_afu {int max_procs_virtualised; int num_procs; int current_mode; int slice; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxl_afu*) ;
 int FUNC_1 (struct cxl_afu*) ;
 int FUNC_2 (struct cxl_afu*) ;
 int FUNC_3 (struct cxl_afu*) ;
 int FUNC_4 (struct cxl_afu*) ;
 int FUNC_5 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct cxl_afu *VAR_1)
{
 int VAR_2;

 FUNC_5(&VAR_1->dev, "Activating AFU(%d) directed mode\n", VAR_1->slice);

 VAR_1->current_mode = VAR_0;

 VAR_1->num_procs = VAR_1->max_procs_virtualised;

 if ((VAR_2 = FUNC_1(VAR_1)))
  return VAR_2;

 if ((VAR_2 = FUNC_3(VAR_1)))
  goto err;

 if ((VAR_2 = FUNC_2(VAR_1)))
  goto err1;

 return 0;
err1:
 FUNC_4(VAR_1);
err:
 FUNC_0(VAR_1);
 return VAR_2;
}
