
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_pgoff; } ;
struct hl_fpriv {int dummy; } ;
struct file {struct hl_fpriv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hl_fpriv*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct hl_fpriv *VAR_4 = VAR_2->private_data;

 if ((VAR_3->vm_pgoff & VAR_1) == VAR_1) {
  VAR_3->vm_pgoff ^= VAR_1;
  return FUNC_0(VAR_4, VAR_3);
 }

 return -VAR_0;
}
