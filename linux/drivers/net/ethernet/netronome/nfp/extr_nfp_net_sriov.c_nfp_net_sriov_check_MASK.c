
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nfp_app {TYPE_1__* pf; } ;
struct TYPE_2__ {int num_vfs; int cpp; scalar_t__ vfcfg_tbl2; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct nfp_app *VAR_3, int VAR_4, u16 VAR_5, const char *VAR_6)
{
 u16 VAR_7;

 if (!VAR_3 || !VAR_3->pf->vfcfg_tbl2)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_3->pf->vfcfg_tbl2 + VAR_2);
 if ((VAR_7 & VAR_5) != VAR_5) {
  FUNC_0(VAR_3->pf->cpp, "ndo_set_vf_%s not supported\n", VAR_6);
  return -VAR_1;
 }

 if (VAR_4 < 0 || VAR_4 >= VAR_3->pf->num_vfs) {
  FUNC_0(VAR_3->pf->cpp, "invalid VF id %d\n", VAR_4);
  return -VAR_0;
 }

 return 0;
}
