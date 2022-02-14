
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfp_repr {TYPE_3__* dst; } ;
struct net_device {int gso_max_segs; int gso_max_size; } ;
struct TYPE_4__ {struct net_device* lower_dev; } ;
struct TYPE_5__ {TYPE_1__ port_info; } ;
struct TYPE_6__ {TYPE_2__ u; } ;


 struct nfp_repr* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

void
FUNC_2(struct net_device *VAR_0, struct net_device *VAR_1)
{
 struct nfp_repr *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->dst->u.port_info.lower_dev != VAR_1)
  return;

 VAR_0->gso_max_size = VAR_1->gso_max_size;
 VAR_0->gso_max_segs = VAR_1->gso_max_segs;

 FUNC_1(VAR_0);
}
