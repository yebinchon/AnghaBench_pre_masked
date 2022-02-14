
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_i2c_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct video_i2c_data *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5->regmap, VAR_1, VAR_0);
 if (VAR_6)
  return VAR_6;

 FUNC_0(50);

 VAR_6 = FUNC_1(VAR_5->regmap, VAR_2, VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_2(2000, 3000);

 VAR_6 = FUNC_1(VAR_5->regmap, VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;




 FUNC_0(200);

 return 0;
}
