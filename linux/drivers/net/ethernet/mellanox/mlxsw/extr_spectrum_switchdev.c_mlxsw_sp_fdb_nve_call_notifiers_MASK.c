
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
struct net_device {int dummy; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
typedef int __be32 ;


 int FUNC_0 (struct net_device*,char const*,int,union mlxsw_sp_l3addr*,int ,int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
         const char *VAR_1,
         enum mlxsw_sp_l3proto VAR_2,
         union mlxsw_sp_l3addr *VAR_3,
         __be32 VAR_4,
         bool VAR_5)
{
 if (FUNC_1(VAR_0))
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_5);
}
