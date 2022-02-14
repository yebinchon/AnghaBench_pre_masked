
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dst_state*,int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dst_state *VAR_2)
{
 if (FUNC_0(VAR_2, ~0, VAR_1, 0, VAR_0) < 0) {
  FUNC_1("dst_gpio_outb ERROR !\n");
  return -1;
 }
 FUNC_2(1000);

 return 0;
}
