
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


 int FUNC_0 (struct adapter*,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u32 VAR_1, u16 VAR_2)
{
 PBTC_COEXIST VAR_3;
 struct adapter *VAR_4;


 VAR_3 = (PBTC_COEXIST)VAR_0;
 VAR_4 = VAR_3->Adapter;

 FUNC_0(VAR_4, VAR_1, VAR_2);
}
