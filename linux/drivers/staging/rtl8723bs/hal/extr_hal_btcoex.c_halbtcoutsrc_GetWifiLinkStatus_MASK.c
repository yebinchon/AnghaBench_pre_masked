
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct adapter {int dummy; } ;
struct TYPE_3__ {struct adapter* Adapter; } ;
typedef TYPE_1__* PBTC_COEXIST ;


 int FUNC_0 (struct adapter*) ;

__attribute__((used)) static u32 FUNC_1(PBTC_COEXIST VAR_0)
{






 struct adapter *VAR_1;
 u32 VAR_2;
 u32 VAR_3, VAR_4;


 VAR_1 = VAR_0->Adapter;
 VAR_3 = 0;
 VAR_4 = 0;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  VAR_3 |= VAR_2;
  VAR_4++;
 }

 VAR_2 = (VAR_4 << 16) | VAR_3;

 return VAR_2;
}
