
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct da9052*,int ) ;
 int FUNC_1 (struct da9052*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct da9052 *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = 0;

 VAR_10 = FUNC_0(VAR_8, VAR_2);
 if (VAR_10 < 0) {
  FUNC_3(VAR_8->dev,
   "Cannot read FAULT_LOG %d\n", VAR_10);
  return VAR_10;
 }

 if (VAR_10) {
  if (VAR_10 & VAR_4)
   FUNC_2(VAR_8->dev,
    "Fault log entry detected: TWD_ERROR\n");
  if (VAR_10 & VAR_5)
   FUNC_2(VAR_8->dev,
    "Fault log entry detected: VDD_FAULT\n");
  if (VAR_10 & VAR_6)
   FUNC_2(VAR_8->dev,
    "Fault log entry detected: VDD_START\n");
  if (VAR_10 & VAR_3)
   FUNC_2(VAR_8->dev,
    "Fault log entry detected: TEMP_OVER\n");
  if (VAR_10 & VAR_0)
   FUNC_2(VAR_8->dev,
    "Fault log entry detected: KEY_SHUT\n");
  if (VAR_10 & VAR_1)
   FUNC_2(VAR_8->dev,
    "Fault log entry detected: nSD_SHUT\n");
  if (VAR_10 & VAR_7)
   FUNC_2(VAR_8->dev,
    "Fault log entry detected: WAIT_SHUT\n");

  VAR_9 = FUNC_1(VAR_8,
     VAR_2,
     0xFF);
  if (VAR_9 < 0)
   FUNC_3(VAR_8->dev,
    "Cannot reset FAULT_LOG values %d\n", VAR_9);
 }

 return VAR_9;
}
