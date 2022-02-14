
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si476x_radio {TYPE_1__* core; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int is_alive; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 struct si476x_radio* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1)
{
 int VAR_2;
 struct si476x_radio *VAR_3 = FUNC_4(VAR_1);

 if (FUNC_2(VAR_1) &&
     FUNC_0(&VAR_3->core->is_alive))
  FUNC_1(VAR_3->core,
         VAR_0);

 VAR_2 = FUNC_3(VAR_1);

 return VAR_2;
}
