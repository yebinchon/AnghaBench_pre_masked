
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct gsc_dev {int lock; } ;
struct gsc_ctx {int m2m_ctx; struct gsc_dev* gsc_dev; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 struct gsc_ctx* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,int ,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct gsc_ctx *VAR_3 = FUNC_0(VAR_1->private_data);
 struct gsc_dev *VAR_4 = VAR_3->gsc_dev;
 int VAR_5;

 if (FUNC_1(&VAR_4->lock))
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_1, VAR_3->m2m_ctx, VAR_2);
 FUNC_2(&VAR_4->lock);

 return VAR_5;
}
