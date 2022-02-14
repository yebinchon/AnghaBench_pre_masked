
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct devlink_port {int dummy; } ;
struct mlxsw_core_port {size_t local_port; struct devlink_port devlink_port; } ;
struct mlxsw_core {struct mlxsw_core_port* ports; } ;
struct devlink {int dummy; } ;
typedef enum devlink_port_flavour { ____Placeholder_devlink_port_flavour } devlink_port_flavour ;


 int FUNC_0 (struct devlink_port*,int,int ,int,int ,unsigned char const*,unsigned char) ;
 int FUNC_1 (struct devlink*,struct devlink_port*,size_t) ;
 int FUNC_2 (struct mlxsw_core_port*,int ,int) ;
 struct devlink* FUNC_3 (struct mlxsw_core*) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_core *VAR_0, u8 VAR_1,
      enum devlink_port_flavour VAR_2,
      u32 VAR_3, bool VAR_4,
      u32 VAR_5,
      const unsigned char *VAR_6,
      unsigned char VAR_7)
{
 struct devlink *VAR_8 = FUNC_3(VAR_0);
 struct mlxsw_core_port *VAR_9 =
     &VAR_0->ports[VAR_1];
 struct devlink_port *VAR_10 = &VAR_9->devlink_port;
 int VAR_11;

 VAR_9->local_port = VAR_1;
 FUNC_0(VAR_10, VAR_2, VAR_3,
          VAR_4, VAR_5,
          VAR_6, VAR_7);
 VAR_11 = FUNC_1(VAR_8, VAR_10, VAR_1);
 if (VAR_11)
  FUNC_2(VAR_9, 0, sizeof(*VAR_9));
 return VAR_11;
}
