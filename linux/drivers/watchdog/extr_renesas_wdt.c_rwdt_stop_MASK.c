
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int parent; } ;
struct rwdt_priv {int cks; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rwdt_priv*,int) ;
 int FUNC_2 (struct rwdt_priv*,int ,int ) ;
 struct rwdt_priv* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_1)
{
 struct rwdt_priv *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_2, VAR_2->cks, VAR_0);

 FUNC_1(VAR_2, 3);
 FUNC_0(VAR_1->parent);

 return 0;
}
