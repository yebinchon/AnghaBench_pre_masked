
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int default_ticks; scalar_t__ running; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned long VAR_5;

 FUNC_1(&VAR_2, VAR_5);
 if (VAR_1.running)
  VAR_1.running = 0;
 VAR_3 = VAR_1.default_ticks;
 FUNC_2(&VAR_2, VAR_5);
 if (VAR_4)
  FUNC_0("stop not possible\n");
 return -VAR_0;
}
