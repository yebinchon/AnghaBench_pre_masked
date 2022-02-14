
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; } ;
struct s5p_mfc_ctx {int vq_dst; int vq_src; } ;
struct file {int private_data; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct s5p_mfc_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct s5p_mfc_ctx *VAR_4 = FUNC_0(VAR_2->private_data);
 unsigned long VAR_5 = VAR_3->vm_pgoff << VAR_1;
 int VAR_6;

 if (VAR_5 < VAR_0) {
  FUNC_1(2, "mmaping source\n");
  VAR_6 = FUNC_2(&VAR_4->vq_src, VAR_3);
 } else {
  FUNC_1(2, "mmaping destination\n");
  VAR_3->vm_pgoff -= (VAR_0 >> VAR_1);
  VAR_6 = FUNC_2(&VAR_4->vq_dst, VAR_3);
 }
 return VAR_6;
}
