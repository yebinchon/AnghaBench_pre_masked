
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfuze_chip {scalar_t__ chip_id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct pfuze_chip* VAR_5 ;

__attribute__((used)) static int FUNC_1(struct pfuze_chip *VAR_6)
{
 if (VAR_6->chip_id != VAR_2) {
  FUNC_0(VAR_6->dev, "Requested pm_power_off_prepare handler for not supported chip\n");
  return -VAR_1;
 }

 if (VAR_4) {
  FUNC_0(VAR_6->dev, "pm_power_off_prepare is already registered.\n");
  return -VAR_0;
 }

 if (VAR_5) {
  FUNC_0(VAR_6->dev, "syspm_pfuze_chip is already set.\n");
  return -VAR_0;
 }

 VAR_5 = VAR_6;
 VAR_4 = VAR_3;

 return 0;
}
