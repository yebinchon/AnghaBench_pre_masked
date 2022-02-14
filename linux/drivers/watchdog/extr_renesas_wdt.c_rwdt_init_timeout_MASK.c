
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct rwdt_priv {int dummy; } ;


 scalar_t__ FUNC_0 (struct rwdt_priv*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct rwdt_priv*,scalar_t__,int ) ;
 struct rwdt_priv* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_1)
{
 struct rwdt_priv *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2, 65536 - FUNC_0(VAR_2, VAR_1->timeout), VAR_0);

 return 0;
}
