
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct nfp_pf {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct devlink {int dummy; } ;
typedef enum devlink_sb_threshold_type { ____Placeholder_devlink_sb_threshold_type } devlink_sb_threshold_type ;


 struct nfp_pf* FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct nfp_pf*,unsigned int,int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct devlink *VAR_0, unsigned int VAR_1,
   u16 VAR_2,
   u32 VAR_3, enum devlink_sb_threshold_type VAR_4,
   struct netlink_ext_ack *VAR_5)
{
 struct nfp_pf *VAR_6 = FUNC_0(VAR_0);

 return FUNC_1(VAR_6, VAR_1, VAR_2,
           VAR_3, VAR_4);
}
