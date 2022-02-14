
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {int divsel_mask; int divsel_shift; int divsel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned long FUNC_3(u8 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8 = 1;

 VAR_7 = FUNC_2(VAR_2);
 VAR_7 = ((VAR_7 & VAR_5[VAR_6].divsel_mask) >> VAR_5[VAR_6].divsel_shift);

 if (VAR_7 == VAR_3)
  VAR_7 = VAR_5[VAR_6].divsel;
 else
  VAR_5[VAR_6].divsel = VAR_7;

 switch (VAR_7) {
 case 128:
  VAR_8 *= 2;

 case 129:
  VAR_8 *= 2;

 case 130:
  return FUNC_1(VAR_4, FUNC_0(VAR_1),
   VAR_0) / VAR_8;
 default:
  return 0;
 }
}
