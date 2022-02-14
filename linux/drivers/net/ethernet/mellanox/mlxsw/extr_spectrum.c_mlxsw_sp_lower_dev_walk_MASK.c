
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_port {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 struct mlxsw_sp_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, void *VAR_1)
{
 struct mlxsw_sp_port **VAR_2 = VAR_1;
 int VAR_3 = 0;

 if (FUNC_0(VAR_0)) {
  *VAR_2 = FUNC_1(VAR_0);
  VAR_3 = 1;
 }

 return VAR_3;
}
