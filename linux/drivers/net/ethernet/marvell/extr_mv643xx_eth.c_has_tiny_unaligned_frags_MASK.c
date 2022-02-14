
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct sk_buff *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_2(VAR_0)->nr_frags; VAR_1++) {
  const skb_frag_t *VAR_2 = &FUNC_2(VAR_0)->frags[VAR_1];

  if (FUNC_1(VAR_2) <= 8 && FUNC_0(VAR_2) & 7)
   return 1;
 }

 return 0;
}
