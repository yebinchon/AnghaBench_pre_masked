
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reset; } ;
struct arizona {int type; TYPE_1__ pdata; } ;




 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct arizona *VAR_0)
{
 if (VAR_0->pdata.reset) {
  switch (VAR_0->type) {
  case 129:
  case 128:

   FUNC_1(5000, 10000);
   break;
  default:
   break;
  }

  FUNC_0(VAR_0->pdata.reset, 1);
  FUNC_1(1000, 5000);
 }
}
