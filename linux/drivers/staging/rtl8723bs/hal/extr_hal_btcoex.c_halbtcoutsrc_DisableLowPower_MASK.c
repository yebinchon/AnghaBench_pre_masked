
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {scalar_t__ bBtDisableLowPwr; } ;
struct TYPE_7__ {TYPE_1__ btInfo; } ;
typedef TYPE_2__* PBTC_COEXIST ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(PBTC_COEXIST VAR_0, u8 VAR_1)
{
 VAR_0->btInfo.bBtDisableLowPwr = VAR_1;
 if (VAR_1)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
}
