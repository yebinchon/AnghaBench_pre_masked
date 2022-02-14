
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; int data; } ;


 int FUNC_0 (int,int ,int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0)
{
 u16 VAR_1;
 int VAR_2;

 VAR_2 = VAR_0->len + 2;
 *(u8 *)FUNC_1(VAR_0, 1) = VAR_2;

 VAR_1 = FUNC_0(0xffff, VAR_0->data, VAR_0->len);
 VAR_1 = ~VAR_1;
 FUNC_2(VAR_0, VAR_1 & 0xff);
 FUNC_2(VAR_0, VAR_1 >> 8);
}
