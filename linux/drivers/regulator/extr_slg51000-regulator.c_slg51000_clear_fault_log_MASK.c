
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slg51000 {int dev; int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct slg51000 *VAR_5)
{
 unsigned int VAR_6 = 0;
 int VAR_7 = 0;

 VAR_7 = FUNC_2(VAR_5->regmap, VAR_4, &VAR_6);
 if (VAR_7 < 0) {
  FUNC_1(VAR_5->dev, "Failed to read Fault log register\n");
  return;
 }

 if (VAR_6 & VAR_0)
  FUNC_0(VAR_5->dev, "Fault log: FLT_OVER_TEMP\n");
 if (VAR_6 & VAR_2)
  FUNC_0(VAR_5->dev, "Fault log: FLT_POWER_SEQ_CRASH_REQ\n");
 if (VAR_6 & VAR_3)
  FUNC_0(VAR_5->dev, "Fault log: FLT_RST\n");
 if (VAR_6 & VAR_1)
  FUNC_0(VAR_5->dev, "Fault log: FLT_POR\n");
}
