
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct dst_state*,int ,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dst_state *VAR_3)
{
 FUNC_0(3, "Resetting DST\n");
 if (FUNC_1(VAR_3, VAR_2, VAR_2, 0, VAR_1) < 0) {
  FUNC_2("dst_gpio_outb ERROR !\n");
  return -1;
 }
 FUNC_3(1000);
 if (FUNC_1(VAR_3, VAR_2, VAR_2, VAR_2, VAR_0) < 0) {
  FUNC_2("dst_gpio_outb ERROR !\n");
  return -1;
 }

 return 0;
}
