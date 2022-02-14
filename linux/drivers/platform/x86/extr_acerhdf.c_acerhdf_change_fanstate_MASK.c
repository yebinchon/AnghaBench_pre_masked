
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char cmd_off; unsigned char cmd_auto; } ;
struct TYPE_6__ {scalar_t__ mcmd_enable; int fanreg; TYPE_1__ cmd; } ;
struct TYPE_5__ {unsigned char moff; int mreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,unsigned char) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_3(int VAR_6)
{
 unsigned char VAR_7;

 if (VAR_5)
  FUNC_2("fan %s\n", VAR_6 == VAR_1 ? "OFF" : "ON");

 if ((VAR_6 != VAR_1) && (VAR_6 != VAR_0)) {
  FUNC_1("invalid fan state %d requested, setting to auto!\n",
         VAR_6);
  VAR_6 = VAR_0;
 }

 VAR_7 = (VAR_6 == VAR_1) ? VAR_2.cmd.cmd_off
      : VAR_2.cmd.cmd_auto;
 VAR_3 = VAR_6;

 FUNC_0(VAR_2.fanreg, VAR_7);

 if (VAR_2.mcmd_enable && VAR_6 == VAR_1) {
  if (VAR_5)
   FUNC_2("turning off fan manually\n");
  FUNC_0(VAR_4.mreg, VAR_4.moff);
 }
}
