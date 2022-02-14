
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct asus_wmi {int fan_boost_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct asus_wmi *VAR_2)
{
 int VAR_3;
 u8 VAR_4;
 u32 VAR_5;

 VAR_4 = VAR_2->fan_boost_mode;

 FUNC_1("Set fan boost mode: %u\n", VAR_4);
 VAR_3 = FUNC_0(VAR_0, VAR_4,
        &VAR_5);
 if (VAR_3) {
  FUNC_2("Failed to set fan boost mode: %d\n", VAR_3);
  return VAR_3;
 }

 if (VAR_5 != 1) {
  FUNC_2("Failed to set fan boost mode (retval): 0x%x\n",
   VAR_5);
  return -VAR_1;
 }

 return 0;
}
