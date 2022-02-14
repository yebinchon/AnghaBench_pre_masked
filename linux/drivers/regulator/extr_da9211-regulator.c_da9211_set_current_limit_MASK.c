
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct da9211 {int chip_id; int regmap; } ;


 int FUNC_0 (int*) ;

 int VAR_0 ;


 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 struct da9211* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_5, int VAR_6,
        int VAR_7)
{
 int VAR_8 = FUNC_2(VAR_5);
 struct da9211 *VAR_9 = FUNC_1(VAR_5);
 int VAR_10, VAR_11;
 const int *VAR_12;

 switch (VAR_9->chip_id) {
 case 130:
  VAR_12 = VAR_2;
  VAR_11 = FUNC_0(VAR_2)-1;
  break;
 case 129:
  VAR_12 = VAR_3;
  VAR_11 = FUNC_0(VAR_3)-1;
  break;
 case 128:
  VAR_12 = VAR_4;
  VAR_11 = FUNC_0(VAR_4)-1;
  break;
 default:
  return -VAR_1;
 }


 for (VAR_10 = VAR_11; VAR_10 >= 0; VAR_10--) {
  if (VAR_6 <= VAR_12[VAR_10] &&
      VAR_7 >= VAR_12[VAR_10]) {
    return FUNC_3(VAR_9->regmap,
     VAR_0,
     (0x0F << VAR_8*4), (VAR_10 << VAR_8*4));
  }
 }

 return -VAR_1;
}
