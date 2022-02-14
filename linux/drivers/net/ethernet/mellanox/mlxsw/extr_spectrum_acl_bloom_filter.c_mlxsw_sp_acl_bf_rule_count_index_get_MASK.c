
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_bf {unsigned int bank_size; } ;



__attribute__((used)) static unsigned int
FUNC_0(struct mlxsw_sp_acl_bf *VAR_0,
         unsigned int VAR_1,
         unsigned int VAR_2)
{
 return VAR_1 * VAR_0->bank_size + VAR_2;
}
