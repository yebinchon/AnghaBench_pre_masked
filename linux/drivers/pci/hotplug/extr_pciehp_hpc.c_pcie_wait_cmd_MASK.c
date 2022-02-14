
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {unsigned long cmd_started; int slot_ctrl; int cmd_busy; int queue; } ;


 scalar_t__ FUNC_0 (struct controller*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct controller*,char*,int,int ) ;
 unsigned long VAR_2 ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned int) ;
 int FUNC_4 (struct controller*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int ,int,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct controller *VAR_4)
{
 unsigned int VAR_5 = VAR_3 ? 2500 : 1000;
 unsigned long VAR_6 = FUNC_3(VAR_5);
 unsigned long VAR_7 = VAR_4->cmd_started + VAR_6;
 unsigned long VAR_8, VAR_9;
 int VAR_10;





 if (FUNC_0(VAR_4))
  return;

 if (!VAR_4->cmd_busy)
  return;





 VAR_8 = VAR_2;
 if (FUNC_5(VAR_7, VAR_8))
  VAR_9 = 1;
 else
  VAR_9 = VAR_7 - VAR_8;

 if (VAR_4->slot_ctrl & VAR_1 &&
     VAR_4->slot_ctrl & VAR_0)
  VAR_10 = FUNC_6(VAR_4->queue, !VAR_4->cmd_busy, VAR_9);
 else
  VAR_10 = FUNC_4(VAR_4, FUNC_2(VAR_9));

 if (!VAR_10)
  FUNC_1(VAR_4, "Timeout on hotplug command %#06x (issued %u msec ago)\n",
     VAR_4->slot_ctrl,
     FUNC_2(VAR_2 - VAR_4->cmd_started));
}
