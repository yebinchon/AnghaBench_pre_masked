
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct octeon_device {int octeon_id; } ;


 size_t VAR_0 ;
 struct octeon_device** VAR_1 ;

int FUNC_0(void *VAR_2)
{
 struct octeon_device *VAR_3 = (struct octeon_device *)VAR_2;
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_1[VAR_4] == VAR_3)
   return VAR_3->octeon_id;
 return -1;
}
