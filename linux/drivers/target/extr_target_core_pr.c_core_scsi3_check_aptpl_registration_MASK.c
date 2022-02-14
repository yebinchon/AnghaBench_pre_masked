
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct se_portal_group {int dummy; } ;
struct se_node_acl {int dummy; } ;
struct se_lun {int unpacked_lun; } ;
struct se_device {int dev_reservation_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct se_device*,struct se_portal_group*,struct se_lun*,int ,struct se_node_acl*,int ) ;

int FUNC_1(
 struct se_device *VAR_1,
 struct se_portal_group *VAR_2,
 struct se_lun *VAR_3,
 struct se_node_acl *VAR_4,
 u64 VAR_5)
{
 if (VAR_1->dev_reservation_flags & VAR_0)
  return 0;

 return FUNC_0(VAR_1, VAR_2, VAR_3,
           VAR_3->unpacked_lun, VAR_4,
           VAR_5);
}
