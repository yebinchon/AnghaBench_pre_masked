
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int mac_lo_be ;
typedef int mac_hi_be ;
typedef int __be32 ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void FUNC_3(u8 *VAR_0, u32 VAR_1, u16 VAR_2)
{
 __be16 VAR_3 = FUNC_0(VAR_2);
 __be32 VAR_4 = FUNC_1(VAR_1);
 FUNC_2(VAR_0, &VAR_3, sizeof(VAR_3));
 FUNC_2(VAR_0 + sizeof(VAR_3), &VAR_4, sizeof(VAR_4));
}
