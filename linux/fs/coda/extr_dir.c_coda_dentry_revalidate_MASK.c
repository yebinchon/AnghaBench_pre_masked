
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct coda_inode_info {int c_flags; int c_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct coda_inode_info* FUNC_0 (struct inode*) ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct dentry*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct dentry *VAR_5, unsigned int VAR_6)
{
 struct inode *VAR_7;
 struct coda_inode_info *VAR_8;

 if (VAR_6 & VAR_4)
  return -VAR_3;

 VAR_7 = FUNC_3(VAR_5);
 if (!VAR_7 || FUNC_5(VAR_7))
  goto out;
 if (FUNC_4(VAR_7))
  goto bad;

 VAR_8 = FUNC_0(FUNC_3(VAR_5));
 if (!(VAR_8->c_flags & (VAR_1 | VAR_0)))
  goto out;

 FUNC_6(VAR_5);


 if (VAR_8->c_flags & VAR_0)
  FUNC_1(VAR_7, VAR_0);

 if (FUNC_2(VAR_5) > 1)

  goto out;


 FUNC_7(&VAR_8->c_lock);
 VAR_8->c_flags &= ~(VAR_2 | VAR_1 | VAR_0);
 FUNC_8(&VAR_8->c_lock);
bad:
 return 0;
out:
 return 1;
}
