
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ revision; int boot_status; scalar_t__ supports_temp; int fw_ver_str; int io_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_6;


 if (VAR_5.revision == VAR_1)
  FUNC_3("ISA-PC Watchdog (REV.A) detected at port 0x%04x\n",
   VAR_5.io_addr);
 else if (VAR_5.revision == VAR_2) {
  FUNC_0();
  FUNC_3("ISA-PC Watchdog (REV.C) detected at port 0x%04x (Firmware version: %s)\n",
   VAR_5.io_addr, VAR_5.fw_ver_str);
  VAR_6 = FUNC_1();
  FUNC_3("Option switches (0x%02x): Temperature Reset Enable=%s, Power On Delay=%s\n",
   VAR_6,
   ((VAR_6 & 0x10) ? "ON" : "OFF"),
   ((VAR_6 & 0x08) ? "ON" : "OFF"));


  if (FUNC_5()) {
   FUNC_4(VAR_0);
   FUNC_6();
  }
 }

 if (VAR_5.supports_temp)
  FUNC_3("Temperature Option Detected\n");

 if (VAR_5.boot_status & VAR_3)
  FUNC_3("Previous reboot was caused by the card\n");

 if (VAR_5.boot_status & VAR_4) {
  FUNC_2("Card senses a CPU Overheat. Panicking!\n");
  FUNC_2("CPU Overheat\n");
 }

 if (VAR_5.boot_status == 0)
  FUNC_3("No previous trip detected - Cold boot or reset\n");
}
