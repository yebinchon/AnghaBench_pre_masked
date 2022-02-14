
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv3028_data {int regmap; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 long FUNC_1 (long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (long,long,long) ;
 struct rv3028_data* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int ,int ,long) ;
 int FUNC_5 (int ,int ,long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, long VAR_4)
{
 struct rv3028_data *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;

 VAR_4 = FUNC_2(VAR_4, -244141L, 243187L) * 1000;
 VAR_4 = FUNC_1(VAR_4, VAR_0);

 VAR_6 = FUNC_5(VAR_5->regmap, VAR_2, VAR_4 >> 1);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_4(VAR_5->regmap, VAR_1, FUNC_0(7),
      VAR_4 << 7);
}
