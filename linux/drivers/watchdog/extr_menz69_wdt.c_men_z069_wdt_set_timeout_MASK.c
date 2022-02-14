
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct watchdog_device {unsigned int timeout; } ;
struct men_z069_drv {scalar_t__ base; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct men_z069_drv* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_4,
        unsigned int VAR_5)
{
 struct men_z069_drv *VAR_6 = FUNC_1(VAR_4);
 u16 VAR_7, VAR_8, VAR_9;

 VAR_4->timeout = VAR_5;
 VAR_8 = VAR_5 * VAR_0;

 VAR_7 = FUNC_0(VAR_6->base + VAR_3);
 VAR_9 = VAR_7 & VAR_2;
 VAR_7 = VAR_9 | VAR_8;
 FUNC_2(VAR_7, VAR_6->base + VAR_1);

 return 0;
}
