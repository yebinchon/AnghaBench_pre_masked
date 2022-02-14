
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {unsigned int nr_frags; int * frags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int const*) ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct sk_buff *VAR_2)
{
 unsigned int VAR_3 = 0;

 if (VAR_0 > VAR_1) {
  unsigned int VAR_4 = FUNC_2(VAR_2)->nr_frags;
  unsigned int VAR_5, VAR_6 = FUNC_1(VAR_2);
  while (VAR_6 > VAR_1) {
   VAR_3++;
   VAR_6 -= VAR_1;
  }
  for (VAR_5 = 0; VAR_4--; VAR_5++) {
   const skb_frag_t *VAR_7 = &FUNC_2(VAR_2)->frags[VAR_5];
   VAR_6 = FUNC_0(VAR_7);
   while (VAR_6 > VAR_1) {
    VAR_3++;
    VAR_6 -= VAR_1;
   }
  }
 }
 return VAR_3;
}
