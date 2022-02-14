
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xwdt_device {int spinlock; scalar_t__ base; } ;
struct watchdog_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct xwdt_device* FUNC_4 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_3)
{
 u32 VAR_4;
 struct xwdt_device *VAR_5 = FUNC_4(VAR_3);

 FUNC_2(&VAR_5->spinlock);

 VAR_4 = FUNC_0(VAR_5->base + VAR_2);
 VAR_4 |= (VAR_1 | VAR_0);
 FUNC_1(VAR_4, VAR_5->base + VAR_2);

 FUNC_3(&VAR_5->spinlock);

 return 0;
}
