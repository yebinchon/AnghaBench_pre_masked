
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct octeon_device {int dummy; } ;


 size_t VAR_0 ;
 struct octeon_device** VAR_1 ;

struct octeon_device *FUNC_0(u32 VAR_2)
{
 if (VAR_2 >= VAR_0)
  return ((void*)0);
 else
  return VAR_1[VAR_2];
}
