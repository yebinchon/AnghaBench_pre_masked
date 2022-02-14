
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {TYPE_1__* i_sb; int i_data; } ;
struct ceph_inode_info {scalar_t__ i_truncate_pending; int i_wrbuffer_ref_head; int i_wrbuffer_ref; scalar_t__ i_truncate_size; int i_cap_wq; int i_truncate_mutex; int i_ceph_lock; scalar_t__ i_wr_ref; scalar_t__ i_rd_ref; } ;
struct TYPE_2__ {int s_maxbytes; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ceph_inode_info*,int ,int *) ;
 struct ceph_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (char*,struct inode*,...) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*,scalar_t__) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct inode *VAR_1)
{
 struct ceph_inode_info *VAR_2 = FUNC_2(VAR_1);
 u64 VAR_3;
 int VAR_4, VAR_5 = 0;

 FUNC_5(&VAR_2->i_truncate_mutex);
retry:
 FUNC_7(&VAR_2->i_ceph_lock);
 if (VAR_2->i_truncate_pending == 0) {
  FUNC_3("__do_pending_vmtruncate %p none pending\n", VAR_1);
  FUNC_8(&VAR_2->i_ceph_lock);
  FUNC_6(&VAR_2->i_truncate_mutex);
  return;
 }





 if (VAR_2->i_wrbuffer_ref_head < VAR_2->i_wrbuffer_ref) {
  FUNC_8(&VAR_2->i_ceph_lock);
  FUNC_3("__do_pending_vmtruncate %p flushing snaps first\n",
       VAR_1);
  FUNC_4(&VAR_1->i_data, 0,
          VAR_1->i_sb->s_maxbytes);
  goto retry;
 }


 FUNC_0(VAR_2->i_rd_ref || VAR_2->i_wr_ref);

 VAR_3 = VAR_2->i_truncate_size;
 VAR_4 = VAR_2->i_wrbuffer_ref;
 FUNC_3("__do_pending_vmtruncate %p (%d) to %lld\n", VAR_1,
      VAR_2->i_truncate_pending, VAR_3);
 FUNC_8(&VAR_2->i_ceph_lock);

 FUNC_9(VAR_1, VAR_3);

 FUNC_7(&VAR_2->i_ceph_lock);
 if (VAR_3 == VAR_2->i_truncate_size) {
  VAR_2->i_truncate_pending = 0;
  VAR_5 = 1;
 }
 FUNC_8(&VAR_2->i_ceph_lock);
 if (!VAR_5)
  goto retry;

 FUNC_6(&VAR_2->i_truncate_mutex);

 if (VAR_4 == 0)
  FUNC_1(VAR_2, VAR_0, ((void*)0));

 FUNC_10(&VAR_2->i_cap_wq);
}
