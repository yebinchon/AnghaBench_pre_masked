
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int truesize; int data_len; int len; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int nr_frags; } ;


 int FUNC_0 (struct sk_buff*,int ,struct page*,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0, struct page *VAR_1,
         u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 FUNC_0(VAR_0, FUNC_1(VAR_0)->nr_frags, VAR_1, VAR_2, VAR_3);

 VAR_0->len += VAR_3;
 VAR_0->data_len += VAR_3;
 VAR_0->truesize += VAR_4;
}
