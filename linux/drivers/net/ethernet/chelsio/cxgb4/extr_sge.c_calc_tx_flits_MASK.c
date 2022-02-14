
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ encapsulation; scalar_t__ len; } ;
struct fw_eth_tx_pkt_wr {int dummy; } ;
struct cpl_tx_tnl_lso {int dummy; } ;
struct cpl_tx_pkt_lso_core {int dummy; } ;
struct cpl_tx_pkt_core {int dummy; } ;
typedef int __be64 ;
struct TYPE_2__ {scalar_t__ gso_size; scalar_t__ nr_frags; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct sk_buff const*,unsigned int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static inline unsigned int FUNC_4(const struct sk_buff *VAR_1,
      unsigned int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = FUNC_1(VAR_1, VAR_2);






 if (VAR_4)
  return FUNC_0(VAR_1->len + VAR_4, sizeof(__be64));
 VAR_3 = FUNC_2(FUNC_3(VAR_1)->nr_frags + 1);
 if (FUNC_3(VAR_1)->gso_size) {
  if (VAR_1->encapsulation && VAR_2 > VAR_0)
   VAR_4 = sizeof(struct fw_eth_tx_pkt_wr) +
     sizeof(struct cpl_tx_tnl_lso);
  else
   VAR_4 = sizeof(struct fw_eth_tx_pkt_wr) +
     sizeof(struct cpl_tx_pkt_lso_core);

  VAR_4 += sizeof(struct cpl_tx_pkt_core);
  VAR_3 += (VAR_4 / sizeof(__be64));
 } else {
  VAR_3 += (sizeof(struct fw_eth_tx_pkt_wr) +
     sizeof(struct cpl_tx_pkt_core)) / sizeof(__be64);
 }
 return VAR_3;
}
