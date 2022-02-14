
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int gso_size; int * frags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_2(struct sk_buff *VAR_1)
{
 const skb_frag_t *VAR_2, *VAR_3;
 int VAR_4, VAR_5;


 VAR_4 = FUNC_1(VAR_1)->nr_frags;
 if (VAR_4 < (VAR_0 - 1))
  return 0;




 VAR_4 -= VAR_0 - 2;
 VAR_2 = &FUNC_1(VAR_1)->frags[0];







 VAR_5 = 1 - FUNC_1(VAR_1)->gso_size;


 VAR_5 += FUNC_0(VAR_2++);
 VAR_5 += FUNC_0(VAR_2++);
 VAR_5 += FUNC_0(VAR_2++);
 VAR_5 += FUNC_0(VAR_2++);
 VAR_5 += FUNC_0(VAR_2++);




 VAR_3 = &FUNC_1(VAR_1)->frags[0];
 for (;;) {
  VAR_5 += FUNC_0(VAR_2++);


  if (VAR_5 < 0)
   return 1;

  if (!VAR_4--)
   break;

  VAR_5 -= FUNC_0(VAR_3++);
 }

 return 0;
}
