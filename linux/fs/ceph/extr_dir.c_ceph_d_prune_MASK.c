
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_parent; } ;
struct TYPE_2__ {scalar_t__ snap; } ;
struct ceph_inode_info {int i_shared_gen; TYPE_1__ i_vino; } ;
struct ceph_dentry_info {scalar_t__ offset; scalar_t__ lease_shared_gen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct ceph_inode_info*) ;
 int FUNC_2 (struct ceph_inode_info*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct ceph_dentry_info* FUNC_4 (struct dentry*) ;
 struct ceph_inode_info* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (char*,struct dentry*,struct dentry*) ;

__attribute__((used)) static void FUNC_10(struct dentry *VAR_1)
{
 struct ceph_inode_info *VAR_2;
 struct ceph_dentry_info *VAR_3;

 FUNC_9("ceph_d_prune %pd %p\n", VAR_1, VAR_1);


 if (FUNC_0(VAR_1))
  return;


 VAR_2 = FUNC_5(FUNC_6(VAR_1->d_parent));
 if (VAR_2->i_vino.snap == VAR_0)
  return;


 if (FUNC_7(VAR_1))
  return;


 if (!FUNC_8(VAR_1)) {
  FUNC_1(VAR_2);
  return;
 }




 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3->offset > 0 &&
     VAR_3->lease_shared_gen == FUNC_3(&VAR_2->i_shared_gen))
  FUNC_2(VAR_2);
}
