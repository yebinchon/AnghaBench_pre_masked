
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int peb_count; scalar_t__ nor_flash; scalar_t__ ro_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubi_device*,int) ;
 int FUNC_1 (struct ubi_device*,int) ;
 int FUNC_2 (struct ubi_device*,int) ;
 int FUNC_3 (struct ubi_device*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ubi_device*,char*) ;

int FUNC_6(struct ubi_device *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 FUNC_4(VAR_2 >= 0 && VAR_2 < VAR_1->peb_count);

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4 != 0)
  return VAR_4;

 if (VAR_1->ro_mode) {
  FUNC_5(VAR_1, "read-only mode");
  return -VAR_0;
 }

 if (VAR_1->nor_flash) {
  VAR_4 = FUNC_1(VAR_1, VAR_2);
  if (VAR_4)
   return VAR_4;
 }

 if (VAR_3) {
  VAR_5 = FUNC_3(VAR_1, VAR_2);
  if (VAR_5 < 0)
   return VAR_5;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 return VAR_5 + 1;
}
