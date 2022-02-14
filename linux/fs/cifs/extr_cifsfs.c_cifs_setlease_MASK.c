
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct file_lock {int dummy; } ;
struct file {struct cifsFileInfo* private_data; } ;
struct cifsFileInfo {int tlink; } ;
struct TYPE_2__ {scalar_t__ local_lease; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int FUNC_3 (int ) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*,long,struct file_lock**,void**) ;
 TYPE_1__* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_5, long VAR_6, struct file_lock **VAR_7, void **VAR_8)
{




 struct inode *VAR_9 = FUNC_4(VAR_5);
 struct cifsFileInfo *VAR_10 = VAR_5->private_data;

 if (!(FUNC_3(VAR_9->i_mode)))
  return -VAR_1;


 if (VAR_6 == VAR_3 ||
     ((VAR_6 == VAR_2) && FUNC_0(FUNC_2(VAR_9))) ||
     ((VAR_6 == VAR_4) && FUNC_1(FUNC_2(VAR_9))))
  return FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8);
 else if (FUNC_6(VAR_10->tlink)->local_lease &&
   !FUNC_0(FUNC_2(VAR_9)))
  return FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8);
 else
  return -VAR_0;
}
