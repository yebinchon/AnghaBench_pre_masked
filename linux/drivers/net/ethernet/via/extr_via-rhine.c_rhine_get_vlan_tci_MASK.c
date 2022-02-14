
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
typedef int __be16 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline u16 FUNC_1(struct sk_buff *VAR_0, int VAR_1)
{
 u8 *VAR_2 = (u8 *)VAR_0->data + ((VAR_1 + 3) & ~3) + 2;
 return FUNC_0((__be16 *)VAR_2);
}
