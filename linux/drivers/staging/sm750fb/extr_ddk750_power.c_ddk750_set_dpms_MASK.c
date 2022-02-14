
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dpms { ____Placeholder_dpms } dpms ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(enum dpms VAR_6)
{
 unsigned int VAR_7;

 if (FUNC_2() == VAR_3) {
  VAR_7 = FUNC_0(VAR_0) & ~VAR_1;
  VAR_7 |= (VAR_6 << VAR_2);
  FUNC_1(VAR_0, VAR_7);
 } else {
  VAR_7 = FUNC_0(VAR_4);
  VAR_7 = (VAR_7 & ~VAR_5) | VAR_6;
  FUNC_1(VAR_4, VAR_7);
 }
}
