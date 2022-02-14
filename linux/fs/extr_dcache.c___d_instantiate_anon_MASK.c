
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_lock; int i_dentry; } ;
struct TYPE_3__ {int d_alias; } ;
struct dentry {int d_lock; TYPE_2__* d_sb; int d_hash; TYPE_1__ d_u; } ;
struct TYPE_4__ {int s_roots; } ;


 unsigned int VAR_0 ;
 struct dentry* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*,struct inode*,unsigned int) ;
 unsigned int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct dentry*,struct inode*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static struct dentry *FUNC_12(struct dentry *VAR_1,
        struct inode *VAR_2,
        bool VAR_3)
{
 struct dentry *VAR_4;
 unsigned VAR_5;

 FUNC_9(VAR_1, VAR_2);
 FUNC_10(&VAR_2->i_lock);
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4) {
  FUNC_11(&VAR_2->i_lock);
  FUNC_3(VAR_1);
  goto out_iput;
 }


 VAR_5 = FUNC_2(VAR_2);

 if (VAR_3)
  VAR_5 |= VAR_0;

 FUNC_10(&VAR_1->d_lock);
 FUNC_1(VAR_1, VAR_2, VAR_5);
 FUNC_4(&VAR_1->d_u.d_alias, &VAR_2->i_dentry);
 if (!VAR_3) {
  FUNC_6(&VAR_1->d_sb->s_roots);
  FUNC_5(&VAR_1->d_hash, &VAR_1->d_sb->s_roots);
  FUNC_7(&VAR_1->d_sb->s_roots);
 }
 FUNC_11(&VAR_1->d_lock);
 FUNC_11(&VAR_2->i_lock);

 return VAR_1;

 out_iput:
 FUNC_8(VAR_2);
 return VAR_4;
}
