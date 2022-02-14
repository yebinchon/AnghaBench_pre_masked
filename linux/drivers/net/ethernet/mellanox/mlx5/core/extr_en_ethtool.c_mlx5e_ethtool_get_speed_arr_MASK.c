
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ptys2ethtool_config {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct ptys2ethtool_config*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 struct ptys2ethtool_config* VAR_0 ;
 struct ptys2ethtool_config* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_dev *VAR_3,
     struct ptys2ethtool_config **VAR_4,
     u32 *VAR_5)
{
 bool VAR_6 = FUNC_1(VAR_3, VAR_2);

 *VAR_4 = VAR_6 ? VAR_0 : VAR_1;
 *VAR_5 = VAR_6 ? FUNC_0(VAR_0) :
        FUNC_0(VAR_1);
}
