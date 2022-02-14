
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int (* Add_RateATid ) (struct adapter*,int ,int *,int ) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;


 int FUNC_0 (struct adapter*,int ,int *,int ) ;

void FUNC_1(struct adapter *VAR_0, u32 VAR_1, u8 *VAR_2, u8 VAR_3)
{
 if (VAR_0->HalFunc.Add_RateATid)
  VAR_0->HalFunc.Add_RateATid(VAR_0, VAR_1, VAR_2, VAR_3);
}
