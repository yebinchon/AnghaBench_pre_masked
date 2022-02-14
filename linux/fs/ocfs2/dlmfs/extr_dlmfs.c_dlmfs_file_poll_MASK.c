
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int l_flags; int l_lock; int l_event; } ;
struct dlmfs_inode_private {TYPE_1__ ip_lockres; } ;
typedef int poll_table ;
typedef int __poll_t ;


 struct dlmfs_inode_private* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_3, poll_table *VAR_4)
{
 __poll_t VAR_5 = 0;
 struct inode *VAR_6 = FUNC_1(VAR_3);
 struct dlmfs_inode_private *VAR_7 = FUNC_0(VAR_6);

 FUNC_2(VAR_3, &VAR_7->ip_lockres.l_event, VAR_4);

 FUNC_3(&VAR_7->ip_lockres.l_lock);
 if (VAR_7->ip_lockres.l_flags & VAR_2)
  VAR_5 = VAR_0 | VAR_1;
 FUNC_4(&VAR_7->ip_lockres.l_lock);

 return VAR_5;
}
