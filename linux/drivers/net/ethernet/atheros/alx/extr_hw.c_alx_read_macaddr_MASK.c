
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
 int FUNC_0 (struct alx_hw*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static bool FUNC_5(struct alx_hw *VAR_2, u8 *VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 VAR_5 = FUNC_0(VAR_2, VAR_1);


 FUNC_4(FUNC_2(VAR_4), (__be32 *)(VAR_3 + 2));
 FUNC_4(FUNC_1(VAR_5), (__be16 *)VAR_3);

 return FUNC_3(VAR_3);
}
