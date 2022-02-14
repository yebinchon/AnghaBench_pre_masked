
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct igc_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static s32 FUNC_2(struct igc_hw *VAR_5, int VAR_6)
{
 s32 VAR_7 = -VAR_2;
 u32 VAR_8 = 100000;
 u32 VAR_9, VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (VAR_6 == VAR_3)
   VAR_10 = FUNC_0(VAR_0);
  else
   VAR_10 = FUNC_0(VAR_1);

  if (VAR_10 & VAR_4) {
   VAR_7 = 0;
   break;
  }

  FUNC_1(5);
 }

 return VAR_7;
}
