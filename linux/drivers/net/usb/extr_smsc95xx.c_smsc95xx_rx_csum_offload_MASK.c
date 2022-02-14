
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ len; int ip_summed; int csum; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_1)
{
 VAR_1->csum = *(u16 *)(FUNC_0(VAR_1) - 2);
 VAR_1->ip_summed = VAR_0;
 FUNC_1(VAR_1, VAR_1->len - 2);
}
