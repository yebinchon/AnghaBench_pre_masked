
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct eventfd_ctx* private_data; int * f_op; } ;
struct eventfd_ctx {int kref; } ;


 int VAR_0 ;
 struct eventfd_ctx* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

struct eventfd_ctx *FUNC_2(struct file *VAR_2)
{
 struct eventfd_ctx *VAR_3;

 if (VAR_2->f_op != &VAR_1)
  return FUNC_0(-VAR_0);

 VAR_3 = VAR_2->private_data;
 FUNC_1(&VAR_3->kref);
 return VAR_3;
}
