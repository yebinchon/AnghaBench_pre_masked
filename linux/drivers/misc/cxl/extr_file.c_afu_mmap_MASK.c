
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct file {struct cxl_context* private_data; } ;
struct cxl_context {scalar_t__ status; TYPE_1__* afu; } ;
struct TYPE_4__ {int (* link_ok ) (int ,TYPE_1__*) ;} ;
struct TYPE_3__ {int adapter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cxl_context*,struct vm_area_struct*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*) ;

int FUNC_2(struct file *VAR_3, struct vm_area_struct *VAR_4)
{
 struct cxl_context *VAR_5 = VAR_3->private_data;


 if (VAR_5->status != VAR_1)
  return -VAR_0;

 if (!VAR_2->link_ok(VAR_5->afu->adapter, VAR_5->afu))
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_4);
}
