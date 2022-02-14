
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
typedef int __le16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(u8 *VAR_0, u16 VAR_1)
{
 return (FUNC_0(*(__le16 *)&VAR_0[VAR_1]) & 0x7000) >> 12;
}
