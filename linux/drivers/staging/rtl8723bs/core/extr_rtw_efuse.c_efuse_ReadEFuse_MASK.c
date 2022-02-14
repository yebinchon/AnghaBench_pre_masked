
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int (* ReadEFuse ) (struct adapter*,int ,int ,int ,int *,int) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;


 int FUNC_0 (struct adapter*,int ,int ,int ,int *,int) ;

void
FUNC_1(
 struct adapter *VAR_0,
 u8 VAR_1,
 u16 VAR_2,
 u16 VAR_3,
 u8 *VAR_4,
bool VAR_5
 )
{
 VAR_0->HalFunc.ReadEFuse(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
