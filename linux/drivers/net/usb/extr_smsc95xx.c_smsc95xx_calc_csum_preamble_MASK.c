
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int csum_offset; } ;


 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static u32 FUNC_1(struct sk_buff *VAR_0)
{
 u16 VAR_1 = (u16)FUNC_0(VAR_0);
 u16 VAR_2 = VAR_1 + VAR_0->csum_offset;
 return (VAR_2 << 16) | VAR_1;
}
