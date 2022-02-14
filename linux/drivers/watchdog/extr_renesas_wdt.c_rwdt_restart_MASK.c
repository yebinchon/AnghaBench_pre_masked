
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct rwdt_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (struct rwdt_priv*,int,int ) ;
 struct rwdt_priv* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_1, unsigned long VAR_2,
   void *VAR_3)
{
 struct rwdt_priv *VAR_4 = FUNC_2(VAR_1);

 FUNC_0(VAR_1);
 FUNC_1(VAR_4, 0xffff, VAR_0);
 return 0;
}
