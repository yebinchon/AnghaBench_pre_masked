
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct ips_mcp_limits {int core_power_limit; } ;
struct ips_driver {int turbo_toggle_allowed; int dev; } ;
struct TYPE_2__ {int x86; int x86_model; int x86_model_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 struct ips_mcp_limits VAR_5 ;
 struct ips_mcp_limits VAR_6 ;
 struct ips_mcp_limits VAR_7 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static struct ips_mcp_limits *FUNC_3(struct ips_driver *VAR_8)
{
 u64 VAR_9, VAR_10;
 struct ips_mcp_limits *VAR_11 = ((void*)0);
 u16 VAR_12;

 if (!(VAR_4.x86 == 6 && VAR_4.x86_model == 37)) {
  FUNC_0(VAR_8->dev, "Non-IPS CPU detected.\n");
  return ((void*)0);
 }

 FUNC_1(VAR_0, VAR_10);





 if (VAR_10 & VAR_1)
  VAR_8->turbo_toggle_allowed = 1;
 else
  VAR_8->turbo_toggle_allowed = 0;

 if (FUNC_2(VAR_4.x86_model_id, "CPU       M"))
  VAR_11 = &VAR_6;
 else if (FUNC_2(VAR_4.x86_model_id, "CPU       L"))
  VAR_11 = &VAR_5;
 else if (FUNC_2(VAR_4.x86_model_id, "CPU       U"))
  VAR_11 = &VAR_7;
 else {
  FUNC_0(VAR_8->dev, "No CPUID match found.\n");
  return ((void*)0);
 }

 FUNC_1(VAR_2, VAR_9);
 VAR_12 = VAR_9 & VAR_3;


 if (VAR_11->core_power_limit != (VAR_12 / 8) * 1000) {
  FUNC_0(VAR_8->dev,
    "CPU TDP doesn't match expected value (found %d, expected %d)\n",
    VAR_12 / 8, VAR_11->core_power_limit / 1000);
  VAR_11->core_power_limit = (VAR_12 / 8) * 1000;
 }

 return VAR_11;
}
