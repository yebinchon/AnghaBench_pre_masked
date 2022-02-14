
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mlxsw_sp {TYPE_1__* ptp_ops; } ;
struct TYPE_2__ {int (* receive ) (struct mlxsw_sp*,struct sk_buff*,int ) ;} ;


 int FUNC_0 (struct mlxsw_sp*,struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_0, u8 VAR_1,
         void *VAR_2)
{
 struct mlxsw_sp *VAR_3 = VAR_2;

 VAR_3->ptp_ops->receive(VAR_3, VAR_0, VAR_1);
}
