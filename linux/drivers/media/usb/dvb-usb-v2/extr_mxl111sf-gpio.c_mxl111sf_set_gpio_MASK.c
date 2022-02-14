
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl111sf_state {int gpio_port_expander; } ;


 int VAR_0 ;


 int FUNC_0 (struct mxl111sf_state*,int,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mxl111sf_state*,int,int) ;

int FUNC_4(struct mxl111sf_state *VAR_1, int VAR_2, int VAR_3)
{
 FUNC_1("(%d, %d)", VAR_2, VAR_3);

 switch (VAR_1->gpio_port_expander) {
 default:
  FUNC_2(VAR_0,
      "gpio_port_expander undefined, assuming PCA9534");

 case 129:
  return FUNC_3(VAR_1, VAR_2, VAR_3);
 case 128:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 }
}
