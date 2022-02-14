
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_app {TYPE_1__* pf; } ;
struct TYPE_2__ {int mip; } ;


 char const* FUNC_0 (int ) ;

const char *FUNC_1(struct nfp_app *VAR_0)
{
 if (!VAR_0 || !VAR_0->pf->mip)
  return "";
 return FUNC_0(VAR_0->pf->mip);
}
