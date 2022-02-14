
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv3028_data {int regmap; } ;
struct device {int dummy; } ;


 long FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rv3028_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, long *VAR_4)
{
 struct rv3028_data *VAR_5 = FUNC_1(VAR_3);
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_2(VAR_5->regmap, VAR_2, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_8 = FUNC_3(VAR_7 << 1, 8);

 VAR_6 = FUNC_2(VAR_5->regmap, VAR_1, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_8 += VAR_7 >> 7;

 *VAR_4 = FUNC_0(VAR_8 * VAR_0, 1000);

 return 0;
}
