
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mlxsw_sp {TYPE_1__* ptp_ops; } ;
struct mlxsw_core {int dummy; } ;
struct TYPE_2__ {int (* transmitted ) (struct mlxsw_sp*,struct sk_buff*,int ) ;} ;


 int VAR_0 ;
 struct mlxsw_sp* FUNC_0 (struct mlxsw_core*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct mlxsw_sp*,struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_core *VAR_1,
         struct sk_buff *VAR_2, u8 VAR_3)
{
 struct mlxsw_sp *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_0);
 VAR_4->ptp_ops->transmitted(VAR_4, VAR_2, VAR_3);
}
