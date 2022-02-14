
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_com_data {int dummy; } ;
struct adapter {int hal_data_sz; int HalData; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 int FUNC_2 (int) ;

u8 FUNC_3(struct adapter *VAR_2)
{
 if (FUNC_1(VAR_2)) {
  VAR_2->hal_data_sz = sizeof(struct hal_com_data);
  VAR_2->HalData = FUNC_2(VAR_2->hal_data_sz);
  if (!VAR_2->HalData) {
   FUNC_0("cannot alloc memory for HAL DATA\n");
   return VAR_0;
  }
 }
 return VAR_1;
}
