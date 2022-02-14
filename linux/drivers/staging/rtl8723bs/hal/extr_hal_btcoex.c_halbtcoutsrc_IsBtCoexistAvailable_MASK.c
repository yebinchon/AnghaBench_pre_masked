
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int Adapter; int bBinded; } ;
typedef TYPE_1__* PBTC_COEXIST ;



__attribute__((used)) static u8 FUNC_0(PBTC_COEXIST VAR_0)
{
 if (!VAR_0->bBinded || !VAR_0->Adapter)
  return 0;

 return 1;
}
