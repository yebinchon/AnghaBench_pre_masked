
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum hp_wmi_radio { ____Placeholder_hp_wmi_radio } hp_wmi_radio ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(enum hp_wmi_radio VAR_1)
{
 int VAR_2 = 0x200 << (VAR_1 * 8);

 int VAR_3 = FUNC_1(VAR_0);


 FUNC_0(VAR_3 < 0, "error executing HPWMI_WIRELESS_QUERY");

 return !(VAR_3 & VAR_2);
}
