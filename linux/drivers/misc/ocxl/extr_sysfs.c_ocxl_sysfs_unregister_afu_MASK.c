
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocxl_file_info {int attr_global_mmio; int dev; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(struct ocxl_file_info *VAR_1)
{
 int VAR_2;





 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  FUNC_2(&VAR_1->dev, &VAR_0[VAR_2]);
 FUNC_1(&VAR_1->dev, &VAR_1->attr_global_mmio);
}
