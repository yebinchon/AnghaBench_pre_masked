
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int * vm_ops; } ;
struct v9fs_inode {int v_mutex; void* writeback_fid; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int FUNC_1 (struct p9_fid*) ;
 struct v9fs_inode* FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct file*) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*,struct vm_area_struct*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 struct p9_fid* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct file *VAR_3, struct vm_area_struct *VAR_4)
{
 int VAR_5;
 struct inode *VAR_6;
 struct v9fs_inode *VAR_7;
 struct p9_fid *VAR_8;

 VAR_6 = FUNC_4(VAR_3);
 VAR_7 = FUNC_2(VAR_6);
 FUNC_6(&VAR_7->v_mutex);
 if (!VAR_7->writeback_fid &&
     (VAR_4->vm_flags & VAR_0) &&
     (VAR_4->vm_flags & VAR_1)) {







  VAR_8 = FUNC_8(FUNC_3(VAR_3));
  if (FUNC_0(VAR_8)) {
   VAR_5 = FUNC_1(VAR_8);
   FUNC_7(&VAR_7->v_mutex);
   return VAR_5;
  }
  VAR_7->writeback_fid = (void *) VAR_8;
 }
 FUNC_7(&VAR_7->v_mutex);

 VAR_5 = FUNC_5(VAR_3, VAR_4);
 if (!VAR_5)
  VAR_4->vm_ops = &VAR_2;

 return VAR_5;
}
