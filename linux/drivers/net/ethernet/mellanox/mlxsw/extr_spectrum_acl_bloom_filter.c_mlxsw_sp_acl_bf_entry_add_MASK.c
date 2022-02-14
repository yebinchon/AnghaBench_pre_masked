
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
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int,unsigned int,int ) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (struct mlxsw_sp_acl_bf*,struct mlxsw_sp_acl_atcam_region*,struct mlxsw_sp_acl_atcam_entry*) ;
 unsigned int FUNC_7 (struct mlxsw_sp_acl_bf*,unsigned int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;

int
FUNC_12(struct mlxsw_sp *VAR_4,
     struct mlxsw_sp_acl_bf *VAR_5,
     struct mlxsw_sp_acl_atcam_region *VAR_6,
     unsigned int VAR_7,
     struct mlxsw_sp_acl_atcam_entry *VAR_8)
{
 unsigned int VAR_9;
 char *VAR_10;
 u16 VAR_11;
 int VAR_12;

 FUNC_8(&VAR_5->lock);

 VAR_11 = FUNC_6(VAR_5, VAR_6, VAR_8);
 VAR_9 = FUNC_7(VAR_5, VAR_7,
         VAR_11);

 if (FUNC_10(&VAR_5->refcnt[VAR_9])) {
  VAR_12 = 0;
  goto unlock;
 }

 VAR_10 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_10) {
  VAR_12 = -VAR_0;
  goto unlock;
 }

 FUNC_3(VAR_10);
 FUNC_4(VAR_10, 0, 1, VAR_7, VAR_11);
 VAR_12 = FUNC_5(VAR_4->core, FUNC_0(VAR_3), VAR_10);
 FUNC_1(VAR_10);
 if (VAR_12)
  goto unlock;

 FUNC_11(&VAR_5->refcnt[VAR_9], 1);
 VAR_12 = 0;

unlock:
 FUNC_9(&VAR_5->lock);
 return VAR_12;
}
