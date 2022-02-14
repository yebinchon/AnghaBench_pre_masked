
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct ashmem_area* private_data; } ;
struct ashmem_area {int prot_mask; int name; int unpinned_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct inode*,struct file*) ;
 struct ashmem_area* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_6, struct file *VAR_7)
{
 struct ashmem_area *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_2(VAR_5, VAR_3);
 if (!VAR_8)
  return -VAR_2;

 FUNC_0(&VAR_8->unpinned_list);
 FUNC_3(VAR_8->name, VAR_0, VAR_1);
 VAR_8->prot_mask = VAR_4;
 VAR_7->private_data = VAR_8;

 return 0;
}
