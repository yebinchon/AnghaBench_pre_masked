
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct afs_vnode {int dummy; } ;
typedef enum afs_flock_mode { ____Placeholder_afs_flock_mode } afs_flock_mode ;
typedef scalar_t__ afs_lock_type_t ;
typedef int afs_access_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct afs_vnode*,struct key*,int*) ;
 int FUNC_1 (struct afs_vnode*,struct key*) ;

__attribute__((used)) static int FUNC_2(struct afs_vnode *VAR_5, struct key *VAR_6,
         enum afs_flock_mode VAR_7, afs_lock_type_t VAR_8)
{
 afs_access_t VAR_9;
 int VAR_10;




 VAR_10 = FUNC_1(VAR_5, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;




 VAR_10 = FUNC_0(VAR_5, VAR_6, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;







 if (VAR_8 == VAR_3) {
  if (!(VAR_9 & (VAR_0 | VAR_2 | VAR_1)))
   return -VAR_4;
 } else {
  if (!(VAR_9 & (VAR_0 | VAR_2)))
   return -VAR_4;
 }

 return 0;
}
