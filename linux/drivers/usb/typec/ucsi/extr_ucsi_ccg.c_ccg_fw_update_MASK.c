
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucsi_ccg {int dev; } ;
typedef enum enum_flash_mode { ____Placeholder_enum_flash_mode } enum_flash_mode ;


 int VAR_0 ;
 int FUNC_0 (struct ucsi_ccg*,int*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ucsi_ccg*,int) ;

__attribute__((used)) static int FUNC_3(struct ucsi_ccg *VAR_1, enum enum_flash_mode VAR_2)
{
 int VAR_3 = 0;

 while (VAR_2 != VAR_0) {
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_3 = FUNC_0(VAR_1, &VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
 }
 FUNC_1(VAR_1->dev, "CCG FW update successful\n");

 return VAR_3;
}
