
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_page_prot; } ;
struct mtd_info {struct map_info* priv; } ;
struct mtd_file_info {struct mtd_info* mtd; } ;
struct map_info {scalar_t__ phys; int size; } ;
struct file {int f_flags; struct mtd_file_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vm_area_struct*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, struct vm_area_struct *VAR_6)
{
 return VAR_6->vm_flags & VAR_3 ? 0 : -VAR_0;

}
