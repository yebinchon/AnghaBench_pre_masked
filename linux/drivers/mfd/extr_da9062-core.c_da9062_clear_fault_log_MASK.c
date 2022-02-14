
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9062 {int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct da9062 *VAR_9)
{
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(VAR_9->regmap, VAR_0, &VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_11) {
  if (VAR_11 & VAR_5)
   FUNC_0(VAR_9->dev, "Fault log entry detected: TWD_ERROR\n");
  if (VAR_11 & VAR_3)
   FUNC_0(VAR_9->dev, "Fault log entry detected: POR\n");
  if (VAR_11 & VAR_6)
   FUNC_0(VAR_9->dev, "Fault log entry detected: VDD_FAULT\n");
  if (VAR_11 & VAR_7)
   FUNC_0(VAR_9->dev, "Fault log entry detected: VDD_START\n");
  if (VAR_11 & VAR_4)
   FUNC_0(VAR_9->dev, "Fault log entry detected: TEMP_CRIT\n");
  if (VAR_11 & VAR_1)
   FUNC_0(VAR_9->dev, "Fault log entry detected: KEY_RESET\n");
  if (VAR_11 & VAR_2)
   FUNC_0(VAR_9->dev, "Fault log entry detected: NSHUTDOWN\n");
  if (VAR_11 & VAR_8)
   FUNC_0(VAR_9->dev, "Fault log entry detected: WAIT_SHUT\n");

  VAR_10 = FUNC_2(VAR_9->regmap, VAR_0,
       VAR_11);
 }

 return VAR_10;
}
