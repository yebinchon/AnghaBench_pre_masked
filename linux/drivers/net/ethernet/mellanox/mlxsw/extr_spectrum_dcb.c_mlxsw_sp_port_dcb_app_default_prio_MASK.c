
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlxsw_sp_port {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static u8
FUNC_2(struct mlxsw_sp_port *VAR_0)
{
 u8 VAR_1;

 VAR_1 = FUNC_0(VAR_0->dev);
 if (VAR_1)

  return FUNC_1(VAR_1) - 1;

 return 0;
}
