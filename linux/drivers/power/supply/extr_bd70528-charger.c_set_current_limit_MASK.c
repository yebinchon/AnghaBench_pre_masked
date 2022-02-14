
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bd70528_psy {int regmap; int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *,int ,int,unsigned int*,int*) ;
 int FUNC_4 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct bd70528_psy *VAR_6, int VAR_7)
{
 unsigned int VAR_8;
 int VAR_9 = 0, VAR_10;
 bool VAR_11;

 if (VAR_7 > 500) {
  FUNC_2(VAR_6->dev,
    "Requested current limit %u exceed maximum (500mA)\n",
    VAR_7);
  VAR_8 = VAR_3;
  goto set;
 }
 if (VAR_7 < 5) {
  FUNC_1(VAR_6->dev,
   "Requested current limit %u smaller than min (5mA)\n",
   VAR_7);
  VAR_8 = VAR_4;
  VAR_9 = -VAR_2;
  goto set;
 }

 VAR_9 = FUNC_3(&VAR_5[0],
       FUNC_0(VAR_5), VAR_7,
       &VAR_8, &VAR_11);
 if (VAR_9) {
  VAR_8 = VAR_4;
  goto set;
 }
 if (!VAR_11) {

  FUNC_2(VAR_6->dev, "Unsupported current limit %umA\n",
    VAR_7);
 }

set:
 VAR_10 = FUNC_4(VAR_6->regmap,
        VAR_1,
        VAR_0, VAR_8);

 if (!VAR_9)
  VAR_9 = VAR_10;

 return VAR_9;
}
