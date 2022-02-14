
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct octeon_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct octeon_device*) ;
 int FUNC_1 (struct octeon_device*,int ) ;
 int FUNC_2 (struct octeon_device*,int ,int) ;

void FUNC_3(struct octeon_device *VAR_1,
       u32 VAR_2,
       u32 VAR_3)
{
 u32 VAR_4 = 0;


 if (FUNC_0(VAR_1)) {
  VAR_4 = FUNC_1(VAR_1, VAR_0);

  if (VAR_3)
   VAR_4 = VAR_4 | (1 << VAR_2);
  else
   VAR_4 = VAR_4 & (~(1 << VAR_2));

  FUNC_2(VAR_1, VAR_0, VAR_4);
 }
}
