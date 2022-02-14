
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_lock; int io_addr; int supports_temp; scalar_t__ command_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(int *VAR_4)
{

 if (VAR_3.command_mode)
  return -1;

 *VAR_4 = 0;
 if (!VAR_3.supports_temp)
  return -VAR_1;





 FUNC_2(&VAR_3.io_lock);
 *VAR_4 = ((FUNC_0(VAR_3.io_addr)) * 9 / 5) + 32;
 FUNC_3(&VAR_3.io_lock);

 if (VAR_2 >= VAR_0) {
  FUNC_1("temperature is: %d F\n", *VAR_4);
 }

 return 0;
}
