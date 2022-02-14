
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_1(u32 VAR_0, u32 VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 if (VAR_0 != *VAR_2 || VAR_1 != *VAR_3) {
  FUNC_0("Cropped size has been modified from %dx%d to %dx%d",
       *VAR_2, *VAR_3, VAR_0, VAR_1);
  *VAR_2 = VAR_0;
  *VAR_3 = VAR_1;
 }
}
