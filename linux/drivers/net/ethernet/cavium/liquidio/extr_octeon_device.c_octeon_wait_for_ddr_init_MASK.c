
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct octeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct octeon_device*) ;
 int FUNC_1 (int) ;

int FUNC_2(struct octeon_device *VAR_1, u32 *VAR_2)
{
 int VAR_3 = 1;
 u32 VAR_4;

 if (!VAR_2)
  return VAR_3;

 for (VAR_4 = 0; (VAR_3 != 0) && ((*VAR_2 == 0) || (VAR_4 <= *VAR_2));
      VAR_4 += VAR_0 / 10) {
  VAR_3 = FUNC_0(VAR_1);


  if (VAR_3)
   FUNC_1(VAR_0 / 10);
 }

 return VAR_3;
}
