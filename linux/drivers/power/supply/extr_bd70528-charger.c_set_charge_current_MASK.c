
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bd70528_psy {int regmap; int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *,int ,int,unsigned int*,int*) ;
 int FUNC_4 (int ,int ,int ,unsigned int) ;
 int * VAR_7 ;

__attribute__((used)) static int FUNC_5(struct bd70528_psy *VAR_8, int VAR_9)
{
 unsigned int VAR_10;
 int VAR_11 = 0, VAR_12;
 bool VAR_13;

 if (VAR_9 > 500) {
  FUNC_2(VAR_8->dev,
    "Requested charge current %u exceed maximum (500mA)\n",
    VAR_9);
  VAR_10 = VAR_5;
  goto set;
 }
 if (VAR_9 < 10) {
  FUNC_1(VAR_8->dev,
   "Requested charge current %u smaller than min (10mA)\n",
    VAR_9);
  VAR_10 = VAR_6;
  VAR_11 = -VAR_3;
  goto set;
 }

 VAR_11 = FUNC_3(&VAR_7[0],
       FUNC_0(VAR_7), VAR_9,
       &VAR_10, &VAR_13);
 if (VAR_11) {
  VAR_10 = VAR_6;
  goto set;
 }
 if (!VAR_13) {

  FUNC_2(VAR_8->dev,
    "Unsupported charge current %u mA\n", VAR_9);
 }
set:

 VAR_12 = FUNC_4(VAR_8->regmap,
        VAR_2,
        VAR_0, VAR_10);
 if (VAR_12)
  FUNC_1(VAR_8->dev,
   "Charge current write failure (%d)\n", VAR_12);

 if (VAR_10 > VAR_4)
  VAR_10 = VAR_4;

 if (!VAR_12)
  VAR_12 = FUNC_4(VAR_8->regmap,
         VAR_1,
         VAR_0, VAR_10);

 if (!VAR_11)
  VAR_11 = VAR_12;

 return VAR_11;
}
