
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {unsigned int nr_frags; int * frags; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_4(struct sk_buff *VAR_0)
{
 const skb_frag_t *VAR_1 = &FUNC_3(VAR_0)->frags[0];
 unsigned int VAR_2 = FUNC_3(VAR_0)->nr_frags;
 int VAR_3 = 0, VAR_4 = FUNC_2(VAR_0);

 for (;;) {
  VAR_3 += FUNC_0(VAR_4);

  if (!VAR_2--)
   break;

  VAR_4 = FUNC_1(VAR_1++);
 }

 return VAR_3;
}
