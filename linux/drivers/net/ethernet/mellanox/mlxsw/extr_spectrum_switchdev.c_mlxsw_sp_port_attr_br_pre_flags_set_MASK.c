
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int dummy; } ;
struct mlxsw_sp_port {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct mlxsw_sp_port
            *VAR_4,
            struct switchdev_trans *VAR_5,
            unsigned long VAR_6)
{
 if (VAR_6 & ~(VAR_1 | VAR_0 | VAR_2))
  return -VAR_3;

 return 0;
}
