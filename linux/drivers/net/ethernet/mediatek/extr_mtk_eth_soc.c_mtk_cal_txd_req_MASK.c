
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_4(struct sk_buff *VAR_1)
{
 int VAR_2, VAR_3;
 skb_frag_t *VAR_4;

 VAR_3 = 1;
 if (FUNC_2(VAR_1)) {
  for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_1)->nr_frags; VAR_2++) {
   VAR_4 = &FUNC_3(VAR_1)->frags[VAR_2];
   VAR_3 += FUNC_0(FUNC_1(VAR_4),
      VAR_0);
  }
 } else {
  VAR_3 += FUNC_3(VAR_1)->nr_frags;
 }

 return VAR_3;
}
