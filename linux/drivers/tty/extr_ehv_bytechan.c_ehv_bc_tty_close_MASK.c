
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {size_t index; } ;
struct file {int dummy; } ;
struct ehv_bc_data {int port; scalar_t__ dev; } ;


 struct ehv_bc_data* VAR_0 ;
 int FUNC_0 (int *,struct tty_struct*,struct file*) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_1, struct file *VAR_2)
{
 struct ehv_bc_data *VAR_3 = &VAR_0[VAR_1->index];

 if (VAR_3->dev)
  FUNC_0(&VAR_3->port, VAR_1, VAR_2);
}
