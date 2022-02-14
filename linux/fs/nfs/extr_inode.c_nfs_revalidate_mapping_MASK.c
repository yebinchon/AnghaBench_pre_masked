
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {unsigned long flags; int cache_validity; } ;
struct inode {int i_lock; } ;
struct address_space {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 struct nfs_inode* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int FUNC_3 (int ,struct inode*) ;
 int FUNC_4 (int ,unsigned long*) ;
 int FUNC_5 (struct inode*,struct address_space*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int VAR_4 ;
 int FUNC_7 (int ,unsigned long*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,unsigned long*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,int) ;
 int FUNC_15 (unsigned long*,int ,int ,int ) ;
 int FUNC_16 (unsigned long*,int ) ;

int FUNC_17(struct inode *VAR_5,
  struct address_space *VAR_6)
{
 struct nfs_inode *VAR_7 = FUNC_1(VAR_5);
 unsigned long *VAR_8 = &VAR_7->flags;
 int VAR_9 = 0;


 if (FUNC_0(VAR_5))
  goto out;

 if (FUNC_6(VAR_5)) {
  VAR_9 = FUNC_3(FUNC_2(VAR_5), VAR_5);
  if (VAR_9 < 0)
   goto out;
 }
 for (;;) {
  VAR_9 = FUNC_15(VAR_8, VAR_1,
      VAR_4, VAR_3);
  if (VAR_9)
   goto out;
  FUNC_10(&VAR_5->i_lock);
  if (FUNC_12(VAR_1, VAR_8)) {
   FUNC_11(&VAR_5->i_lock);
   continue;
  }
  if (VAR_7->cache_validity & VAR_2)
   break;
  FUNC_11(&VAR_5->i_lock);
  goto out;
 }

 FUNC_7(VAR_1, VAR_8);
 FUNC_9();
 VAR_7->cache_validity &= ~(VAR_2|
   VAR_0);
 FUNC_11(&VAR_5->i_lock);
 FUNC_13(VAR_5);
 VAR_9 = FUNC_5(VAR_5, VAR_6);
 FUNC_14(VAR_5, VAR_9);

 FUNC_4(VAR_1, VAR_8);
 FUNC_8();
 FUNC_16(VAR_8, VAR_1);
out:
 return VAR_9;
}
