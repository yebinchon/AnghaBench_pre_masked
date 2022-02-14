
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct adapter*,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct adapter *VAR_3, int VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8;

 do {
  VAR_5 = FUNC_7(VAR_3, VAR_1);
  VAR_6 = FUNC_7(VAR_3, VAR_0);
  if (FUNC_4(VAR_3->params.chip)) {
   VAR_7 = FUNC_2(VAR_5);
   VAR_8 = FUNC_0(VAR_5);
  } else {
   VAR_7 = FUNC_3(VAR_5);
   VAR_8 = FUNC_1(VAR_6);
  }

  if (VAR_7 == 0 && VAR_8 == 0)
   break;
  FUNC_6(VAR_2);
  FUNC_5(FUNC_8(VAR_4));
 } while (1);
}
