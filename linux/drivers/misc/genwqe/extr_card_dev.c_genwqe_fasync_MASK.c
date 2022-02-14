
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_file {int async_queue; } ;
struct file {scalar_t__ private_data; } ;


 int FUNC_0 (int,struct file*,int,int *) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct file *VAR_1, int VAR_2)
{
 struct genwqe_file *VAR_3 = (struct genwqe_file *)VAR_1->private_data;

 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3->async_queue);
}
