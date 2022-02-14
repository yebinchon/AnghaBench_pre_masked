
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc {scalar_t__ suspend_event; int rtc_clk; } ;
struct sdio_func {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct wilc*) ;
 int FUNC_2 (struct wilc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct device*,char*) ;
 struct sdio_func* FUNC_6 (struct device*) ;
 int FUNC_7 (struct wilc*) ;
 int FUNC_8 (struct sdio_func*) ;
 struct wilc* FUNC_9 (struct sdio_func*) ;
 int FUNC_10 (struct wilc*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_0)
{
 struct sdio_func *VAR_1 = FUNC_6(VAR_0);
 struct wilc *VAR_2 = FUNC_9(VAR_1);
 int VAR_3;

 FUNC_5(VAR_0, "sdio suspend\n");
 FUNC_2(VAR_2);

 if (!FUNC_0(VAR_2->rtc_clk))
  FUNC_3(VAR_2->rtc_clk);

 if (VAR_2->suspend_event) {
  FUNC_7(VAR_2);
  FUNC_1(VAR_2);
 }

 VAR_3 = FUNC_10(VAR_2);
 if (VAR_3) {
  FUNC_4(&VAR_1->dev, "Fail reset sdio\n");
  return VAR_3;
 }
 FUNC_8(VAR_1);

 return 0;
}
