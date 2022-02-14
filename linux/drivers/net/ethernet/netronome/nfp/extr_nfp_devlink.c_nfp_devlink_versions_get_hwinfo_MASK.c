
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int hwinfo; } ;
struct nfp_devlink_versions_simple {int key; int hwinfo; } ;
struct devlink_info_req {int dummy; } ;


 unsigned int FUNC_0 (struct nfp_devlink_versions_simple*) ;
 int FUNC_1 (struct devlink_info_req*,int ,char const*) ;
 struct nfp_devlink_versions_simple* VAR_0 ;
 char* FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct nfp_pf *VAR_1, struct devlink_info_req *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  const struct nfp_devlink_versions_simple *VAR_5;
  const char *VAR_6;

  VAR_5 = &VAR_0[VAR_3];

  VAR_6 = FUNC_2(VAR_1->hwinfo, VAR_5->hwinfo);
  if (!VAR_6)
   continue;

  VAR_4 = FUNC_1(VAR_2, VAR_5->key, VAR_6);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
