
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_mds_session {scalar_t__ s_cap_gen; int s_cap_lock; int s_cap_reconnect; int s_nr_caps; struct ceph_cap* s_cap_iterator; int i_sb; } ;
struct ceph_mds_client {int dummy; } ;
struct TYPE_3__ {int ino; } ;
struct ceph_inode_info {scalar_t__ i_wr_ref; scalar_t__ i_snap_realm; TYPE_1__ i_vino; struct ceph_cap* i_auth_cap; int i_caps; struct ceph_mds_session vfs_inode; } ;
struct ceph_cap {scalar_t__ cap_gen; int queue_release; int cap_ino; struct ceph_inode_info* ci; struct ceph_mds_session* session; int session_caps; int ci_node; } ;
struct TYPE_4__ {struct ceph_mds_client* mdsc; } ;


 int FUNC_0 (struct ceph_mds_client*,struct ceph_inode_info*) ;
 int FUNC_1 (struct ceph_inode_info*) ;
 int FUNC_2 (struct ceph_inode_info*) ;
 int FUNC_3 (struct ceph_mds_session*,struct ceph_cap*) ;
 int FUNC_4 (struct ceph_mds_client*,struct ceph_cap*) ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (char*,struct ceph_cap*,struct ceph_mds_session*) ;
 int FUNC_7 (struct ceph_inode_info*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct ceph_cap *VAR_0, bool VAR_1)
{
 struct ceph_mds_session *VAR_2 = VAR_0->session;
 struct ceph_inode_info *VAR_3 = VAR_0->ci;
 struct ceph_mds_client *VAR_4 =
  FUNC_5(VAR_3->vfs_inode.i_sb)->mdsc;
 int VAR_5 = 0;

 FUNC_6("__ceph_remove_cap %p from %p\n", VAR_0, &VAR_3->vfs_inode);


 FUNC_9(&VAR_0->ci_node, &VAR_3->i_caps);
 if (VAR_3->i_auth_cap == VAR_0)
  VAR_3->i_auth_cap = ((void*)0);


 FUNC_10(&VAR_2->s_cap_lock);
 if (VAR_2->s_cap_iterator == VAR_0) {

  FUNC_6("__ceph_remove_cap  delaying %p removal from session %p\n",
       VAR_0, VAR_0->session);
 } else {
  FUNC_8(&VAR_0->session_caps);
  VAR_2->s_nr_caps--;
  VAR_0->session = ((void*)0);
  VAR_5 = 1;
 }

 VAR_0->ci = ((void*)0);





 if (VAR_1 &&
     (!VAR_2->s_cap_reconnect || VAR_0->cap_gen == VAR_2->s_cap_gen)) {
  VAR_0->queue_release = 1;
  if (VAR_5) {
   FUNC_3(VAR_2, VAR_0);
   VAR_5 = 0;
  }
 } else {
  VAR_0->queue_release = 0;
 }
 VAR_0->cap_ino = VAR_3->i_vino.ino;

 FUNC_11(&VAR_2->s_cap_lock);

 if (VAR_5)
  FUNC_4(VAR_4, VAR_0);





 if (!FUNC_1(VAR_3) && VAR_3->i_wr_ref == 0 && VAR_3->i_snap_realm)
  FUNC_7(VAR_3);

 if (!FUNC_2(VAR_3))
  FUNC_0(VAR_4, VAR_3);
}
