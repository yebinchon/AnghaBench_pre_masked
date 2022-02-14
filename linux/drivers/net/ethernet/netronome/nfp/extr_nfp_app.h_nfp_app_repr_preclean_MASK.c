
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_app {TYPE_1__* type; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* repr_preclean ) (struct nfp_app*,struct net_device*) ;} ;


 int FUNC_0 (struct nfp_app*,struct net_device*) ;

__attribute__((used)) static inline void
FUNC_1(struct nfp_app *VAR_0, struct net_device *VAR_1)
{
 if (VAR_0->type->repr_preclean)
  VAR_0->type->repr_preclean(VAR_0, VAR_1);
}
