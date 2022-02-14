
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsaf_device {int dsaf_ver; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct dsaf_device*,scalar_t__,int ) ;

void FUNC_2(struct dsaf_device *VAR_2, int VAR_3,
      u32 *VAR_4)
{
 if (FUNC_0(VAR_2->dsaf_ver))
  *VAR_4 = 1;
 else
  *VAR_4 = FUNC_1(VAR_2,
           VAR_1 + VAR_3 * 4,
           VAR_0);
}
