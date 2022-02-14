
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ccdc_csc {TYPE_1__* coeff; int enable; } ;
struct TYPE_2__ {int integer; int decimal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ccdc_csc *VAR_9)
{
 u32 VAR_10 = 0, VAR_11;
 int VAR_12;

 if (!VAR_9->enable)
  return;


 FUNC_0(VAR_6, VAR_7);


 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  if ((VAR_12 % 2) == 0) {

   VAR_10 = (VAR_9->coeff[VAR_12].integer &
    VAR_3)
    << VAR_4;




   VAR_10 |= (((VAR_9->coeff[VAR_12].decimal &
    VAR_2) *
    VAR_5) / 100);
  } else {


   VAR_11 = (VAR_9->coeff[VAR_12].integer &
    VAR_3)
    << VAR_4;
   VAR_11 |= (((VAR_9->coeff[VAR_12].decimal &
     VAR_2) *
     VAR_5) / 100);
   VAR_11 <<= VAR_0;
   VAR_11 |= VAR_10;
   FUNC_0(VAR_11, (VAR_8 + ((VAR_12 - 1) << 1)));
  }
 }
}
