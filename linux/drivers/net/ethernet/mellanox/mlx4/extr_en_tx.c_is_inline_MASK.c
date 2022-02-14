
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int nr_frags; int * frags; } ;
struct sk_buff {int len; } ;


 void* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(int VAR_0, const struct sk_buff *VAR_1,
        const struct skb_shared_info *VAR_2,
        void **VAR_3)
{
 void *VAR_4;

 if (VAR_1->len > VAR_0 || !VAR_0)
  return 0;

 if (VAR_2->nr_frags == 1) {
  VAR_4 = FUNC_0(&VAR_2->frags[0]);
  if (FUNC_1(!VAR_4))
   return 0;
  *VAR_3 = VAR_4;
  return 1;
 }
 if (VAR_2->nr_frags)
  return 0;
 return 1;
}
