
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl_gpio_cfg {int pin; int dir; int val; } ;
struct mxl111sf_state {int dummy; } ;


 int FUNC_0 (struct mxl111sf_state*,struct mxl_gpio_cfg*) ;
 int FUNC_1 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct mxl111sf_state *VAR_0,
       int VAR_1, int VAR_2, int VAR_3)
{
 struct mxl_gpio_cfg VAR_4 = {
  .pin = VAR_1,
  .dir = VAR_2,
  .val = VAR_3,
 };

 FUNC_1("(%d, %d, %d)", VAR_1, VAR_2, VAR_3);

 return FUNC_0(VAR_0, &VAR_4);
}
