
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; int* data; } ;


 scalar_t__ FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0)
{
 u8 VAR_1 = 0;
 u16 VAR_2, VAR_3;


 VAR_2 = VAR_0->len;
 *(u8 *)FUNC_0(VAR_0, 1) = VAR_2 & 0xff;
 *(u8 *)FUNC_0(VAR_0, 1) = VAR_2 >> 8;


 for (VAR_3 = 0; VAR_3 < VAR_2 + 2; VAR_3++)
  VAR_1 ^= VAR_0->data[VAR_3];

 FUNC_1(VAR_0, VAR_1);
}
