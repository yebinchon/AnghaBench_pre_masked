
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file_lock {int fl_type; int fl_flags; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,int,struct file_lock*,int) ;
 int FUNC_2 (struct file*,int,struct file_lock*,int) ;
 int FUNC_3 (char*,struct file*,int,int) ;

int FUNC_4(struct file *VAR_6, int VAR_7, struct file_lock *VAR_8)
{
 struct inode *VAR_9 = VAR_6->f_mapping->host;
 int VAR_10 = 0;

 FUNC_3("NFS: flock(%pD2, t=%x, fl=%x)\n",
   VAR_6, VAR_8->fl_type, VAR_8->fl_flags);

 if (!(VAR_8->fl_flags & VAR_2))
  return -VAR_1;







 if (VAR_8->fl_type & VAR_4)
  return -VAR_0;

 if (FUNC_0(VAR_9)->flags & VAR_5)
  VAR_10 = 1;


 if (VAR_8->fl_type == VAR_3)
  return FUNC_2(VAR_6, VAR_7, VAR_8, VAR_10);
 return FUNC_1(VAR_6, VAR_7, VAR_8, VAR_10);
}
