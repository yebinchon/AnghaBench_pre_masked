
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (struct dst_state*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct dst_state *VAR_1, u8 VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 200; VAR_4++) {
  if (FUNC_1(VAR_1, &VAR_3) < 0) {
   FUNC_3("dst_gpio_inb ERROR !\n");
   return -1;
  }
  if ((VAR_3 & VAR_0) == 0) {
   FUNC_0(2, "dst wait ready after %d\n", VAR_4);
   return 1;
  }
  FUNC_2(10);
 }
 FUNC_0(1, "dst wait NOT ready after %d\n", VAR_4);

 return 0;
}
