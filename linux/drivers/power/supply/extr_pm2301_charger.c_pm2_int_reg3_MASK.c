
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm2xxx_charger {int dev; int failure_case; } ;


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
 int FUNC_1 (struct pm2xxx_charger*,int) ;
 int FUNC_2 (struct pm2xxx_charger*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_9, int VAR_10)
{
 struct pm2xxx_charger *VAR_11 = VAR_9;
 int VAR_12 = 0;

 if (VAR_10 & (VAR_1)) {
  FUNC_0(VAR_11->dev ,
   "chargind operation has started\n");
 }

 if (VAR_10 & (VAR_5)) {
  FUNC_0(VAR_11->dev,
   "battery discharged down to VResume threshold\n");
 }

 if (VAR_10 & (VAR_0)) {
  FUNC_0(VAR_11->dev , "battery fully detected\n");
 }

 if (VAR_10 & (VAR_2)) {
  FUNC_0(VAR_11->dev, "CV phase enter with 0.5C charging\n");
 }

 if (VAR_10 & (VAR_4 | VAR_3)) {
  VAR_11->failure_case = VAR_8;
  VAR_12 = FUNC_2(VAR_11, VAR_10 &
   (VAR_4 | VAR_3));
  FUNC_0(VAR_11->dev, "VPWR/VSYSTEM overvoltage detected\n");
 }

 if (VAR_10 & (VAR_6 |
    VAR_7)) {
  VAR_12 = FUNC_1(VAR_11, VAR_10 &
   (VAR_6 |
   VAR_7));
  FUNC_0(VAR_11->dev, "BTEMP is too Low/High\n");
 }

 return VAR_12;
}
