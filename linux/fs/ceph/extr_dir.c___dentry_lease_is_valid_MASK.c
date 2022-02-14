
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ceph_mds_session {scalar_t__ s_cap_gen; unsigned long s_cap_ttl; int s_gen_ttl_lock; } ;
struct ceph_dentry_info {scalar_t__ lease_gen; unsigned long time; struct ceph_mds_session* lease_session; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct ceph_dentry_info *VAR_1)
{
 struct ceph_mds_session *VAR_2;

 if (!VAR_1->lease_gen)
  return 0;

 VAR_2 = VAR_1->lease_session;
 if (VAR_2) {
  u32 VAR_3;
  unsigned long VAR_4;

  FUNC_0(&VAR_2->s_gen_ttl_lock);
  VAR_3 = VAR_2->s_cap_gen;
  VAR_4 = VAR_2->s_cap_ttl;
  FUNC_1(&VAR_2->s_gen_ttl_lock);

  if (VAR_1->lease_gen == VAR_3 &&
      FUNC_2(VAR_0, VAR_4) &&
      FUNC_2(VAR_0, VAR_1->time))
   return 1;
 }
 VAR_1->lease_gen = 0;
 return 0;
}
