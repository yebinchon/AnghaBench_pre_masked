
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int __le32 ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(__le32 *VAR_0)
{
 __le16 *VAR_1 = (__le16 *)VAR_0;
 u16 VAR_2 = 0;
 u32 VAR_3;


 FUNC_1(VAR_0, 0);
 for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
  VAR_2 = VAR_2 ^ FUNC_0(*(VAR_1 + VAR_3));
 FUNC_1(VAR_0, VAR_2);
}
