
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int tmp ;
struct r8152 {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct r8152*,int,int,int *,int) ;

__attribute__((used)) static u16 FUNC_2(struct r8152 *VAR_1, u16 VAR_2, u16 VAR_3)
{
 u32 VAR_4;
 __le32 VAR_5;
 u16 VAR_6 = VAR_0;
 u8 VAR_7 = VAR_3 & 2;

 VAR_3 &= ~3;
 VAR_6 <<= VAR_7;

 FUNC_1(VAR_1, VAR_3, sizeof(VAR_5), &VAR_5, VAR_2 | VAR_6);

 VAR_4 = FUNC_0(VAR_5);
 VAR_4 >>= (VAR_7 * 8);
 VAR_4 &= 0xffff;

 return (u16)VAR_4;
}
