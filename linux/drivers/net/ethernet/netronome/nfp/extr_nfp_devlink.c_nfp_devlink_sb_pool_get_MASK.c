
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nfp_pf {int dummy; } ;
struct devlink_sb_pool_info {int dummy; } ;
struct devlink {int dummy; } ;


 struct nfp_pf* FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct nfp_pf*,unsigned int,int ,struct devlink_sb_pool_info*) ;

__attribute__((used)) static int
FUNC_2(struct devlink *VAR_0, unsigned int VAR_1,
   u16 VAR_2, struct devlink_sb_pool_info *VAR_3)
{
 struct nfp_pf *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
}
