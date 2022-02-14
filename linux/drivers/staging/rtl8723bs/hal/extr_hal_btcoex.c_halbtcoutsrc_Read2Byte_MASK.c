
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct adapter {int dummy; } ;
struct TYPE_2__ {struct adapter* Adapter; } ;
typedef TYPE_1__* PBTC_COEXIST ;


 int FUNC_0 (struct adapter*,int ) ;

__attribute__((used)) static u16 FUNC_1(void *VAR_0, u32 VAR_1)
{
 PBTC_COEXIST VAR_2;
 struct adapter *VAR_3;


 VAR_2 = (PBTC_COEXIST)VAR_0;
 VAR_3 = VAR_2->Adapter;

 return FUNC_0(VAR_3, VAR_1);
}
