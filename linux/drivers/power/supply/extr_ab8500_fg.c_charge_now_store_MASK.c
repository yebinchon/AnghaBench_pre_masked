
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int user_cap; } ;
struct TYPE_3__ {int user_mah; } ;
struct ab8500_fg {int fg_periodic_work; int fg_wq; TYPE_2__ flags; TYPE_1__ bat_cap; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int,unsigned long*) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct ab8500_fg *VAR_0, const char *VAR_1,
     size_t VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, 10, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_0->bat_cap.user_mah = (int) VAR_3;
 VAR_0->flags.user_cap = 1;
 FUNC_1(VAR_0->fg_wq, &VAR_0->fg_periodic_work, 0);
 return VAR_2;
}
