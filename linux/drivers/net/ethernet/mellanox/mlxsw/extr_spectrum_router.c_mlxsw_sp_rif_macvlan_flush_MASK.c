
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct mlxsw_sp_rif*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp_rif *VAR_1)
{
 if (!FUNC_2(VAR_1->dev))
  return 0;

 FUNC_1(VAR_1->dev, "Router interface is deleted. Upper macvlans will not work\n");
 return FUNC_0(VAR_1->dev,
          VAR_0, VAR_1);
}
