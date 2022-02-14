
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpacpi_rfk {int rfkill; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_status ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(const struct tpacpi_rfk *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = (VAR_2->ops->get_status)();
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_0(VAR_2->rfkill,
       (VAR_3 == VAR_1));

 return VAR_3;
}
