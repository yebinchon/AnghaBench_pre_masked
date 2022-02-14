
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,char*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_6, u32 VAR_7)
{
 if (VAR_7 & VAR_5)
  FUNC_0(VAR_6, "Message RAM Watchdog event due to missing READY\n");
 if (VAR_7 & VAR_2)
  FUNC_0(VAR_6, "Error Logging Overflow\n");
 if (VAR_7 & VAR_1)
  FUNC_0(VAR_6, "Bit Error Uncorrected\n");
 if (VAR_7 & VAR_0)
  FUNC_0(VAR_6, "Bit Error Corrected\n");
 if (VAR_7 & VAR_4)
  FUNC_0(VAR_6, "Timeout reached\n");
 if (VAR_7 & VAR_3)
  FUNC_0(VAR_6, "Message RAM access failure occurred\n");
}
