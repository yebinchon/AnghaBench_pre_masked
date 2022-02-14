
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_ff_layout_mirror {int fh_versions_cnt; int * fh_versions; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static bool FUNC_1(const struct nfs4_ff_layout_mirror *VAR_0,
  const struct nfs4_ff_layout_mirror *VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_0->fh_versions_cnt != VAR_1->fh_versions_cnt)
  return 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->fh_versions_cnt; VAR_2++) {
  bool VAR_4 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_1->fh_versions_cnt; VAR_3++) {
   if (FUNC_0(&VAR_0->fh_versions[VAR_2],
     &VAR_1->fh_versions[VAR_3]) == 0) {
    VAR_4 = 1;
    break;
   }
  }
  if (!VAR_4)
   return 0;
 }
 return 1;
}
