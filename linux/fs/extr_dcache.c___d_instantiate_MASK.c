
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_dentry; } ;
struct TYPE_2__ {int d_alias; } ;
struct dentry {int d_flags; int d_lock; int d_seq; TYPE_1__ d_u; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*,struct inode*,unsigned int) ;
 unsigned int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct dentry *VAR_2, struct inode *VAR_3)
{
 unsigned VAR_4 = FUNC_2(VAR_3);
 FUNC_0(FUNC_3(VAR_2));

 FUNC_8(&VAR_2->d_lock);



 if (VAR_2->d_flags & VAR_0)
  FUNC_10(VAR_1);
 FUNC_5(&VAR_2->d_u.d_alias, &VAR_3->i_dentry);
 FUNC_6(&VAR_2->d_seq);
 FUNC_1(VAR_2, VAR_3, VAR_4);
 FUNC_7(&VAR_2->d_seq);
 FUNC_4(VAR_2);
 FUNC_9(&VAR_2->d_lock);
}
