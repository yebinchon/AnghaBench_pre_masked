
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlxsw_sp_acl_erp_delta {int start; int mask; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;

u8 FUNC_1(const struct mlxsw_sp_acl_erp_delta *VAR_1,
    const char *VAR_2)
{
 u16 VAR_3 = VAR_1->start;
 u8 VAR_4 = VAR_1->mask;
 u16 VAR_5;

 if (!VAR_4)
  return 0;

 VAR_5 = (unsigned char) VAR_2[FUNC_0(VAR_3 / 8)];
 if (VAR_3 / 8 + 1 < VAR_0)
  VAR_5 |= (unsigned char) VAR_2[FUNC_0(VAR_3 / 8 + 1)] << 8;
 VAR_5 >>= VAR_3 % 8;
 VAR_5 &= VAR_4;
 return VAR_5;
}
