
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int cache_validity; int access_cache_entry_lru; } ;
struct nfs_access_entry {int lru; int mask; int cred; } ;
struct inode {int i_lock; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,struct inode*) ;
 int FUNC_3 (int *,int *) ;
 struct nfs_access_entry* FUNC_4 (struct inode*,struct cred const*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_3, const struct cred *VAR_4, struct nfs_access_entry *VAR_5, bool VAR_6)
{
 struct nfs_inode *VAR_7 = FUNC_0(VAR_3);
 struct nfs_access_entry *VAR_8;
 bool VAR_9 = 1;
 int VAR_10;

 FUNC_7(&VAR_3->i_lock);
 for(;;) {
  if (VAR_7->cache_validity & VAR_2)
   goto out_zap;
  VAR_8 = FUNC_4(VAR_3, VAR_4);
  VAR_10 = -VAR_1;
  if (VAR_8 == ((void*)0))
   goto out;

  if (!FUNC_6(VAR_3, VAR_2))
   break;
  VAR_10 = -VAR_0;
  if (!VAR_6)
   goto out;
  if (!VAR_9)
   goto out_zap;
  FUNC_8(&VAR_3->i_lock);
  VAR_10 = FUNC_2(FUNC_1(VAR_3), VAR_3);
  if (VAR_10)
   return VAR_10;
  FUNC_7(&VAR_3->i_lock);
  VAR_9 = 0;
 }
 VAR_5->cred = VAR_8->cred;
 VAR_5->mask = VAR_8->mask;
 FUNC_3(&VAR_8->lru, &VAR_7->access_cache_entry_lru);
 VAR_10 = 0;
out:
 FUNC_8(&VAR_3->i_lock);
 return VAR_10;
out_zap:
 FUNC_8(&VAR_3->i_lock);
 FUNC_5(VAR_3);
 return -VAR_1;
}
