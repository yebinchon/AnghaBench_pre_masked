
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int flags; int pdev_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const* const) ;
 int FUNC_2 (struct adapter*,int ) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_3)
{
 static const char *const VAR_4[] = {
  "Crash",
  "During Device Preparation",
  "During Device Configuration",
  "During Device Initialization",
  "Unexpected Event",
  "Insufficient Airflow",
  "Device Shutdown",
  "Reserved",
 };
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_1);
 if (VAR_5 & VAR_2) {
  FUNC_1(VAR_3->pdev_dev, "Firmware reports adapter error: %s\n",
   VAR_4[FUNC_0(VAR_5)]);
  VAR_3->flags &= ~VAR_0;
 }
}
