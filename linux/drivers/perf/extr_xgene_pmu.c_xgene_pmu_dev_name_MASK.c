
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;


 int VAR_0 ;





 char* FUNC_0 (struct device*,int ,char*,...) ;

__attribute__((used)) static char *FUNC_1(struct device *VAR_1, u32 VAR_2, int VAR_3)
{
 switch (VAR_2) {
 case 130:
  return FUNC_0(VAR_1, VAR_0, "l3c%d", VAR_3);
 case 132:
  return FUNC_0(VAR_1, VAR_0, "iob%d", VAR_3);
 case 131:
  return FUNC_0(VAR_1, VAR_0, "iob_slow%d", VAR_3);
 case 128:
  return FUNC_0(VAR_1, VAR_0, "mcb%d", VAR_3);
 case 129:
  return FUNC_0(VAR_1, VAR_0, "mc%d", VAR_3);
 default:
  return FUNC_0(VAR_1, VAR_0, "unknown");
 }
}
