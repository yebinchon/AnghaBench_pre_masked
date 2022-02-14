
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {size_t len; scalar_t__ data; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,size_t) ;

__attribute__((used)) static u16 FUNC_2(struct sk_buff *VAR_1)
{
 u16 VAR_2, VAR_3;
 size_t VAR_4 = VAR_1->len - VAR_0;

 VAR_2 = FUNC_1(VAR_1->data, VAR_4);
 VAR_3 = FUNC_0(VAR_1->data + VAR_4);

 return (VAR_2 ^ VAR_3);
}
