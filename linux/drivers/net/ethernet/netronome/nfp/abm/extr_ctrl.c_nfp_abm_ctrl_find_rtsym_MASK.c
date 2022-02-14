
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_rtsym {int dummy; } ;
struct nfp_pf {int cpp; int rtbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfp_rtsym const* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 struct nfp_rtsym* FUNC_2 (int ,char const*) ;
 unsigned int FUNC_3 (struct nfp_rtsym const*) ;

__attribute__((used)) static const struct nfp_rtsym *
FUNC_4(struct nfp_pf *VAR_2, const char *VAR_3, unsigned int VAR_4)
{
 const struct nfp_rtsym *VAR_5;

 VAR_5 = FUNC_2(VAR_2->rtbl, VAR_3);
 if (!VAR_5) {
  FUNC_1(VAR_2->cpp, "Symbol '%s' not found\n", VAR_3);
  return FUNC_0(-VAR_1);
 }
 if (FUNC_3(VAR_5) != VAR_4) {
  FUNC_1(VAR_2->cpp,
   "Symbol '%s' wrong size: expected %u got %llu\n",
   VAR_3, VAR_4, FUNC_3(VAR_5));
  return FUNC_0(-VAR_0);
 }

 return VAR_5;
}
