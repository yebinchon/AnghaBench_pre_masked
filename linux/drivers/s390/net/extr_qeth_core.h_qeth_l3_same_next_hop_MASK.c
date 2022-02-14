
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ipv6_addr; } ;
struct qeth_hdr_layer3 {int flags; TYPE_1__ next_hop; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static inline bool FUNC_1(struct qeth_hdr_layer3 *VAR_1,
      struct qeth_hdr_layer3 *VAR_2)
{
 return !((VAR_1->flags ^ VAR_2->flags) & VAR_0) &&
        FUNC_0(&VAR_1->next_hop.ipv6_addr,
          &VAR_2->next_hop.ipv6_addr);
}
