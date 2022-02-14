
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int parent; } ;
struct rwdt_priv {int cks; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct watchdog_device*) ;
 int FUNC_4 (struct rwdt_priv*,int) ;
 int FUNC_5 (struct rwdt_priv*,int,scalar_t__) ;
 struct rwdt_priv* FUNC_6 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_7(struct watchdog_device *VAR_4)
{
 struct rwdt_priv *VAR_5 = FUNC_6(VAR_4);
 u8 VAR_6;

 FUNC_1(VAR_4->parent);


 VAR_6 = FUNC_2(VAR_5->base + VAR_0) & ~VAR_1;
 FUNC_5(VAR_5, VAR_6, VAR_0);

 FUNC_4(VAR_5, 2);

 FUNC_3(VAR_4);
 FUNC_5(VAR_5, VAR_5->cks, VAR_0);
 FUNC_5(VAR_5, 0, VAR_3);

 while (FUNC_2(VAR_5->base + VAR_0) & VAR_2)
  FUNC_0();

 FUNC_5(VAR_5, VAR_5->cks | VAR_1, VAR_0);

 return 0;
}
