
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct sh_veu_file {TYPE_1__* veu_dev; } ;
struct file {struct sh_veu_file* private_data; } ;
struct TYPE_2__ {int m2m_ctx; } ;


 int FUNC_0 (struct file*,int ,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct sh_veu_file *VAR_2 = VAR_0->private_data;

 return FUNC_0(VAR_0, VAR_2->veu_dev->m2m_ctx, VAR_1);
}
