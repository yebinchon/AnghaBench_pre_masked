
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocxl_file_info {int dev; } ;
struct ocxl_afu {int dummy; } ;


 int FUNC_0 (int *) ;
 struct ocxl_file_info* FUNC_1 (struct ocxl_afu*) ;
 int FUNC_2 (struct ocxl_file_info*) ;
 int FUNC_3 (struct ocxl_file_info*) ;

void FUNC_4(struct ocxl_afu *VAR_0)
{
 struct ocxl_file_info *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  return;

 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 FUNC_0(&VAR_1->dev);
}
