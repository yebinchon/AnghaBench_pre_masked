
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; int running; int timer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned long VAR_10;

 FUNC_2(&VAR_7, VAR_10);
 if (!VAR_6.queue) {
  VAR_6.queue = 1;
  FUNC_1(0, VAR_9 + VAR_4);
  FUNC_1(0, VAR_9 + VAR_5);
  FUNC_1(1, VAR_9 + VAR_2);
  FUNC_1(0, VAR_9 + VAR_3);
  FUNC_1(0, VAR_9 + VAR_0);
  FUNC_0(&VAR_6.timer, VAR_8 + VAR_1);
 }

 VAR_6.running++;
 FUNC_3(&VAR_7, VAR_10);
}
