
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int __le16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(u8 *VAR_0, u16 VAR_1)
{
 *(__le16 *)VAR_0 = FUNC_0(VAR_1);
 *(((__le16 *)VAR_0) + 1) = FUNC_0(~VAR_1);
}
