
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net {int dummy; } ;
struct nfp_app {TYPE_1__* type; } ;
struct TYPE_2__ {int (* vnic_alloc ) (struct nfp_app*,struct nfp_net*,unsigned int) ;} ;


 int FUNC_0 (struct nfp_app*,struct nfp_net*,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(struct nfp_app *VAR_0, struct nfp_net *VAR_1,
         unsigned int VAR_2)
{
 return VAR_0->type->vnic_alloc(VAR_0, VAR_1, VAR_2);
}
