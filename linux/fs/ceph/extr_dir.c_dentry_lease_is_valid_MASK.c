
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dentry {int d_lock; } ;
struct ceph_mds_session {int dummy; } ;
struct ceph_dentry_info {int lease_renew_from; scalar_t__ lease_renew_after; int lease_seq; int lease_session; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct ceph_dentry_info*) ;
 struct ceph_dentry_info* FUNC_1 (struct dentry*) ;
 struct ceph_mds_session* FUNC_2 (int ) ;
 int FUNC_3 (struct ceph_mds_session*,struct dentry*,int ,int ) ;
 int FUNC_4 (struct ceph_mds_session*) ;
 int FUNC_5 (char*,struct dentry*,int) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct dentry *VAR_4, unsigned int VAR_5)
{
 struct ceph_dentry_info *VAR_6;
 struct ceph_mds_session *VAR_7 = ((void*)0);
 u32 VAR_8 = 0;
 int VAR_9 = 0;

 FUNC_6(&VAR_4->d_lock);
 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 && FUNC_0(VAR_6)) {
  VAR_9 = 1;

  if (VAR_6->lease_renew_after &&
      FUNC_8(VAR_3, VAR_6->lease_renew_after)) {





   if (VAR_5 & VAR_2) {
    VAR_9 = -VAR_1;
   } else {
    VAR_7 = FUNC_2(VAR_6->lease_session);
    VAR_8 = VAR_6->lease_seq;
    VAR_6->lease_renew_after = 0;
    VAR_6->lease_renew_from = VAR_3;
   }
  }
 }
 FUNC_7(&VAR_4->d_lock);

 if (VAR_7) {
  FUNC_3(VAR_7, VAR_4,
      VAR_0, VAR_8);
  FUNC_4(VAR_7);
 }
 FUNC_5("dentry_lease_is_valid - dentry %p = %d\n", VAR_4, VAR_9);
 return VAR_9;
}
