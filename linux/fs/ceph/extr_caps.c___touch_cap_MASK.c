
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_mds_session {int s_cap_lock; int s_mds; int s_caps; int s_cap_iterator; } ;
struct ceph_cap {TYPE_1__* ci; int session_caps; struct ceph_mds_session* session; } ;
struct TYPE_2__ {int vfs_inode; } ;


 int FUNC_0 (char*,int *,struct ceph_cap*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ceph_cap *VAR_0)
{
 struct ceph_mds_session *VAR_1 = VAR_0->session;

 FUNC_2(&VAR_1->s_cap_lock);
 if (!VAR_1->s_cap_iterator) {
  FUNC_0("__touch_cap %p cap %p mds%d\n", &VAR_0->ci->vfs_inode, VAR_0,
       VAR_1->s_mds);
  FUNC_1(&VAR_0->session_caps, &VAR_1->s_caps);
 } else {
  FUNC_0("__touch_cap %p cap %p mds%d NOP, iterating over caps\n",
       &VAR_0->ci->vfs_inode, VAR_0, VAR_1->s_mds);
 }
 FUNC_3(&VAR_1->s_cap_lock);
}
