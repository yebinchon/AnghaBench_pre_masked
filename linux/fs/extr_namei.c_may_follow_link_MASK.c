
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nameidata {int flags; TYPE_2__* stack; int name; struct inode* inode; struct inode* link_inode; } ;
struct inode {int i_mode; int i_uid; } ;
typedef int kuid_t ;
struct TYPE_6__ {int fsuid; } ;
struct TYPE_4__ {int dentry; } ;
struct TYPE_5__ {TYPE_1__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 () ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(struct nameidata *VAR_6)
{
 const struct inode *VAR_7;
 const struct inode *VAR_8;
 kuid_t VAR_9;

 if (!VAR_5)
  return 0;


 VAR_7 = VAR_6->link_inode;
 if (FUNC_3(FUNC_2()->fsuid, VAR_7->i_uid))
  return 0;


 VAR_8 = VAR_6->inode;
 if ((VAR_8->i_mode & (VAR_3|VAR_4)) != (VAR_3|VAR_4))
  return 0;


 VAR_9 = VAR_8->i_uid;
 if (FUNC_4(VAR_9) && FUNC_3(VAR_9, VAR_7->i_uid))
  return 0;

 if (VAR_6->flags & VAR_2)
  return -VAR_1;

 FUNC_0(VAR_6->name, VAR_6->stack[0].link.dentry, 0);
 FUNC_1("follow_link");
 return -VAR_0;
}
