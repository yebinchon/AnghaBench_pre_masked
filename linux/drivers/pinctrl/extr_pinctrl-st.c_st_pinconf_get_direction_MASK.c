
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_pio_control {scalar_t__ od; scalar_t__ pu; scalar_t__ oe; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (scalar_t__,unsigned int*) ;

__attribute__((used)) static void FUNC_5(struct st_pio_control *VAR_0,
 int VAR_1, unsigned long *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;

 if (VAR_0->oe) {
  FUNC_4(VAR_0->oe, &VAR_3);
  if (VAR_3 & FUNC_0(VAR_1))
   FUNC_2(*VAR_2);
 }

 if (VAR_0->pu) {
  FUNC_4(VAR_0->pu, &VAR_4);
  if (VAR_4 & FUNC_0(VAR_1))
   FUNC_3(*VAR_2);
 }

 if (VAR_0->od) {
  FUNC_4(VAR_0->od, &VAR_5);
  if (VAR_5 & FUNC_0(VAR_1))
   FUNC_1(*VAR_2);
 }
}
