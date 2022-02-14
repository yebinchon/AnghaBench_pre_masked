
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_acl_bf {int lock; int * refcnt; } ;
struct mlxsw_sp_acl_atcam_region {int dummy; } ;
struct mlxsw_sp_acl_atcam_entry {int dummy; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ,unsigned int,int ) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (struct mlxsw_sp_acl_bf*,struct mlxsw_sp_acl_atcam_region*,struct mlxsw_sp_acl_atcam_entry*) ;
 unsigned int FUNC_7 (struct mlxsw_sp_acl_bf*,unsigned int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (int *) ;

void
FUNC_11(struct mlxsw_sp *VAR_3,
     struct mlxsw_sp_acl_bf *VAR_4,
     struct mlxsw_sp_acl_atcam_region *VAR_5,
     unsigned int VAR_6,
     struct mlxsw_sp_acl_atcam_entry *VAR_7)
{
 unsigned int VAR_8;
 char *VAR_9;
 u16 VAR_10;

 FUNC_8(&VAR_4->lock);

 VAR_10 = FUNC_6(VAR_4, VAR_5, VAR_7);
 VAR_8 = FUNC_7(VAR_4, VAR_6,
         VAR_10);

 if (FUNC_10(&VAR_4->refcnt[VAR_8])) {
  VAR_9 = FUNC_2(VAR_1, VAR_0);
  if (!VAR_9)
   goto unlock;

  FUNC_3(VAR_9);
  FUNC_4(VAR_9, 0, 0, VAR_6, VAR_10);
  FUNC_5(VAR_3->core, FUNC_0(VAR_2), VAR_9);
  FUNC_1(VAR_9);
 }

unlock:
 FUNC_9(&VAR_4->lock);
}
