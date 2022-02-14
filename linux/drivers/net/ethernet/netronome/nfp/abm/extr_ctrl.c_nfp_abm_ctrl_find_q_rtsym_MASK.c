
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_rtsym {int dummy; } ;
struct nfp_abm {TYPE_1__* app; int pf_id; int num_bands; } ;
typedef int pf_symbol ;
struct TYPE_2__ {int pf; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int ,int ) ;
 struct nfp_rtsym const* FUNC_1 (int ,char*,size_t) ;
 scalar_t__ FUNC_2 (struct nfp_abm*) ;
 int FUNC_3 (char*,int,char const*,int ,char*) ;

__attribute__((used)) static const struct nfp_rtsym *
FUNC_4(struct nfp_abm *VAR_1, const char *VAR_2,
     size_t VAR_3)
{
 char VAR_4[64];

 VAR_3 = FUNC_0(VAR_3, VAR_1->num_bands, VAR_0);
 FUNC_3(VAR_4, sizeof(VAR_4), VAR_2,
   VAR_1->pf_id, FUNC_2(VAR_1) ? "_per_band" : "");

 return FUNC_1(VAR_1->app->pf, VAR_4, VAR_3);
}
