
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (struct sk_buff const*) ;
 TYPE_1__* FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_4(const struct sk_buff *VAR_0)
{
 int VAR_1 = FUNC_0(FUNC_2(VAR_0)) + 1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_0)->nr_frags; VAR_2++) {
  const skb_frag_t *VAR_3 = &FUNC_3(VAR_0)->frags[VAR_2];

  VAR_1 += FUNC_0(FUNC_1(VAR_3));
 }
 return VAR_1;
}
