
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static inline u32 FUNC_1(u16 VAR_4)
{
 u8 VAR_5 = VAR_4 / VAR_3;
 u32 VAR_6 = VAR_5 * VAR_0;
 VAR_6 += VAR_2;
 VAR_6 += VAR_4 % VAR_3 / VAR_1 * 0x04;
 return FUNC_0(VAR_6, 4);
}
