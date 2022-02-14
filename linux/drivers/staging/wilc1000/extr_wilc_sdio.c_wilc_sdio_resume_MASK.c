
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc {scalar_t__ suspend_event; } ;
struct sdio_func {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct wilc*) ;
 int FUNC_1 (struct wilc*) ;
 int FUNC_2 (struct device*,char*) ;
 struct sdio_func* FUNC_3 (struct device*) ;
 int FUNC_4 (struct wilc*) ;
 struct wilc* FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct wilc*,int) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_0)
{
 struct sdio_func *VAR_1 = FUNC_3(VAR_0);
 struct wilc *VAR_2 = FUNC_5(VAR_1);

 FUNC_2(VAR_0, "sdio resume\n");
 FUNC_6(VAR_1);
 FUNC_1(VAR_2);
 FUNC_7(VAR_2, 1);

 if (VAR_2->suspend_event)
  FUNC_4(VAR_2);

 FUNC_0(VAR_2);

 return 0;
}
