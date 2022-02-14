
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_inode {int cache_validity; int flags; } ;
struct inode {int dummy; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static bool FUNC_5(struct page *VAR_3, struct inode *VAR_4)
{
 struct nfs_inode *VAR_5 = FUNC_0(VAR_4);

 if (FUNC_2(VAR_4))
  goto out;
 if (VAR_5->cache_validity & VAR_2)
  return 0;
 FUNC_3();
 if (FUNC_4(VAR_0, &VAR_5->flags))
  return 0;
out:
 if (VAR_5->cache_validity & VAR_1)
  return 0;
 return FUNC_1(VAR_3) != 0;
}
