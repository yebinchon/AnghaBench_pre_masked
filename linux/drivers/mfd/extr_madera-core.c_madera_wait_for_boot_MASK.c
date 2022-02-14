
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera {int dev; int regmap; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct madera *VAR_7)
{
 ktime_t VAR_8;
 unsigned int VAR_9 = 0;
 int VAR_10 = 0;
 VAR_8 = FUNC_1(FUNC_3(), VAR_4);
 FUNC_5(VAR_7->regmap, VAR_5, &VAR_9);
 while (!(VAR_9 & VAR_2) &&
        !FUNC_2(FUNC_3(), VAR_8)) {
  FUNC_7(VAR_3 / 2,
        VAR_3);
  FUNC_5(VAR_7->regmap, VAR_5, &VAR_9);
 }

 if (!(VAR_9 & VAR_2)) {
  FUNC_0(VAR_7->dev, "Polling BOOT_DONE_STS timed out\n");
  VAR_10 = -VAR_0;
 }





 FUNC_6(VAR_7->regmap, VAR_6,
       VAR_1);

 FUNC_4(VAR_7->dev);

 return VAR_10;
}
