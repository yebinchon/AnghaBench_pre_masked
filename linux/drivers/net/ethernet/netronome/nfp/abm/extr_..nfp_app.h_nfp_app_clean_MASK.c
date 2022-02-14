
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_app {TYPE_1__* type; } ;
struct TYPE_2__ {int (* clean ) (struct nfp_app*) ;} ;


 int FUNC_0 (struct nfp_app*) ;

__attribute__((used)) static inline void FUNC_1(struct nfp_app *VAR_0)
{
 if (VAR_0->type->clean)
  VAR_0->type->clean(VAR_0);
}
