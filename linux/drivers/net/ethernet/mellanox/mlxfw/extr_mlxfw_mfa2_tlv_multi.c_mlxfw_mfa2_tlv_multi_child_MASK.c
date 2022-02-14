
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxfw_mfa2_tlv_multi {int dummy; } ;
struct mlxfw_mfa2_tlv {int dummy; } ;
struct mlxfw_mfa2_file {int dummy; } ;


 size_t FUNC_0 (int) ;
 struct mlxfw_mfa2_tlv const* FUNC_1 (struct mlxfw_mfa2_file const*,void*) ;

const struct mlxfw_mfa2_tlv *
FUNC_2(const struct mlxfw_mfa2_file *VAR_0,
      const struct mlxfw_mfa2_tlv_multi *VAR_1)
{
 size_t VAR_2;

 VAR_2 = FUNC_0(sizeof(struct mlxfw_mfa2_tlv_multi));
 return FUNC_1(VAR_0, (void *) VAR_1 + VAR_2);
}
