
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; } ;
typedef scalar_t__ buffer_rw_t ;
struct TYPE_3__ {int config1; int command; } ;
struct TYPE_4__ {int broken; TYPE_1__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;
 TYPE_2__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_9, buffer_rw_t VAR_10, int VAR_11)
{
 int VAR_12 = 1000;

 FUNC_1(FUNC_3(VAR_9)->regs.config1 | VAR_0, VAR_4);
 FUNC_1(FUNC_3(VAR_9)->regs.command | VAR_2, VAR_3);

 while ((FUNC_0(VAR_6) & VAR_7) == 0) {
  if (!VAR_12--) {
   FUNC_2("%s: setbuffer broken\n", VAR_9->name);
   FUNC_3(VAR_9)->broken = 1;
   return 1;
  }
  FUNC_4(1);
 }

 if (VAR_10 == VAR_8) {
  FUNC_1(VAR_11, VAR_5);
  FUNC_1(FUNC_3(VAR_9)->regs.command | VAR_1, VAR_3);
 } else {
  FUNC_1(FUNC_3(VAR_9)->regs.command | VAR_2, VAR_3);
  FUNC_1(VAR_11, VAR_5);
 }
 return 0;
}
