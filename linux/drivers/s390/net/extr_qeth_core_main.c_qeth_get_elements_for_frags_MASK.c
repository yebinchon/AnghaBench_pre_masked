
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int skb_frag_t ;
typedef scalar_t__ addr_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < FUNC_3(VAR_0)->nr_frags; VAR_1++) {
  skb_frag_t *VAR_3 = &FUNC_3(VAR_0)->frags[VAR_1];

  VAR_2 += FUNC_0(
   (addr_t)FUNC_1(VAR_3),
   (addr_t)FUNC_1(VAR_3) + FUNC_2(VAR_3));
 }
 return VAR_2;
}
