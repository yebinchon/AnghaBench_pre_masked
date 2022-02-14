
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; } ;


 scalar_t__ FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_0)
{
 if (VAR_0->data[0] & 0x01)
  *(u8 *)FUNC_0(VAR_0, 1) = 0x00;
}
