
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
struct ceph_inode_info {int fscache; int i_vino; } ;


 int VAR_0 ;
 struct ceph_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (char*,struct inode*,struct file*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int *,int ,int ,struct inode*) ;
 int FUNC_6 (int ,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct inode*) ;

void FUNC_9(struct inode *VAR_1, struct file *VAR_2)
{
 struct ceph_inode_info *VAR_3 = FUNC_0(VAR_1);

 if (!FUNC_3(VAR_3->fscache))
  return;

 if (FUNC_8(VAR_1)) {
  FUNC_1("fscache_file_set_cookie %p %p disabling cache\n",
       VAR_1, VAR_2);
  FUNC_4(VAR_3->fscache, &VAR_3->i_vino, 0);
  FUNC_6(VAR_3->fscache, VAR_1);
 } else {
  FUNC_5(VAR_3->fscache, &VAR_3->i_vino, FUNC_7(VAR_1),
          VAR_0, VAR_1);
  if (FUNC_2(VAR_3->fscache)) {
   FUNC_1("fscache_file_set_cookie %p %p enabling cache\n",
        VAR_1, VAR_2);
  }
 }
}
