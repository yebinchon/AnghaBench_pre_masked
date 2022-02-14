
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net {int dummy; } ;
struct nfp_app {TYPE_1__* type; } ;
struct TYPE_2__ {int (* vnic_clean ) (struct nfp_app*,struct nfp_net*) ;} ;


 int FUNC_0 (struct nfp_app*,struct nfp_net*) ;

__attribute__((used)) static inline void FUNC_1(struct nfp_app *VAR_0, struct nfp_net *VAR_1)
{
 if (VAR_0->type->vnic_clean)
  VAR_0->type->vnic_clean(VAR_0, VAR_1);
}
