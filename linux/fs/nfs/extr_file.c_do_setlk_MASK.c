
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file_lock {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_6__ {int (* lock ) (struct file*,int,struct file_lock*) ;int (* have_delegation ) (struct inode*,int ) ;} ;
struct TYPE_5__ {struct inode* host; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,struct file_lock*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct inode*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct file*,int,struct file_lock*) ;
 int FUNC_7 (struct inode*,int ) ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_1, int VAR_2, struct file_lock *VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_1->f_mapping->host;
 int VAR_6;





 VAR_6 = FUNC_4(VAR_1->f_mapping);
 if (VAR_6 != 0)
  goto out;





 if (!VAR_4)
  VAR_6 = FUNC_0(VAR_5)->lock(VAR_1, VAR_2, VAR_3);
 else
  VAR_6 = FUNC_1(VAR_1, VAR_3);
 if (VAR_6 < 0)
  goto out;
 FUNC_4(VAR_1->f_mapping);
 if (!FUNC_0(VAR_5)->have_delegation(VAR_5, VAR_0)) {
  FUNC_5(VAR_5);
  if (FUNC_2(VAR_1->f_mapping))
   FUNC_3(VAR_5, VAR_1->f_mapping);
 }
out:
 return VAR_6;
}
