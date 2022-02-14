
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct net_device {int name; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2;

 FUNC_0("%s: skb 0x%p, len=%d\n", VAR_0->name, VAR_1, VAR_1->len);
 for (VAR_2 = 0; VAR_2 < VAR_1->len; VAR_2++) {
  if (VAR_2 % 16 == 0) {
   if (VAR_2)
    FUNC_0("\n");
   FUNC_0("%s: data[%p]:", VAR_0->name, VAR_1->data + VAR_2);
  }
  FUNC_0(" %02x", ((u8 *)VAR_1->data)[VAR_2]);
 }
 FUNC_0("\n");
}
