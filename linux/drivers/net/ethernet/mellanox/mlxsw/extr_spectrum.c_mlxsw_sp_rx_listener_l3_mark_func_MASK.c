
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int offload_l3_fwd_mark; int offload_fwd_mark; } ;


 void FUNC_0 (struct sk_buff*,int ,void*) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_0,
           u8 VAR_1, void *VAR_2)
{
 VAR_0->offload_l3_fwd_mark = 1;
 VAR_0->offload_fwd_mark = 1;
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
