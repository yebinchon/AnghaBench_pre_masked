
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct watchdog_device {int dummy; } ;
struct rwdt_priv {scalar_t__ base; } ;


 unsigned int FUNC_0 (struct rwdt_priv*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct rwdt_priv* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_3(struct watchdog_device *VAR_1)
{
 struct rwdt_priv *VAR_2 = FUNC_2(VAR_1);
 u16 VAR_3 = FUNC_1(VAR_2->base + VAR_0);

 return FUNC_0(VAR_2, 65536 - VAR_3);
}
