
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,unsigned char*,int ,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device_node*,char*) ;
 scalar_t__ FUNC_4 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, struct device_node *VAR_4)
{
 unsigned char VAR_5;
 int VAR_6;
 u32 VAR_7 = 0;

 if (FUNC_4(VAR_4, "trickle-resistor-ohms" , &VAR_7))
  return 0;

 switch (VAR_7) {
 case 180+940:





  if (FUNC_3(VAR_4, "trickle-diode-disable")) {
   FUNC_1(VAR_3, "diode and resistor mismatch\n");
   return -VAR_2;
  }
  VAR_5 = 0x05;
  break;

 case 180+20000:


  if (!FUNC_3(VAR_4, "trickle-diode-disable")) {
   FUNC_1(VAR_3, "bq32k: diode and resistor mismatch\n");
   return -VAR_2;
  }
  VAR_5 = 0x45;
  break;

 default:
  FUNC_1(VAR_3, "invalid resistor value (%d)\n", VAR_7);
  return -VAR_2;
 }

 VAR_6 = FUNC_0(VAR_3, &VAR_5, VAR_0, 1);
 if (VAR_6)
  return VAR_6;

 VAR_5 = 0x20;
 VAR_6 = FUNC_0(VAR_3, &VAR_5, VAR_1, 1);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_3, "Enabled trickle RTC battery charge.\n");
 return 0;
}
