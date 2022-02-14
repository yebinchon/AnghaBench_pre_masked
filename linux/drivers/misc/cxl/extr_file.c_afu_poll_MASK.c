
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {struct cxl_context* private_data; } ;
struct cxl_context {scalar_t__ status; int pe; int lock; int wq; } ;
typedef int __poll_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct cxl_context*) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__poll_t FUNC_5(struct file *VAR_4, struct poll_table_struct *VAR_5)
{
 struct cxl_context *VAR_6 = VAR_4->private_data;
 __poll_t VAR_7 = 0;
 unsigned long VAR_8;


 FUNC_1(VAR_4, &VAR_6->wq, VAR_5);

 FUNC_2("afu_poll wait done pe: %i\n", VAR_6->pe);

 FUNC_3(&VAR_6->lock, VAR_8);
 if (FUNC_0(VAR_6))
  VAR_7 |= VAR_2 | VAR_3;
 else if (VAR_6->status == VAR_0)


  VAR_7 |= VAR_1;
 FUNC_4(&VAR_6->lock, VAR_8);

 FUNC_2("afu_poll pe: %i returning %#x\n", VAR_6->pe, VAR_7);

 return VAR_7;
}
