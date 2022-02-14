
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_file; } ;
struct rb_node {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 struct inode* FUNC_0 (int ) ;
 struct rb_node* FUNC_1 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,unsigned long) ;

__attribute__((used)) static bool
FUNC_5(struct vm_area_struct *VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 loff_t VAR_4, VAR_5;
 struct inode *VAR_6;
 struct rb_node *VAR_7;

 VAR_6 = FUNC_0(VAR_1->vm_file);

 VAR_4 = FUNC_4(VAR_1, VAR_2);
 VAR_5 = VAR_4 + (VAR_3 - VAR_2) - 1;

 FUNC_2(&VAR_0);
 VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_5);
 FUNC_3(&VAR_0);

 return !!VAR_7;
}
