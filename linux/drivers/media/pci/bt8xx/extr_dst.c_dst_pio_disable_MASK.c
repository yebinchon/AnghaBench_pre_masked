
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int type_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dst_state*,int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;

int FUNC_3(struct dst_state *VAR_3)
{
 if (FUNC_0(VAR_3, ~0, VAR_2, VAR_2, VAR_1) < 0) {
  FUNC_1("dst_gpio_outb ERROR !\n");
  return -1;
 }
 if (VAR_3->type_flags & VAR_0)
  FUNC_2(1000);

 return 0;
}
