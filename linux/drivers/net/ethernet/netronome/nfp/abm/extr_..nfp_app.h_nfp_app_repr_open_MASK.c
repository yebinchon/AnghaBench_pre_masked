
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_repr {int dummy; } ;
struct nfp_app {TYPE_1__* type; } ;
struct TYPE_2__ {int (* repr_open ) (struct nfp_app*,struct nfp_repr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_app*,struct nfp_repr*) ;

__attribute__((used)) static inline int FUNC_1(struct nfp_app *VAR_1, struct nfp_repr *VAR_2)
{
 if (!VAR_1->type->repr_open)
  return -VAR_0;
 return VAR_1->type->repr_open(VAR_1, VAR_2);
}
