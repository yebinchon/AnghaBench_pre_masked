
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct dst_state*,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct dst_state *VAR_2)
{
 FUNC_0(2, "Resetting state machine\n");
 if (FUNC_1(VAR_2, VAR_1, VAR_1, 0, VAR_0) < 0) {
  FUNC_3("dst_gpio_outb ERROR !\n");
  return -1;
 }
 FUNC_2(10);
 if (FUNC_1(VAR_2, VAR_1, VAR_1, VAR_1, VAR_0) < 0) {
  FUNC_3("dst_gpio_outb ERROR !\n");
  FUNC_2(10);
  return -1;
 }

 return 0;
}
