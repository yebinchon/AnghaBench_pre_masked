
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ehrpwm_pwm_chip {scalar_t__* polarity; int mmio_base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_1(struct ehrpwm_pwm_chip *VAR_11, int VAR_12)
{
 u16 VAR_13, VAR_14;
 unsigned int VAR_15;







 if (VAR_12 == 1) {
  VAR_15 = VAR_1;
  VAR_14 = VAR_3;

  if (VAR_11->polarity[VAR_12] == VAR_10)
   VAR_13 = VAR_6;
  else
   VAR_13 = VAR_7;
 } else {
  VAR_15 = VAR_0;
  VAR_14 = VAR_2;

  if (VAR_11->polarity[VAR_12] == VAR_10)
   VAR_13 = VAR_4;
  else
   VAR_13 = VAR_5;
 }

 VAR_14 |= VAR_8 | VAR_9;
 FUNC_0(VAR_11->mmio_base, VAR_15, VAR_14, VAR_13);
}
