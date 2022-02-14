
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9063 {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct da9063 *VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = 0;

 VAR_11 = FUNC_2(VAR_10->regmap, VAR_3, &VAR_12);
 if (VAR_11 < 0) {
  FUNC_1(VAR_10->dev, "Cannot read FAULT_LOG.\n");
  return -VAR_9;
 }

 if (VAR_12) {
  if (VAR_12 & VAR_5)
   FUNC_0(VAR_10->dev,
    "Fault log entry detected: DA9063_TWD_ERROR\n");
  if (VAR_12 & VAR_2)
   FUNC_0(VAR_10->dev,
    "Fault log entry detected: DA9063_POR\n");
  if (VAR_12 & VAR_6)
   FUNC_0(VAR_10->dev,
    "Fault log entry detected: DA9063_VDD_FAULT\n");
  if (VAR_12 & VAR_7)
   FUNC_0(VAR_10->dev,
    "Fault log entry detected: DA9063_VDD_START\n");
  if (VAR_12 & VAR_4)
   FUNC_0(VAR_10->dev,
    "Fault log entry detected: DA9063_TEMP_CRIT\n");
  if (VAR_12 & VAR_0)
   FUNC_0(VAR_10->dev,
    "Fault log entry detected: DA9063_KEY_RESET\n");
  if (VAR_12 & VAR_1)
   FUNC_0(VAR_10->dev,
    "Fault log entry detected: DA9063_NSHUTDOWN\n");
  if (VAR_12 & VAR_8)
   FUNC_0(VAR_10->dev,
    "Fault log entry detected: DA9063_WAIT_SHUT\n");
 }

 VAR_11 = FUNC_3(VAR_10->regmap,
      VAR_3,
      VAR_12);
 if (VAR_11 < 0)
  FUNC_1(VAR_10->dev,
   "Cannot reset FAULT_LOG values %d\n", VAR_11);

 return VAR_11;
}
