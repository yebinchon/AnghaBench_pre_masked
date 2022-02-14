
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pos; int cached; int lock; int size; } ;
struct fuse_inode {TYPE_1__ rdc; } ;
struct file {int f_mapping; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct file*) ;
 struct fuse_inode* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct file *VAR_1, loff_t VAR_2)
{
 struct fuse_inode *VAR_3 = FUNC_2(FUNC_1(VAR_1));
 loff_t VAR_4;

 FUNC_3(&VAR_3->rdc.lock);

 if (VAR_3->rdc.pos != VAR_2) {
  FUNC_4(&VAR_3->rdc.lock);
  return;
 }

 VAR_3->rdc.cached = 1;
 VAR_4 = FUNC_0(VAR_3->rdc.size, VAR_0);
 FUNC_4(&VAR_3->rdc.lock);


 FUNC_5(VAR_1->f_mapping, VAR_4);
}
