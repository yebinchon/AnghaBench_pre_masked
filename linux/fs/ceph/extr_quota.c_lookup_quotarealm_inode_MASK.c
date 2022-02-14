
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ceph_snap_realm {int ino; } ;
struct ceph_quotarealm_inode {int mutex; struct inode* inode; scalar_t__ timeout; } ;
struct ceph_mds_client {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int *,int ,int) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct super_block*,int ) ;
 struct ceph_quotarealm_inode* FUNC_6 (struct ceph_mds_client*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int ,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct inode *FUNC_12(struct ceph_mds_client *VAR_2,
          struct super_block *VAR_3,
          struct ceph_snap_realm *VAR_4)
{
 struct ceph_quotarealm_inode *VAR_5;
 struct inode *VAR_6;

 VAR_5 = FUNC_6(VAR_2, VAR_4->ino);
 if (!VAR_5)
  return ((void*)0);

 FUNC_8(&VAR_5->mutex);
 if (VAR_5->inode && FUNC_4(VAR_5->inode)) {

  FUNC_9(&VAR_5->mutex);
  return VAR_5->inode;
 }

 if (VAR_5->timeout &&
     FUNC_11(VAR_1, VAR_5->timeout)) {
  FUNC_9(&VAR_5->mutex);
  return ((void*)0);
 }
 if (VAR_5->inode) {

  int VAR_7 = FUNC_3(VAR_5->inode, ((void*)0),
         VAR_0, 1);
  if (VAR_7 >= 0)
   VAR_6 = VAR_5->inode;
  else
   VAR_6 = FUNC_0(VAR_7);
 } else {
  VAR_6 = FUNC_5(VAR_3, VAR_4->ino);
 }

 if (FUNC_1(VAR_6)) {
  FUNC_10("Can't lookup inode %llx (err: %ld)\n",
   VAR_4->ino, FUNC_2(VAR_6));
  VAR_5->timeout = VAR_1 + FUNC_7(60 * 1000);
 } else {
  VAR_5->timeout = 0;
  VAR_5->inode = VAR_6;
 }
 FUNC_9(&VAR_5->mutex);

 return VAR_6;
}
