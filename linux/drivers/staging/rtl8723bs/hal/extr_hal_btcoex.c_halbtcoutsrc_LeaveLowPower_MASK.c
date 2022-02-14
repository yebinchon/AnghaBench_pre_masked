
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct adapter {int dummy; } ;
typedef scalar_t__ s32 ;
struct TYPE_3__ {struct adapter* Adapter; } ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct adapter*,int ) ;

__attribute__((used)) static void FUNC_3(PBTC_COEXIST VAR_5)
{
 struct adapter *VAR_6;
 s32 VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 u32 VAR_10;


 VAR_6 = VAR_5->Adapter;
 VAR_7 = VAR_2;



 VAR_10 = 30;


 VAR_8 = VAR_4;
 do {
  VAR_7 = FUNC_2(VAR_6, VAR_0);
  if (VAR_3 == VAR_7)
   break;

  VAR_9 = FUNC_0(VAR_4 - VAR_8);
  if (VAR_9 > VAR_10)
   break;

  FUNC_1(1);
 } while (1);
}
