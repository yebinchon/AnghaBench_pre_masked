
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_4__ {size_t width; } ;
struct mlxsw_sp_port {TYPE_2__ mapping; int dev; int split; } ;
struct mlxsw_sp {TYPE_1__* bus_info; struct mlxsw_sp_port** ports; } ;
struct mlxsw_core {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (struct mlxsw_core*,int ) ;
 int FUNC_1 (struct mlxsw_core*,int ) ;
 int FUNC_2 (struct netlink_ext_ack*,char*) ;
 int FUNC_3 (int ,char*,size_t) ;
 struct mlxsw_sp* FUNC_4 (struct mlxsw_core*) ;
 size_t FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (struct mlxsw_sp*,size_t) ;
 int FUNC_7 (struct mlxsw_sp*,size_t) ;
 int FUNC_8 (struct mlxsw_sp*,size_t,unsigned int) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int FUNC_10(struct mlxsw_core *VAR_4, u8 VAR_5,
     struct netlink_ext_ack *VAR_6)
{
 struct mlxsw_sp *VAR_7 = FUNC_4(VAR_4);
 u8 VAR_8, VAR_9, VAR_10;
 struct mlxsw_sp_port *VAR_11;
 u8 VAR_12, VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 if (!FUNC_1(VAR_4, VAR_2) ||
     !FUNC_1(VAR_4, VAR_3))
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_4, VAR_2);
 VAR_9 = FUNC_0(VAR_4, VAR_3);

 VAR_11 = VAR_7->ports[VAR_5];
 if (!VAR_11) {
  FUNC_3(VAR_7->bus_info->dev, "Port number \"%d\" does not exist\n",
   VAR_5);
  FUNC_2(VAR_6, "Port number does not exist");
  return -VAR_0;
 }

 if (!VAR_11->split) {
  FUNC_9(VAR_11->dev, "Port was not split\n");
  FUNC_2(VAR_6, "Port was not split");
  return -VAR_0;
 }

 VAR_12 = VAR_11->mapping.width;
 VAR_14 = VAR_12 == 1 ? 4 : 2;

 if (VAR_14 == 2)
  VAR_10 = VAR_9;
 else
  VAR_10 = VAR_8;

 VAR_13 = FUNC_5(VAR_5);


 if (VAR_14 == 2 && VAR_5 >= VAR_13 + 2)
  VAR_13 = VAR_13 + 2;

 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
  if (FUNC_6(VAR_7, VAR_13 + VAR_15 * VAR_10))
   FUNC_7(VAR_7, VAR_13 + VAR_15 * VAR_10);

 FUNC_8(VAR_7, VAR_13, VAR_14);

 return 0;
}
