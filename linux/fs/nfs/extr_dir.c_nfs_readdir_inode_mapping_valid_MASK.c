
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int cache_validity; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static bool
FUNC_2(struct nfs_inode *VAR_3)
{
 if (VAR_3->cache_validity & (VAR_1|VAR_2))
  return 0;
 FUNC_0();
 return !FUNC_1(VAR_0, &VAR_3->flags);
}
