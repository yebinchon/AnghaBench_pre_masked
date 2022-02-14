
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si476x_radio {TYPE_1__* core; } ;
struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
typedef int __poll_t ;
struct TYPE_2__ {int rds_fifo; int is_alive; int rds_read_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct poll_table_struct*) ;
 int FUNC_3 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_4 (struct file*,struct poll_table_struct*) ;
 struct si476x_radio* FUNC_5 (struct file*) ;

__attribute__((used)) static __poll_t FUNC_6(struct file *VAR_3,
    struct poll_table_struct *VAR_4)
{
 struct si476x_radio *VAR_5 = FUNC_5(VAR_3);
 __poll_t VAR_6 = FUNC_2(VAR_4);
 __poll_t VAR_7 = FUNC_4(VAR_3, VAR_4);

 if (VAR_6 & (VAR_1 | VAR_2)) {
  if (FUNC_0(&VAR_5->core->is_alive))
   FUNC_3(VAR_3, &VAR_5->core->rds_read_queue, VAR_4);

  if (!FUNC_0(&VAR_5->core->is_alive))
   VAR_7 = VAR_0;

  if (!FUNC_1(&VAR_5->core->rds_fifo))
   VAR_7 = VAR_1 | VAR_2;
 }

 return VAR_7;
}
