
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int boot_status; scalar_t__ supports_temp; scalar_t__ io_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_4, VAR_5, VAR_6;
 char VAR_7[20];
 int VAR_8;

 VAR_4 = FUNC_2(VAR_0, &VAR_5,
        &VAR_6);
 if (VAR_4)
  FUNC_3(VAR_7, "%u.%02u", VAR_5, VAR_6);
 else
  FUNC_3(VAR_7, "<card no answer>");


 VAR_8 = FUNC_0();

 FUNC_1("Found card at port 0x%04x (Firmware: %s) %s temp option\n",
  (int) VAR_3.io_addr, VAR_7,
  (VAR_3.supports_temp ? "with" : "without"));

 FUNC_1("Option switches (0x%02x): Temperature Reset Enable=%s, Power On Delay=%s\n",
  VAR_8,
  ((VAR_8 & 0x10) ? "ON" : "OFF"),
  ((VAR_8 & 0x08) ? "ON" : "OFF"));

 if (VAR_3.boot_status & VAR_1)
  FUNC_1("Previous reset was caused by the Watchdog card\n");

 if (VAR_3.boot_status & VAR_2)
  FUNC_1("Card sensed a CPU Overheat\n");

 if (VAR_3.boot_status == 0)
  FUNC_1("No previous trip detected - Cold boot or reset\n");
}
