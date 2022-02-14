
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pn544_i2c_phy {int fw_work; int fw_work_state; int hw_variant; int firmware_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, const char *VAR_2,
     u8 VAR_3)
{
 struct pn544_i2c_phy *VAR_4 = VAR_1;

 FUNC_0("Starting Firmware Download (%s)\n", VAR_2);

 FUNC_2(VAR_4->firmware_name, VAR_2);

 VAR_4->hw_variant = VAR_3;
 VAR_4->fw_work_state = VAR_0;

 FUNC_1(&VAR_4->fw_work);

 return 0;
}
