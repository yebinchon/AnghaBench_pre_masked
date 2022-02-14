
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int power_gpio; } ;
struct sdio_func {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*) ;
 struct sdio_func* FUNC_8 (struct wl1251*) ;

__attribute__((used)) static int FUNC_9(struct wl1251 *VAR_0, bool VAR_1)
{
 struct sdio_func *VAR_2 = FUNC_8(VAR_0);
 int VAR_3;

 if (VAR_1) {





  if (FUNC_0(VAR_0->power_gpio))
   FUNC_1(VAR_0->power_gpio, 1);


  VAR_3 = FUNC_2(&VAR_2->dev);
  if (VAR_3 < 0) {
   FUNC_3(&VAR_2->dev);
   goto out;
  }

  FUNC_4(VAR_2);
  FUNC_6(VAR_2);
  FUNC_7(VAR_2);
 } else {
  FUNC_4(VAR_2);
  FUNC_5(VAR_2);
  FUNC_7(VAR_2);

  VAR_3 = FUNC_3(&VAR_2->dev);
  if (VAR_3 < 0)
   goto out;

  if (FUNC_0(VAR_0->power_gpio))
   FUNC_1(VAR_0->power_gpio, 0);
 }

out:
 return VAR_3;
}
