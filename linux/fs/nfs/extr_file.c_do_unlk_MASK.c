
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_lock_context {int dummy; } ;
struct inode {int dummy; } ;
struct file_lock {int fl_flags; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_4__ {int (* lock ) (struct file*,int,struct file_lock*) ;} ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs_lock_context*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct file*,struct file_lock*) ;
 int FUNC_3 (struct file*) ;
 struct nfs_lock_context* FUNC_4 (int ) ;
 int FUNC_5 (struct nfs_lock_context*) ;
 int FUNC_6 (struct nfs_lock_context*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct file*,int,struct file_lock*) ;

__attribute__((used)) static int
FUNC_9(struct file *VAR_1, int VAR_2, struct file_lock *VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_1->f_mapping->host;
 struct nfs_lock_context *VAR_6;
 int VAR_7;





 FUNC_7(VAR_5);

 VAR_6 = FUNC_4(FUNC_3(VAR_1));
 if (!FUNC_0(VAR_6)) {
  VAR_7 = FUNC_5(VAR_6);
  FUNC_6(VAR_6);




  if (VAR_7 < 0 && !(VAR_3->fl_flags & VAR_0))
   return VAR_7;
 }





 if (!VAR_4)
  VAR_7 = FUNC_1(VAR_5)->lock(VAR_1, VAR_2, VAR_3);
 else
  VAR_7 = FUNC_2(VAR_1, VAR_3);
 return VAR_7;
}
