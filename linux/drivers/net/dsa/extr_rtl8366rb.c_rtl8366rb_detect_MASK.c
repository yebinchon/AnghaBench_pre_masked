
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct realtek_smi {int num_mib_counters; int mib_counters; int num_vlan_mc; int num_ports; int cpu_port; int map; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (int ,int,int*) ;
 int VAR_4 ;
 int FUNC_4 (struct realtek_smi*) ;

__attribute__((used)) static int FUNC_5(struct realtek_smi *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 int VAR_7;
 u32 VAR_8;


 VAR_7 = FUNC_3(VAR_5->map, 0x5c, &VAR_8);
 if (VAR_7) {
  FUNC_1(VAR_6, "can't get chip ID (%d)\n", VAR_7);
  return VAR_7;
 }

 switch (VAR_8) {
 case 0x6027:
  FUNC_2(VAR_6, "found an RTL8366S switch\n");
  FUNC_1(VAR_6, "this switch is not yet supported, submit patches!\n");
  return -VAR_0;
 case 0x5937:
  FUNC_2(VAR_6, "found an RTL8366RB switch\n");
  VAR_5->cpu_port = VAR_3;
  VAR_5->num_ports = VAR_1;
  VAR_5->num_vlan_mc = VAR_2;
  VAR_5->mib_counters = VAR_4;
  VAR_5->num_mib_counters = FUNC_0(VAR_4);
  break;
 default:
  FUNC_2(VAR_6, "found an Unknown Realtek switch (id=0x%04x)\n",
    VAR_8);
  break;
 }

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7)
  return VAR_7;

 return 0;
}
