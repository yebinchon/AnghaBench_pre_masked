
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;
struct TYPE_2__ {struct adapter* Adapter; } ;
typedef TYPE_1__* PBTC_COEXIST ;


 int FUNC_0 (struct adapter*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u8 VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 PBTC_COEXIST VAR_5;
 struct adapter *VAR_6;


 VAR_5 = (PBTC_COEXIST)VAR_0;
 VAR_6 = VAR_5->Adapter;

 FUNC_0(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4);
}
