
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxplat_mlxcpld_regmap_context {scalar_t__ base; } ;


 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 struct mlxplat_mlxcpld_regmap_context *VAR_3 = VAR_0;

 FUNC_0(VAR_2, VAR_3->base + VAR_1);
 return 0;
}
