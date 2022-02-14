
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_app {TYPE_1__* type; } ;
struct TYPE_2__ {int (* sriov_enable ) (struct nfp_app*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_app*,int) ;

__attribute__((used)) static inline int FUNC_1(struct nfp_app *VAR_1, int VAR_2)
{
 if (!VAR_1 || !VAR_1->type->sriov_enable)
  return -VAR_0;
 return VAR_1->type->sriov_enable(VAR_1, VAR_2);
}
