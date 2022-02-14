
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


 int FUNC_0 (int ) ;
 int FUNC_1 (struct r8152*,int,int,int *,int) ;

__attribute__((used)) static u8 FUNC_2(struct r8152 *VAR_0, u16 VAR_1, u16 VAR_2)
{
 u32 VAR_3;
 __le32 VAR_4;
 u8 VAR_5 = VAR_2 & 3;

 VAR_2 &= ~3;

 FUNC_1(VAR_0, VAR_2, sizeof(VAR_4), &VAR_4, VAR_1);

 VAR_3 = FUNC_0(VAR_4);
 VAR_3 >>= (VAR_5 * 8);
 VAR_3 &= 0xff;

 return (u8)VAR_3;
}
