
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct octeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct octeon_device*,int ) ;

u32 FUNC_1(struct octeon_device *VAR_1)
{



 return ((FUNC_0(VAR_1, VAR_0) >> 24) & 0x3f) * 50;
}
