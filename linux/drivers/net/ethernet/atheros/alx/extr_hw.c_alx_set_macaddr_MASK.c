
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct alx_hw {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alx_hw*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct alx_hw *VAR_2, const u8 *VAR_3)
{
 u32 VAR_4;


 VAR_4 = FUNC_2(FUNC_3((__be32 *)(VAR_3 + 2)));
 FUNC_0(VAR_2, VAR_0, VAR_4);
 VAR_4 = FUNC_1(FUNC_3((__be16 *)VAR_3));
 FUNC_0(VAR_2, VAR_1, VAR_4);
}
