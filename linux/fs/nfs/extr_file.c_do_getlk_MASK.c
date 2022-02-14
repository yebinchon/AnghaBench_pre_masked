
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file_lock {unsigned int fl_type; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_4__ {int (* lock ) (struct file*,int,struct file_lock*) ;scalar_t__ (* have_delegation ) (struct inode*,int ) ;} ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,struct file_lock*) ;
 scalar_t__ FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct file*,int,struct file_lock*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_2, int VAR_3, struct file_lock *VAR_4, int VAR_5)
{
 struct inode *VAR_6 = VAR_2->f_mapping->host;
 int VAR_7 = 0;
 unsigned int VAR_8 = VAR_4->fl_type;


 FUNC_1(VAR_2, VAR_4);
 if (VAR_4->fl_type != VAR_1) {

  goto out;
 }
 VAR_4->fl_type = VAR_8;

 if (FUNC_0(VAR_6)->have_delegation(VAR_6, VAR_0))
  goto out_noconflict;

 if (VAR_5)
  goto out_noconflict;

 VAR_7 = FUNC_0(VAR_6)->lock(VAR_2, VAR_3, VAR_4);
out:
 return VAR_7;
out_noconflict:
 VAR_4->fl_type = VAR_1;
 goto out;
}
