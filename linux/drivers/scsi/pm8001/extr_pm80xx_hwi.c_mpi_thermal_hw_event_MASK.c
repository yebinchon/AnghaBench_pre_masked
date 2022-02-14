
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thermal_hw_event {int rht_lht; int thermal_event; } ;
struct pm8001_hba_info {int dummy; } ;


 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct pm8001_hba_info *VAR_0, void *VAR_1)
{
 struct thermal_hw_event *VAR_2 =
  (struct thermal_hw_event *)(VAR_1 + 4);

 u32 VAR_3 = FUNC_1(VAR_2->thermal_event);
 u32 VAR_4 = FUNC_1(VAR_2->rht_lht);

 if (VAR_3 & 0x40) {
  FUNC_0(VAR_0, FUNC_2(
   "Thermal Event: Local high temperature violated!\n"));
  FUNC_0(VAR_0, FUNC_2(
   "Thermal Event: Measured local high temperature %d\n",
    ((VAR_4 & 0xFF00) >> 8)));
 }
 if (VAR_3 & 0x10) {
  FUNC_0(VAR_0, FUNC_2(
   "Thermal Event: Remote high temperature violated!\n"));
  FUNC_0(VAR_0, FUNC_2(
   "Thermal Event: Measured remote high temperature %d\n",
    ((VAR_4 & 0xFF000000) >> 24)));
 }
 return 0;
}
