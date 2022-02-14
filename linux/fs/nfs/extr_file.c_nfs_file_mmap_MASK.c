
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int * vm_ops; } ;
struct inode {int dummy; } ;
struct file {int f_mapping; } ;


 int FUNC_0 (char*,struct file*) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,struct vm_area_struct*) ;
 int VAR_0 ;
 int FUNC_3 (struct inode*,int ) ;

int
FUNC_4(struct file * VAR_1, struct vm_area_struct * VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 FUNC_0("NFS: mmap(%pD2)\n", VAR_1);




 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_4) {
  VAR_2->vm_ops = &VAR_0;
  VAR_4 = FUNC_3(VAR_3, VAR_1->f_mapping);
 }
 return VAR_4;
}
