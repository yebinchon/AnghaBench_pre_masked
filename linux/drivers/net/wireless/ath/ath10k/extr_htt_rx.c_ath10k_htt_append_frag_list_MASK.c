
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int data_len; unsigned int len; } ;
struct TYPE_2__ {struct sk_buff* frag_list; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct sk_buff *VAR_0,
            struct sk_buff *VAR_1,
            unsigned int VAR_2)
{
 FUNC_0(VAR_0)->frag_list = VAR_1;
 VAR_0->data_len = VAR_2;
 VAR_0->len += VAR_0->data_len;
}
