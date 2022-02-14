
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_core_port {void* port_driver_priv; } ;
struct mlxsw_core {struct mlxsw_core_port* ports; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct mlxsw_core*,size_t,int ,int ,int,int ,unsigned char const*,unsigned char) ;

int FUNC_1(struct mlxsw_core *VAR_2,
        void *VAR_3,
        const unsigned char *VAR_4,
        unsigned char VAR_5)
{
 struct mlxsw_core_port *VAR_6 =
    &VAR_2->ports[VAR_1];
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_1,
         VAR_0,
         0, 0, 0,
         VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6->port_driver_priv = VAR_3;
 return 0;
}
