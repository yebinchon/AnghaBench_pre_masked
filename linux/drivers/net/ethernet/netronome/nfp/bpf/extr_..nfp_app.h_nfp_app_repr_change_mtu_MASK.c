
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_app {TYPE_1__* type; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* repr_change_mtu ) (struct nfp_app*,struct net_device*,int) ;} ;


 int FUNC_0 (struct nfp_app*,struct net_device*,int) ;

__attribute__((used)) static inline int
FUNC_1(struct nfp_app *VAR_0, struct net_device *VAR_1,
   int VAR_2)
{
 if (!VAR_0 || !VAR_0->type->repr_change_mtu)
  return 0;
 return VAR_0->type->repr_change_mtu(VAR_0, VAR_1, VAR_2);
}
