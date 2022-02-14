
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {size_t index; } ;
struct file {int dummy; } ;
struct ehv_bc_data {int port; int dev; } ;


 int VAR_0 ;
 struct ehv_bc_data* VAR_1 ;
 int FUNC_0 (int *,struct tty_struct*,struct file*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_2, struct file *VAR_3)
{
 struct ehv_bc_data *VAR_4 = &VAR_1[VAR_2->index];

 if (!VAR_4->dev)
  return -VAR_0;

 return FUNC_0(&VAR_4->port, VAR_2, VAR_3);
}
