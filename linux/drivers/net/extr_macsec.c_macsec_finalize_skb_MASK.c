
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; int ip_summed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_2, u8 VAR_3, u8 VAR_4)
{
 VAR_2->ip_summed = VAR_0;
 FUNC_0(VAR_2->data + VAR_4, VAR_2->data, 2 * VAR_1);
 FUNC_2(VAR_2, VAR_4);
 FUNC_1(VAR_2, VAR_2->len - VAR_3);
}
