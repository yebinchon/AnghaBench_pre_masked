
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {TYPE_3__* page; TYPE_1__* vma; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct TYPE_11__ {int vnode; int vid; } ;
struct afs_vnode {int cache; TYPE_2__ fid; } ;
struct TYPE_12__ {int index; } ;
struct TYPE_10__ {struct file* vm_file; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int ,int ,int ) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,unsigned long) ;
 int FUNC_10 (struct afs_vnode*,int ,int ,unsigned long) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_3__*) ;

vm_fault_t FUNC_14(struct vm_fault *VAR_5)
{
 struct file *VAR_6 = VAR_5->vma->vm_file;
 struct inode *VAR_7 = FUNC_4(VAR_6);
 struct afs_vnode *VAR_8 = FUNC_0(VAR_7);
 unsigned long VAR_9;

 FUNC_3("{{%llx:%llu}},{%lx}",
        VAR_8->fid.vid, VAR_8->fid.vnode, VAR_5->page->index);

 FUNC_8(VAR_7->i_sb);
 if (FUNC_1(VAR_5->page) &&
     FUNC_12(VAR_5->page, VAR_2) < 0)
  return VAR_4;

 if (FUNC_6(VAR_5->page) < 0)
  return VAR_4;





 FUNC_13(VAR_5->page);

 VAR_9 = (unsigned long)VAR_1 << VAR_0;
 VAR_9 |= 0;
 FUNC_10(VAR_8, FUNC_11("mkwrite"),
        VAR_5->page->index, VAR_9);
 FUNC_2(VAR_5->page);
 FUNC_9(VAR_5->page, VAR_9);

 FUNC_7(VAR_7->i_sb);
 return VAR_3;
}
