
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ encapsulation; } ;
struct cpl_tx_tnl_lso {int dummy; } ;
struct cpl_tx_pkt_lso_core {int dummy; } ;
struct cpl_tx_pkt_core {int dummy; } ;
struct cpl_tx_pkt {int dummy; } ;
struct TYPE_2__ {scalar_t__ gso_size; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static inline int FUNC_1(const struct sk_buff *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2->encapsulation && FUNC_0(VAR_2)->gso_size &&
     VAR_3 > VAR_0) {
  VAR_4 = sizeof(struct cpl_tx_tnl_lso);
  VAR_4 += sizeof(struct cpl_tx_pkt_core);
 } else {
  VAR_4 = FUNC_0(VAR_2)->gso_size ?
    sizeof(struct cpl_tx_pkt_lso_core) : 0;
  VAR_4 += sizeof(struct cpl_tx_pkt);
 }
 if (VAR_2->len <= VAR_1 - VAR_4)
  return VAR_4;
 return 0;
}
