
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_afu {scalar_t__ pp_irqs; int max_procs_virtualised; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct cxl_afu *VAR_1)
{
 if (VAR_1->pp_irqs < 0) {
  FUNC_0(&VAR_1->dev, "Unexpected per-process minimum interrupt value\n");
  return -VAR_0;
 }

 if (VAR_1->max_procs_virtualised < 1) {
  FUNC_0(&VAR_1->dev, "Unexpected max number of processes virtualised value\n");
  return -VAR_0;
 }

 return 0;
}
