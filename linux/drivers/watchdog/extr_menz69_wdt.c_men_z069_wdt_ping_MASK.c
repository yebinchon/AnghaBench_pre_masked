
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct watchdog_device {int dummy; } ;
struct men_z069_drv {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct men_z069_drv* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_1)
{
 struct men_z069_drv *VAR_2 = FUNC_1(VAR_1);
 u16 VAR_3;


 VAR_3 = FUNC_0(VAR_2->base + VAR_0);
 VAR_3 ^= 0xffff;
 FUNC_2(VAR_3, VAR_2->base + VAR_0);

 return 0;
}
