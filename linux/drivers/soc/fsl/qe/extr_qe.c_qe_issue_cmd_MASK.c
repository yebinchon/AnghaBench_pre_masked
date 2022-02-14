
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int cecr; int cecdr; } ;
struct TYPE_4__ {TYPE_1__ cp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(u32 VAR_11, u32 VAR_12, u8 VAR_13, u32 VAR_14)
{
 unsigned long VAR_15;
 u8 VAR_16 = 0, VAR_17 = 0;
 u32 VAR_18;

 FUNC_3(&VAR_10, VAR_15);
 if (VAR_11 == VAR_8) {
  FUNC_1(&VAR_9->cp.cecr, (u32) (VAR_11 | VAR_2));
 } else {
  if (VAR_11 == VAR_0) {

   VAR_17 = VAR_6;
  } else if (VAR_11 == VAR_1) {


   VAR_17 = VAR_6;
   VAR_16 = VAR_4;
  } else {
   if (VAR_12 == VAR_7)
    VAR_16 = VAR_5;
   else
    VAR_16 = VAR_3;
  }

  FUNC_1(&VAR_9->cp.cecdr, VAR_14);
  FUNC_1(&VAR_9->cp.cecr,
    (VAR_11 | VAR_2 | ((u32) VAR_12 << VAR_17) | (u32)
     VAR_13 << VAR_16));
 }


 VAR_18 = FUNC_2((FUNC_0(&VAR_9->cp.cecr) & VAR_2) == 0,
      100, 0);


 FUNC_4(&VAR_10, VAR_15);

 return VAR_18 == 1;
}
