
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mlxsw_core {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* ptp_transmitted ) (struct mlxsw_core*,struct sk_buff*,int ) ;} ;


 int FUNC_0 (struct mlxsw_core*,struct sk_buff*,int ) ;

void FUNC_1(struct mlxsw_core *VAR_0,
    struct sk_buff *VAR_1, u8 VAR_2)
{
 if (VAR_0->driver->ptp_transmitted)
  VAR_0->driver->ptp_transmitted(VAR_0, VAR_1,
          VAR_2);
}
