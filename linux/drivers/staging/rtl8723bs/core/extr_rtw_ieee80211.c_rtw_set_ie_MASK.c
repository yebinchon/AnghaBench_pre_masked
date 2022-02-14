
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef scalar_t__ u8 ;
typedef scalar_t__ sint ;


 int FUNC_0 (void*,void*,scalar_t__) ;

u8 *FUNC_1
(
 u8 *VAR_0,
 sint VAR_1,
 uint VAR_2,
 u8 *VAR_3,
 uint *VAR_4
)
{
 *VAR_0 = (u8)VAR_1;

 *(VAR_0 + 1) = (u8)VAR_2;

 if (VAR_2 > 0)
  FUNC_0((void *)(VAR_0 + 2), (void *)VAR_3, VAR_2);

 *VAR_4 = *VAR_4 + (VAR_2 + 2);

 return VAR_0 + VAR_2 + 2;
}
