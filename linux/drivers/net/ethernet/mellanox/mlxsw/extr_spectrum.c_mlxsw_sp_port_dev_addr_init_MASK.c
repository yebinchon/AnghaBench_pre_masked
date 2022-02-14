
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_port {scalar_t__ local_port; TYPE_1__* dev; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int base_mac; } ;
struct TYPE_2__ {unsigned char* dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (struct mlxsw_sp_port*,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp_port *VAR_1)
{
 struct mlxsw_sp *VAR_2 = VAR_1->mlxsw_sp;
 unsigned char *VAR_3 = VAR_1->dev->dev_addr;

 FUNC_0(VAR_3, VAR_2->base_mac);
 VAR_3[VAR_0 - 1] += VAR_1->local_port;
 return FUNC_1(VAR_1, VAR_3);
}
