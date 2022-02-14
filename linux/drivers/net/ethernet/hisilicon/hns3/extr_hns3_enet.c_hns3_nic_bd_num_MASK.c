
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_5(struct sk_buff *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;


 if (FUNC_1(VAR_1->len <= VAR_0))
  return FUNC_4(VAR_1)->nr_frags + 1;

 VAR_2 = FUNC_0(FUNC_3(VAR_1));

 for (VAR_3 = 0; VAR_3 < FUNC_4(VAR_1)->nr_frags; VAR_3++) {
  skb_frag_t *VAR_4 = &FUNC_4(VAR_1)->frags[VAR_3];
  VAR_2 += FUNC_0(FUNC_2(VAR_4));
 }

 return VAR_2;
}
