
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_lock; int i_dentry; } ;
struct TYPE_4__ {int d_alias; } ;
struct dentry {int d_lock; int d_seq; TYPE_2__ d_u; TYPE_1__* d_parent; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,struct inode*,unsigned int) ;
 unsigned int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*,unsigned int) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 unsigned int FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static inline void FUNC_14(struct dentry *VAR_0, struct inode *VAR_1)
{
 struct inode *VAR_2 = ((void*)0);
 unsigned VAR_3;
 FUNC_10(&VAR_0->d_lock);
 if (FUNC_13(FUNC_4(VAR_0))) {
  VAR_2 = VAR_0->d_parent->d_inode;
  VAR_3 = FUNC_12(VAR_2);
  FUNC_0(VAR_0);
 }
 if (VAR_1) {
  unsigned VAR_4 = FUNC_3(VAR_1);
  FUNC_7(&VAR_0->d_u.d_alias, &VAR_1->i_dentry);
  FUNC_8(&VAR_0->d_seq);
  FUNC_2(VAR_0, VAR_1, VAR_4);
  FUNC_9(&VAR_0->d_seq);
  FUNC_6(VAR_0);
 }
 FUNC_1(VAR_0);
 if (VAR_2)
  FUNC_5(VAR_2, VAR_3);
 FUNC_11(&VAR_0->d_lock);
 if (VAR_1)
  FUNC_11(&VAR_1->i_lock);
}
