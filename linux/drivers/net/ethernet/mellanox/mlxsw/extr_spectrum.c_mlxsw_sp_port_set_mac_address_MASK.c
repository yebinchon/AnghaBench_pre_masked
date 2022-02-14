
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct mlxsw_sp_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mlxsw_sp_port*,int ) ;
 struct mlxsw_sp_port* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, void *VAR_2)
{
 struct mlxsw_sp_port *VAR_3 = FUNC_3(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;
 int VAR_5;

 if (!FUNC_0(VAR_4->sa_data))
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_3, VAR_4->sa_data);
 if (VAR_5)
  return VAR_5;
 FUNC_1(VAR_1->dev_addr, VAR_4->sa_data, VAR_1->addr_len);
 return 0;
}
