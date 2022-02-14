
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_lock; } ;
struct ceph_mds_session {int dummy; } ;
struct ceph_mds_reply_lease {int dummy; } ;


 int FUNC_0 (struct inode*,struct dentry*,struct ceph_mds_reply_lease*,struct ceph_mds_session*,unsigned long,struct ceph_mds_session**) ;
 int FUNC_1 (struct ceph_mds_session*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct inode *VAR_0, struct dentry *VAR_1,
     struct ceph_mds_reply_lease *VAR_2,
     struct ceph_mds_session *VAR_3,
     unsigned long VAR_4)
{
 struct ceph_mds_session *VAR_5 = ((void*)0);
 FUNC_2(&VAR_1->d_lock);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
         &VAR_5);
 FUNC_3(&VAR_1->d_lock);
 if (VAR_5)
  FUNC_1(VAR_5);
}
