
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct cpl_tx_pkt {int dummy; } ;
struct TYPE_2__ {scalar_t__ gso_size; scalar_t__ nr_frags; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static inline unsigned int FUNC_3(const struct sk_buff *VAR_1)
{
 unsigned int VAR_2;

 if (VAR_1->len <= VAR_0 - sizeof(struct cpl_tx_pkt))
  return 1;

 VAR_2 = FUNC_1(FUNC_2(VAR_1)->nr_frags + 1) + 2;
 if (FUNC_2(VAR_1)->gso_size)
  VAR_2++;
 return FUNC_0(VAR_2);
}
