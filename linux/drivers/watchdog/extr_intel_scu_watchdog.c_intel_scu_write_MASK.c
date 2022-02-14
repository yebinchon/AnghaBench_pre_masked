
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int timer_set; scalar_t__ timer_started; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static ssize_t FUNC_2(struct file *VAR_1,
         char const *VAR_2,
         size_t VAR_3,
         loff_t *VAR_4)
{

 if (VAR_0.timer_started)

  FUNC_0();
 else

  FUNC_1(VAR_0.timer_set);

 return VAR_3;
}
