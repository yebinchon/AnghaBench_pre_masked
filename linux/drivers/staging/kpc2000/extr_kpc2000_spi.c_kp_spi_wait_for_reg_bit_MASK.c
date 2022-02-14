
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kp_spi_controller_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (struct kp_spi_controller_state*,int) ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct kp_spi_controller_state *VAR_2, int VAR_3,
   unsigned long VAR_4)
{
 unsigned long VAR_5;

 VAR_5 = VAR_1 + FUNC_2(1000);
 while (!(FUNC_1(VAR_2, VAR_3) & VAR_4)) {
  if (FUNC_3(VAR_1, VAR_5)) {
   if (!(FUNC_1(VAR_2, VAR_3) & VAR_4))
    return -VAR_0;
   else
    return 0;
  }
  FUNC_0();
 }
 return 0;
}
