
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct ceph_inode_info {int fscache; } ;


 int FUNC_0 (struct page*) ;
 struct ceph_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,struct page*) ;
 int FUNC_3 (int ,struct page*) ;

void FUNC_4(struct inode* VAR_0, struct page *VAR_1)
{
 struct ceph_inode_info *VAR_2 = FUNC_1(VAR_0);

 if (!FUNC_0(VAR_1))
  return;

 FUNC_3(VAR_2->fscache, VAR_1);
 FUNC_2(VAR_2->fscache, VAR_1);
}
