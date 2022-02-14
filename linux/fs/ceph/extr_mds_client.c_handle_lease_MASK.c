
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct qstr {int len; void* name; int hash; } ;
struct inode {int dummy; } ;
struct dentry {int d_lock; } ;
struct ceph_vino {struct inode* ino; int snap; } ;
struct TYPE_4__ {int iov_len; struct ceph_mds_lease* iov_base; } ;
struct ceph_msg {TYPE_2__ front; } ;
struct ceph_mds_session {int s_mds; int s_mutex; int s_con; int s_cap_gen; int s_seq; } ;
struct ceph_mds_lease {int action; int duration_ms; int seq; int ino; } ;
struct ceph_mds_client {TYPE_1__* fsc; } ;
struct ceph_dentry_info {int lease_renew_from; int lease_renew_after; int time; int lease_seq; int lease_gen; struct ceph_mds_session* lease_session; } ;
struct TYPE_3__ {struct super_block* sb; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *,struct ceph_msg*) ;
 struct ceph_dentry_info* FUNC_4 (struct dentry*) ;
 struct inode* FUNC_5 (struct super_block*,struct ceph_vino) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ceph_msg*) ;
 int FUNC_8 (struct ceph_msg*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 struct dentry* FUNC_11 (struct inode*) ;
 struct dentry* FUNC_12 (struct dentry*,struct qstr*) ;
 int FUNC_13 (char*,int,...) ;
 int FUNC_14 (struct dentry*) ;
 int FUNC_15 (struct dentry*,void*,int) ;
 int FUNC_16 (struct ceph_mds_lease*) ;
 int FUNC_17 (int ) ;
 struct inode* FUNC_18 (int ) ;
 unsigned long FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static void FUNC_25(struct ceph_mds_client *VAR_2,
    struct ceph_mds_session *VAR_3,
    struct ceph_msg *VAR_4)
{
 struct super_block *VAR_5 = VAR_2->fsc->sb;
 struct inode *VAR_6;
 struct dentry *VAR_7, *VAR_8;
 struct ceph_dentry_info *VAR_9;
 int VAR_10 = VAR_3->s_mds;
 struct ceph_mds_lease *VAR_11 = VAR_4->front.iov_base;
 u32 VAR_12;
 struct ceph_vino VAR_13;
 struct qstr VAR_14;
 int VAR_15 = 0;

 FUNC_13("handle_lease from mds%d\n", VAR_10);


 if (VAR_4->front.iov_len < sizeof(*VAR_11) + sizeof(u32))
  goto bad;
 VAR_13.ino = FUNC_18(VAR_11->ino);
 VAR_13.snap = VAR_1;
 VAR_12 = FUNC_17(VAR_11->seq);
 VAR_14.len = FUNC_16(VAR_11 + 1);
 if (VAR_4->front.iov_len < sizeof(*VAR_11) + sizeof(u32) + VAR_14.len)
  goto bad;
 VAR_14.name = (void *)(VAR_11 + 1) + sizeof(u32);


 VAR_6 = FUNC_5(VAR_5, VAR_13);
 FUNC_13("handle_lease %s, ino %llx %p %.*s\n",
      FUNC_6(VAR_11->action), VAR_13.ino, VAR_6,
      VAR_14.len, VAR_14.name);

 FUNC_20(&VAR_3->s_mutex);
 VAR_3->s_seq++;

 if (!VAR_6) {
  FUNC_13("handle_lease no inode %llx\n", VAR_13.ino);
  goto release;
 }


 VAR_7 = FUNC_11(VAR_6);
 if (!VAR_7) {
  FUNC_13("no parent dentry on inode %p\n", VAR_6);
  FUNC_0(1);
  goto release;
 }
 VAR_14.hash = FUNC_15(VAR_7, VAR_14.name, VAR_14.len);
 VAR_8 = FUNC_12(VAR_7, &VAR_14);
 FUNC_14(VAR_7);
 if (!VAR_8)
  goto release;

 FUNC_23(&VAR_8->d_lock);
 VAR_9 = FUNC_4(VAR_8);
 switch (VAR_11->action) {
 case 128:
  if (VAR_9->lease_session == VAR_3) {
   if (FUNC_9(VAR_9->lease_seq, VAR_12) > 0)
    VAR_11->seq = FUNC_10(VAR_9->lease_seq);
   FUNC_1(VAR_8);
  }
  VAR_15 = 1;
  break;

 case 129:
  if (VAR_9->lease_session == VAR_3 &&
      VAR_9->lease_gen == VAR_3->s_cap_gen &&
      VAR_9->lease_renew_from &&
      VAR_9->lease_renew_after == 0) {
   unsigned long VAR_16 =
    FUNC_19(FUNC_17(VAR_11->duration_ms));

   VAR_9->lease_seq = VAR_12;
   VAR_9->time = VAR_9->lease_renew_from + VAR_16;
   VAR_9->lease_renew_after = VAR_9->lease_renew_from +
    (VAR_16 >> 1);
   VAR_9->lease_renew_from = 0;
  }
  break;
 }
 FUNC_24(&VAR_8->d_lock);
 FUNC_14(VAR_8);

 if (!VAR_15)
  goto out;

release:

 VAR_11->action = VAR_0;
 FUNC_8(VAR_4);
 FUNC_3(&VAR_3->s_con, VAR_4);

out:
 FUNC_21(&VAR_3->s_mutex);

 FUNC_2(VAR_6);
 return;

bad:
 FUNC_22("corrupt lease message\n");
 FUNC_7(VAR_4);
}
