
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct ceph_inode_info {int fscache; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct ceph_inode_info*) ;
 struct ceph_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,struct page*) ;
 int FUNC_4 (int ,struct page*,int ,int ) ;
 int FUNC_5 (struct inode*) ;

void FUNC_6(struct inode *VAR_1, struct page *VAR_2)
{
 struct ceph_inode_info *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 if (!FUNC_0(VAR_2))
  return;

 if (!FUNC_1(VAR_3))
  return;

 VAR_4 = FUNC_4(VAR_3->fscache, VAR_2, FUNC_5(VAR_1),
     VAR_0);
 if (VAR_4)
   FUNC_3(VAR_3->fscache, VAR_2);
}
