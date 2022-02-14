
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nfp_flower_cmsg_mac_repr {TYPE_1__* ports; } ;
struct TYPE_2__ {unsigned int idx; unsigned int info; unsigned int nbi_port; unsigned int phys_port; } ;


 unsigned int VAR_0 ;
 struct nfp_flower_cmsg_mac_repr* FUNC_0 (struct sk_buff*) ;

void
FUNC_1(struct sk_buff *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3, unsigned int VAR_4,
        unsigned int VAR_5)
{
 struct nfp_flower_cmsg_mac_repr *VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 VAR_6->ports[VAR_2].idx = VAR_2;
 VAR_6->ports[VAR_2].info = VAR_3 & VAR_0;
 VAR_6->ports[VAR_2].nbi_port = VAR_4;
 VAR_6->ports[VAR_2].phys_port = VAR_5;
}
