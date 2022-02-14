
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfp_devlink_versions {int key; int id; } ;
struct devlink_info_req {int dummy; } ;


 unsigned int FUNC_0 (struct nfp_devlink_versions*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct devlink_info_req*,int ,char const*) ;
 int FUNC_4 (struct devlink_info_req*,int ,char const*) ;
 struct nfp_devlink_versions* VAR_1 ;
 char* FUNC_5 (int ,int,int const*,unsigned int) ;

__attribute__((used)) static int
FUNC_6(struct devlink_info_req *VAR_2, bool VAR_3,
        const u8 *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  const struct nfp_devlink_versions *VAR_8;
  const char *VAR_9;

  VAR_8 = &VAR_1[VAR_6];

  VAR_9 = FUNC_5(VAR_8->id, VAR_3, VAR_4, VAR_5);
  if (FUNC_1(VAR_9)) {
   if (FUNC_2(VAR_9) == -VAR_0)
    continue;
   else
    return FUNC_2(VAR_9);
  }

  if (VAR_3)
   VAR_7 = FUNC_4(VAR_2, VAR_8->key,
             VAR_9);
  else
   VAR_7 = FUNC_3(VAR_2, VAR_8->key,
              VAR_9);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
