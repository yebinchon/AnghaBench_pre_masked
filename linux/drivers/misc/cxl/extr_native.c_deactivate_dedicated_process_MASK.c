
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_afu {scalar_t__ num_procs; scalar_t__ current_mode; int dev; } ;


 int FUNC_0 (struct cxl_afu*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct cxl_afu *VAR_0)
{
 FUNC_1(&VAR_0->dev, "Deactivating dedicated process mode\n");

 VAR_0->current_mode = 0;
 VAR_0->num_procs = 0;

 FUNC_0(VAR_0);

 return 0;
}
