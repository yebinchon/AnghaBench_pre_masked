
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef unsigned char u16 ;
struct mlxsw_sp_acl_erp_key {scalar_t__* mask; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(const struct mlxsw_sp_acl_erp_key *VAR_2,
       const struct mlxsw_sp_acl_erp_key *VAR_3,
       u16 *VAR_4, u8 *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = -1;
 u16 VAR_8;
 u16 VAR_9;
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_2->mask[FUNC_0(VAR_10)] == VAR_3->mask[FUNC_0(VAR_10)])
   continue;
  if (VAR_7 == -1)
   VAR_7 = VAR_10;
  else if (VAR_7 != VAR_10 - 1)
   return -VAR_0;
 }
 if (VAR_7 == -1) {





  return -VAR_0;
 }
 VAR_8 = (unsigned char) VAR_2->mask[FUNC_0(VAR_7)];
 VAR_9 = (unsigned char) VAR_3->mask[FUNC_0(VAR_7)];
 if (VAR_7 + 1 < VAR_1) {
  VAR_8 |= (unsigned char) VAR_2->mask[FUNC_0(VAR_7 + 1)] << 8;
  VAR_9 |= (unsigned char) VAR_3->mask[FUNC_0(VAR_7 + 1)] << 8;
 }

 if ((VAR_8 ^ VAR_9) & VAR_8)
  return -VAR_0;
 VAR_9 &= ~VAR_8;
 while (!(VAR_9 & (1 << VAR_6)))
  VAR_6++;
 while (!(VAR_9 & 1))
  VAR_9 >>= 1;
 if (VAR_9 & 0xff00)
  return -VAR_0;

 *VAR_4 = VAR_7 * 8 + VAR_6;
 *VAR_5 = VAR_9;

 return 0;
}
