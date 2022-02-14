
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ceph_inode_info {int i_work_mask; int i_work; } ;
struct TYPE_2__ {int inode_wq; } ;


 int VAR_0 ;
 struct ceph_inode_info* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,struct inode*,...) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct inode *VAR_1)
{
 struct ceph_inode_info *VAR_2 = FUNC_0(VAR_1);
 FUNC_6(VAR_0, &VAR_2->i_work_mask);

 FUNC_3(VAR_1);
 if (FUNC_5(FUNC_1(VAR_1)->inode_wq,
         &VAR_2->i_work)) {
  FUNC_2("ceph_queue_vmtruncate %p\n", VAR_1);
 } else {
  FUNC_2("ceph_queue_vmtruncate %p already queued, mask=%lx\n",
       VAR_1, VAR_2->i_work_mask);
  FUNC_4(VAR_1);
 }
}
