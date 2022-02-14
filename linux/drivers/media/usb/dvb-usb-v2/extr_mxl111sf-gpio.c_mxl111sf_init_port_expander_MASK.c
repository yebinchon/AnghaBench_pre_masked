
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl111sf_state {int port_expander_addr; int gpio_port_expander; } ;


 int VAR_0 ;


 int FUNC_0 (struct mxl111sf_state*) ;
 int FUNC_1 (struct mxl111sf_state*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct mxl111sf_state*) ;

int FUNC_5(struct mxl111sf_state *VAR_1)
{
 FUNC_2("()");

 if (0x00 == VAR_1->port_expander_addr)
  FUNC_1(VAR_1);

 switch (VAR_1->gpio_port_expander) {
 default:
  FUNC_3(VAR_0,
      "gpio_port_expander undefined, assuming PCA9534");

 case 129:
  return FUNC_4(VAR_1);
 case 128:
  return FUNC_0(VAR_1);
 }
}
