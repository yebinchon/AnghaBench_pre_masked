
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc3589 {int regmap; int * regulators; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_8, void *VAR_9)
{
 struct ltc3589 *VAR_10 = VAR_9;
 unsigned int VAR_11, VAR_12, VAR_13;

 FUNC_0(VAR_10->regmap, VAR_2, &VAR_12);

 if (VAR_12 & VAR_3) {
  VAR_13 = VAR_6;
  for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
          FUNC_2(VAR_10->regulators[VAR_11]);
   FUNC_3(VAR_10->regulators[VAR_11],
            VAR_13, ((void*)0));
          FUNC_4(VAR_10->regulators[VAR_11]);
  }
 }

 if (VAR_12 & VAR_4) {
  VAR_13 = VAR_7;
  for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
          FUNC_2(VAR_10->regulators[VAR_11]);
   FUNC_3(VAR_10->regulators[VAR_11],
            VAR_13, ((void*)0));
          FUNC_4(VAR_10->regulators[VAR_11]);
  }
 }


 FUNC_1(VAR_10->regmap, VAR_1, 0);

 return VAR_0;
}
