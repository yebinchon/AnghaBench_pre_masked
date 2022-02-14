
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct inode {int dummy; } ;
struct TYPE_4__ {int len; int name; } ;
struct dentry {int d_lock; TYPE_2__ d_name; int d_parent; } ;
struct TYPE_3__ {struct ceph_mds_lease* iov_base; } ;
struct ceph_msg {int more_to_follow; TYPE_1__ front; } ;
struct ceph_mds_session {int s_con; int s_mds; } ;
struct ceph_mds_lease {char action; void* last; void* first; void* ino; int seq; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct ceph_msg*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char) ;
 struct ceph_msg* FUNC_3 (int ,int,int ,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 struct inode* FUNC_7 (int ) ;
 int FUNC_8 (char*,struct dentry*,int ,int ) ;
 int FUNC_9 (void*,int ,int ) ;
 int FUNC_10 (int ,struct ceph_mds_lease*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct ceph_mds_session *VAR_4,
         struct dentry *VAR_5, char VAR_6,
         u32 VAR_7)
{
 struct ceph_msg *VAR_8;
 struct ceph_mds_lease *VAR_9;
 struct inode *VAR_10;
 int VAR_11 = sizeof(*VAR_9) + sizeof(u32) + VAR_3;

 FUNC_8("lease_send_msg identry %p %s to mds%d\n",
      VAR_5, FUNC_2(VAR_6), VAR_4->s_mds);

 VAR_8 = FUNC_3(VAR_1, VAR_11, VAR_2, 0);
 if (!VAR_8)
  return;
 VAR_9 = VAR_8->front.iov_base;
 VAR_9->action = VAR_6;
 VAR_9->seq = FUNC_5(VAR_7);

 FUNC_11(&VAR_5->d_lock);
 VAR_10 = FUNC_7(VAR_5->d_parent);
 VAR_9->ino = FUNC_6(FUNC_1(VAR_10));
 VAR_9->first = VAR_9->last = FUNC_6(FUNC_4(VAR_10));

 FUNC_10(VAR_5->d_name.len, VAR_9 + 1);
 FUNC_9((void *)(VAR_9 + 1) + 4,
        VAR_5->d_name.name, VAR_5->d_name.len);
 FUNC_12(&VAR_5->d_lock);





 VAR_8->more_to_follow = (VAR_6 == VAR_0);

 FUNC_0(&VAR_4->s_con, VAR_8);
}
