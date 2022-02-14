
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct ceph_mds_session {scalar_t__ s_cap_gen; } ;
struct ceph_mds_reply_lease {int seq; int duration_ms; } ;
struct ceph_dentry_info {scalar_t__ lease_gen; unsigned long time; unsigned long lease_renew_after; scalar_t__ lease_renew_from; void* lease_seq; struct ceph_mds_session* lease_session; int lease_shared_gen; } ;
struct TYPE_2__ {int i_shared_gen; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct ceph_dentry_info*) ;
 int FUNC_1 (struct ceph_dentry_info*) ;
 int FUNC_2 (int *) ;
 struct ceph_dentry_info* FUNC_3 (struct dentry*) ;
 struct ceph_mds_session* FUNC_4 (struct ceph_mds_session*) ;
 TYPE_1__* FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (char*,struct dentry*,unsigned long,unsigned long) ;
 void* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct inode *VAR_2, struct dentry *VAR_3,
      struct ceph_mds_reply_lease *VAR_4,
      struct ceph_mds_session *VAR_5,
      unsigned long VAR_6,
      struct ceph_mds_session **VAR_7)
{
 struct ceph_dentry_info *VAR_8 = FUNC_3(VAR_3);
 long unsigned VAR_9 = FUNC_8(VAR_4->duration_ms);
 long unsigned VAR_10 = VAR_6 + (VAR_9 * VAR_1) / 1000;
 long unsigned VAR_11 = VAR_6 + (VAR_9 * VAR_1 / 2) / 1000;

 FUNC_7("update_dentry_lease %p duration %lu ms ttl %lu\n",
      VAR_3, VAR_9, VAR_10);


 if (FUNC_6(VAR_2) != VAR_0)
  return;

 VAR_8->lease_shared_gen = FUNC_2(&FUNC_5(VAR_2)->i_shared_gen);
 if (VAR_9 == 0) {
  FUNC_0(VAR_8);
  return;
 }

 if (VAR_8->lease_gen == VAR_5->s_cap_gen &&
     FUNC_9(VAR_10, VAR_8->time))
  return;

 if (VAR_8->lease_session && VAR_8->lease_session != VAR_5) {
  *VAR_7 = VAR_8->lease_session;
  VAR_8->lease_session = ((void*)0);
 }

 if (!VAR_8->lease_session)
  VAR_8->lease_session = FUNC_4(VAR_5);
 VAR_8->lease_gen = VAR_5->s_cap_gen;
 VAR_8->lease_seq = FUNC_8(VAR_4->seq);
 VAR_8->lease_renew_after = VAR_11;
 VAR_8->lease_renew_from = 0;
 VAR_8->time = VAR_10;

 FUNC_1(VAR_8);
}
