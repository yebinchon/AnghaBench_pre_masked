
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfp_repr {TYPE_3__* dst; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int port_id; } ;
struct TYPE_5__ {TYPE_1__ port_info; } ;
struct TYPE_6__ {TYPE_2__ u; } ;


 struct nfp_repr* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline int FUNC_1(struct net_device *VAR_0)
{
 struct nfp_repr *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->dst->u.port_info.port_id;
}
