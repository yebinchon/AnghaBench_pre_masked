
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; } ;
struct TYPE_5__ {scalar_t__ name; int len; } ;
struct TYPE_4__ {int d_alias; } ;
struct dentry {scalar_t__ d_iname; TYPE_3__* d_parent; int d_lock; TYPE_2__ d_name; TYPE_1__ d_u; } ;
struct TYPE_6__ {int d_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,char*,unsigned long long) ;

void FUNC_9(struct dentry *VAR_1, struct inode *VAR_2)
{
 FUNC_4(VAR_2);
 FUNC_0(VAR_1->d_name.name != VAR_1->d_iname ||
  !FUNC_3(&VAR_1->d_u.d_alias) ||
  !FUNC_2(VAR_1));
 FUNC_5(&VAR_1->d_parent->d_lock);
 FUNC_6(&VAR_1->d_lock, VAR_0);
 VAR_1->d_name.len = FUNC_8(VAR_1->d_iname, "#%llu",
    (unsigned long long)VAR_2->i_ino);
 FUNC_7(&VAR_1->d_lock);
 FUNC_7(&VAR_1->d_parent->d_lock);
 FUNC_1(VAR_1, VAR_2);
}
